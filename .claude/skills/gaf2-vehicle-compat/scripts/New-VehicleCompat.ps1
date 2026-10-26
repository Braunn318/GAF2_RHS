<#
.SYNOPSIS
  Creates (or extends) a GAF2 compat addon that puts a third-party vehicle into the
  GAF2 factions: B/I/O x Flecktarn/Multitarn/Tropentarn, like air_f35_compat.

.EXAMPLE
  # Jet
  .\New-VehicleCompat.ps1 -Addon air_typhoon_compat -Key Typhoon -DisplayName "Eurofighter Typhoon" `
      -ParentClass B_PF_Typhoon_F -RequiredAddons pf_typhoon -Category Planes `
      -Textures "\PF\pf_typhoon\data\Airframe_co.paa" -TextureSource Luftwaffe

  # Helicopter with door gunners (Heli_Crew) and a copilot seat (Helipilot)
  .\New-VehicleCompat.ps1 -Addon air_uh60_compat -Key UH60 -DisplayName "UH-60M" `
      -ParentClass CUP_B_UH60M_US -RequiredAddons CUP_AirVehicles_UH60 -Category Helicopters `
      -Gunners "LeftDoorGun","RightDoorGun","CopilotTurret=Helipilot"

  # Add a second vehicle to the same addon
  .\New-VehicleCompat.ps1 -Addon air_typhoon_compat -Append -Key Typhoon_2seat ...

.NOTES
  -Category   Planes | Helicopters | Cars | Tanks | APCs | AA | Artillery | Boats | Drones
              (or any raw editorSubcategory class name, e.g. PlanesVanilla)
  -Crew       Driver/pilot role (crew=), without side/camo prefix.
              Defaults: Planes Jetpilot, Helicopters Helipilot, Cars/Boats Rifleman, armour Crew
  -CargoRole  Role in typicalCargo[] (passengers the vehicle "belongs" with).
              Defaults: Planes Jetpilot, Helicopters Heli_Crew, others same as -Crew
  -Gunners    Top-level turret class names that get a GAF2 gunner (see Inspect-Mod "Turrets").
              "Name" uses -GunnerRole, "Name=Role" sets the role for that seat.
  -GunnerRole Default role for -Gunners. Defaults: Helicopters Heli_Crew, Cars MachineGunner_MG5, others Crew
  -Cargo      Jet | Heli | Transport | None  (inventory presets from def_const/def_camo)
  -Sides      Any of B, I, O (default all three)
  -Textures   hiddenSelectionsTextures[]; leave out to keep the source mod's default textures.
              Paths starting with "data\" are made relative to the new addon (your own .paa files).
#>
param(
    [Parameter(Mandatory)][string]$Addon,
    [Parameter(Mandatory)][string]$Key,
    [Parameter(Mandatory)][string]$DisplayName,
    [Parameter(Mandatory)][string]$ParentClass,
    [string[]]$RequiredAddons = @(),
    [string]$Category = 'Planes',
    [string]$Crew,
    [string]$CargoRole,
    [string[]]$Gunners = @(),
    [string]$GunnerRole,
    [ValidateSet('Jet', 'Heli', 'Transport', 'None')][string]$Cargo,
    [string[]]$Textures,
    [string]$TextureSource,
    [string]$EditorPreview,
    [ValidateSet('B', 'I', 'O')][string[]]$Sides = @('B', 'I', 'O'),
    [switch]$Append,
    [string]$RepoRoot
)
$ErrorActionPreference = 'Stop'

# ---------- inputs ----------
if (-not $RepoRoot) { $RepoRoot = (& git -C $PSScriptRoot rev-parse --show-toplevel).Trim() }
$template = Join-Path $PSScriptRoot '..\template'
$dir = Join-Path $RepoRoot "addons\$Addon"

if ($Addon -notmatch '^[a-z0-9_]+$') { throw '-Addon must be lowercase letters, digits and _ (e.g. air_typhoon_compat).' }
if ($Key -notmatch '^[A-Za-z0-9_]+$') { throw '-Key must be letters, digits and _ only (it becomes part of the class name).' }
if ($DisplayName -match '[,"]') { throw '-DisplayName cannot contain commas or quotes (it goes through a macro).' }

$catMap = @{ planes = 'EdSubcat_Planes'; helicopters = 'EdSubcat_Helicopters'; helis = 'EdSubcat_Helicopters'; cars = 'EdSubcat_Cars';
    tanks = 'EdSubcat_Tanks'; apcs = 'EdSubcat_APCs'; aa = 'EdSubcat_AAs'; artillery = 'EdSubcat_Artillery'; boats = 'EdSubcat_Boats'; drones = 'EdSubcat_Drones' }
$subcat = if ($catMap.ContainsKey($Category.ToLower())) { $catMap[$Category.ToLower()] } else { $Category }
$isPlane = $subcat -match 'Plane'
$isHeli = $subcat -match 'Heli'
$isCar = $subcat -match 'Car|Boat|Truck|MyMP'
if (-not $Crew) { $Crew = if ($isPlane) { 'Jetpilot' } elseif ($isHeli) { 'Helipilot' } elseif ($isCar) { 'Rifleman' } else { 'Crew' } }
if (-not $CargoRole) { $CargoRole = if ($isHeli) { 'Heli_Crew' } else { $Crew } }
if (-not $GunnerRole) { $GunnerRole = if ($isHeli) { 'Heli_Crew' } elseif ($isCar) { 'MachineGunner_MG5' } else { 'Crew' } }
if (-not $Cargo) { $Cargo = if ($isPlane) { 'Jet' } elseif ($isHeli) { 'Heli' } else { 'Transport' } }
$cargoMacros = @{
    Jet       = 'MAGS_TIGER,BSC_ITMS,DUMMY_WP'
    Heli      = 'MAGS_TIGER,ITMS_TIGER,TRN_SD_WEAP_HELI'
    Transport = 'TRN_SD_MAGS_TPLANE,TRN_SD_ITMS_TPLANE,TRN_SD_WEAP_HELI'
    None      = 'EMPTY,EMPTY,EMPTY'
}[$Cargo]

# "LeftDoorGun" / "CopilotTurret=Helipilot" -> turret + role
$seats = foreach ($g in $Gunners) {
    $turret, $role = $g -split '=', 2
    if (-not $role) { $role = $GunnerRole }
    if ($turret -notmatch '^\w+$' -or $role -notmatch '^\w+$') { throw "Bad -Gunners entry '$g' (use TurretName or TurretName=Role)." }
    [pscustomobject]@{ Turret = $turret; Role = $role }
}

# warn about roles GAF2 does not have (typo -> vehicle spawns empty)
$unitsPatches = Join-Path $RepoRoot 'addons\units\CfgPatches.hpp'
if (Test-Path $unitsPatches) {
    $known = Get-Content $unitsPatches -Raw
    foreach ($r in (@($Crew, $CargoRole) + ($seats | ForEach-Object Role)) | Select-Object -Unique) {
        if ($known -notmatch "B_GAF2_${r}_flk") { Write-Warning "Role '$r' not found in addons\units (no B_GAF2_${r}_flk). Check the spelling." }
    }
}

# turret names: compare with the configs Inspect-Mod.ps1 cached (a typo compiles fine but gives an empty seat)
if ($seats) {
    $cacheRoot = Join-Path $env:TEMP 'gaf2_modinspect'
    $hit = if (Test-Path $cacheRoot) { Get-ChildItem $cacheRoot -Recurse -Filter *.cpp | Select-String -Pattern "class\s+$ParentClass\s*:" -List | Select-Object -First 1 } else { $null }
    if ($hit) {
        $modDir = Split-Path $hit.Path
        foreach ($t in $seats.Turret) {
            if (-not (Get-ChildItem $modDir -Filter *.cpp | Select-String -Pattern "class\s+$t\b" -List | Select-Object -First 1)) {
                Write-Warning "Turret '$t' does not exist in the source mod. Check the names in Inspect-Mod.ps1 output."
            }
        }
    } else {
        Write-Warning 'Could not check turret names (run Inspect-Mod.ps1 on the source mod first).'
    }
}

$utf8 = New-Object System.Text.UTF8Encoding($false)
function Write-File([string]$name, [string]$text) { [IO.File]::WriteAllText((Join-Path $dir $name), (($text.TrimEnd() + "`n") -replace "`r?`n", "`r`n"), $utf8) }
function Q([string]$s) { '"' + $s + '"' }

$base = "B_GAF2_${Key}_base"
$units = foreach ($s in $Sides) { foreach ($c in 'flk', 'mlt', 'trp') { "${s}_GAF2_${Key}_$c" } }

# ---------- base class (hidden; the macro derives the visible ones) ----------
$texLines = ''
if ($Textures) {
    $fixed = $Textures | ForEach-Object { if ($_ -match '^data\\') { "z\gaf2\addons\$Addon\$_" } else { $_ } }
    $texLines += "`n    hiddenSelectionsTextures[] = {$((($fixed | ForEach-Object { Q $_ }) -join ', '))};"
}
if ($TextureSource) { $texLines += "`n    textureList[] = {$(Q $TextureSource), 1};" }
$previewLine = if ($EditorPreview) { "`n    editorPreview = $(Q $EditorPreview);" } else { '' }

$baseParent = $ParentClass
$importClass = ''
$turretLines = ''
if ($seats) {
    # Same trick as cars\cfgVehicles_basicDefines.hpp (BWA3_Eagle_Import1): make the inherited
    # Turrets class and its seats visible, so child classes can change gunnerType.
    $baseParent = "B_GAF2_${Key}_import"
    $importClass = @"

// Exposes the source vehicle's Turrets so the GAF2 versions can set their own gunners.
class $baseParent : $ParentClass
{
    scope = 0;
    scopeCurator = 0;
    class Turrets;
};
"@
    $turretLines = "`n    class Turrets : Turrets`n    {`n" + (($seats | ForEach-Object { "        class $($_.Turret);" }) -join "`n") + "`n    };"
}

$baseClass = @"
$importClass
// $DisplayName - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class $base : $baseParent
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "B_GAF2_FLK";
    displayName = $(Q $DisplayName);$previewLine
    crew = "B_GAF2_${Crew}_flk";
    typicalCargo[] = {"B_GAF2_${CargoRole}_flk"};$texLines$turretLines
};

"@

if ($seats) {
    $gunnerMacro = "GAF2_GUNNERS_$Key"
    $gunnerDefine = "#define $gunnerMacro " + (($seats | ForEach-Object { "GAF2_GUNNER($($_.Turret),$($_.Role));" }) -join ' ')
    $macroLine = "VEHICULOFIXG($Key,$DisplayName,$Crew,$CargoRole,$subcat,$base,$cargoMacros,$gunnerMacro);"
} else {
    $gunnerDefine = $null
    $macroLine = "VEHICULOFIX($Key,$DisplayName,$Crew,$CargoRole,$subcat,$base,$cargoMacros);"
}

# macros_local.hpp holds VEHICULOFIXG (VEHICULOFIX + gunners) and each vehicle's gunner list
$localMacros = @'
// Local macros for this compat addon (VEHICULOFIX itself lives in addons\main\macros_vehicles.hpp).

// One turret seat: gunner of the current side/camo, e.g. B_GAF2_Heli_Crew_flk
#define GAF2_GUNNER(turret,GNR) class turret: turret { gunnerType = QUOTE(SIDEPRFX##_##GNR##_##CAMO); }

// VEHICULOFIX + gunners. TURRETS is a GAF2_GUNNERS_<Key> macro defined below.
#define VEHICULOFIXG(role, roleDisplayName, CRW, TCGO, EditorCat, baseclass, TRANSMAG, TRANSITM, TRANSWEAP, TURRETS) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
		faction=QUOTE(SIDEPRFX##_##CAMO); \
		side= SIDE_TAG; \
		scopeCurator = 2; \
		scope = 2; \
		editorSubcategory = QUOTE(EditorCat); \
		displayName= QUOTE(roleDisplayName); \
		crew=QUOTE(SIDEPRFX##_##CRW##_##CAMO); \
		typicalCargo[]={QUOTE(SIDEPRFX##_##TCGO##_##CAMO)}; \
		class TransportMagazines{TRANSMAG}; \
		class TransportItems{TRANSITM}; \
		class TransportWeapons{TRANSWEAP}; \
		class Turrets: Turrets { TURRETS }; \
}

// Gunner seats per vehicle: GAF2_GUNNER(turretClass,role);
'@

function Add-GunnerDefine {
    $lm = Join-Path $dir 'macros_local.hpp'
    if (-not (Test-Path $lm)) {
        Write-File 'macros_local.hpp' $localMacros
        # older/hand-made addons: hook the file into config.cpp
        $cfgPath = Join-Path $dir 'config.cpp'
        $cfg = Get-Content $cfgPath -Raw
        if ($cfg -notmatch 'macros_local\.hpp') {
            $cfg = $cfg -replace '(#include\s+"script_component\.hpp")', "`$1`n#include ""macros_local.hpp"""
            Write-File 'config.cpp' $cfg
        }
    }
    if ($gunnerDefine) { Write-File 'macros_local.hpp' ((Get-Content $lm -Raw).TrimEnd() + "`n" + $gunnerDefine) }
}

if (-not $Append) {
    if (Test-Path $dir) { throw "addons\$Addon already exists. Use -Append to add another vehicle to it." }
    New-Item -ItemType Directory -Force $dir | Out-Null

    # boilerplate shared by every vehicle compat addon
    foreach ($f in Get-ChildItem $template -File) {
        Write-File $f.Name ((Get-Content $f.FullName -Raw) -replace '\{\{ADDON\}\}', $Addon)
    }
    $sideFiles = @{ B = 'macroveh_define_blufor.hpp'; I = 'macroveh_define_indfor.hpp'; O = 'macroveh_define_opfor.hpp' }
    $sideIncludes = ($Sides | ForEach-Object { "#include $(Q $sideFiles[$_])" }) -join "`n"
    Write-File 'config.cpp' @"
#include "script_component.hpp"
#include "macros_local.hpp"

class CfgPatches
{
    #include "cfgPatches.hpp"
};

class CfgVehicles
{
    #include "cfgVehicles_basicDefines.hpp"
    #include "def_const.hpp"

$sideIncludes

    #include "undef_const.hpp"
};
"@
    Write-File 'cfgVehicles_basicDefines.hpp' "class $ParentClass;`n$baseClass"
    Write-File 'cfgVehicles_macrounits.hpp' @"
// One line per vehicle. Each line is expanded for every side (macroveh_define_*.hpp) and camo (flk/mlt/trp).
// VEHICULOFIX (classKey, displayName, crewRole, cargoRole, editorSubcategory, baseClass, magazines, items, weapons)
// VEHICULOFIXG(... same ..., gunnerMacro)  - with GAF2 gunners, see macros_local.hpp
// editorSubcategory: EdSubcat_Planes, EdSubcat_Helicopters, HelisVanilla, PlanesVanilla ...

$macroLine
"@
    Add-GunnerDefine
    $req = @('gaf2_air') + $RequiredAddons
    Write-File 'cfgPatches.hpp' @"
class gaf2_$Addon
{
    units[] =
    {
$(($units | ForEach-Object { '        ' + (Q $_) }) -join ",`n")
    };
    weapons[] = {};
    requiredVersion = 2.20;
    requiredAddons[] =
    {
$(($req | ForEach-Object { '        ' + (Q $_) }) -join ",`n")
    };
    skipWhenMissingDependencies = 1; // addon silently stays off when the source mod is not loaded
    author = "braun";
};
"@
    New-Item -ItemType Directory -Force (Join-Path $dir 'data\UI') | Out-Null
    Write-Host "Created addons\$Addon" -ForegroundColor Green
}
else {
    if (-not (Test-Path $dir)) { throw "addons\$Addon does not exist yet - run without -Append first." }
    $bd = Join-Path $dir 'cfgVehicles_basicDefines.hpp'
    $bdText = Get-Content $bd -Raw
    if ($bdText -match "class\s+$base\b") { throw "$base already exists in $Addon." }
    if ($bdText -notmatch "class\s+$ParentClass\s*;") { $bdText = "class $ParentClass;`n" + $bdText }
    Write-File 'cfgVehicles_basicDefines.hpp' ($bdText.TrimEnd() + "`n" + $baseClass)
    Write-File 'cfgVehicles_macrounits.hpp' ((Get-Content (Join-Path $dir 'cfgVehicles_macrounits.hpp') -Raw).TrimEnd() + "`n" + $macroLine)
    Add-GunnerDefine

    $cp = Join-Path $dir 'cfgPatches.hpp'
    $cpText = Get-Content $cp -Raw
    $newUnits = ($units | ForEach-Object { '        ' + (Q $_) }) -join ",`n"
    $cpText = [regex]::Replace($cpText, '(units\[\]\s*=\s*\{[^}]*?)(\s*\};)', { param($m) $m.Groups[1].Value.TrimEnd() + ",`n" + $newUnits + "`n    };" }, 'Singleline')
    foreach ($r in $RequiredAddons) {
        if ($cpText -notmatch [regex]::Escape((Q $r))) {
            $cpText = [regex]::Replace($cpText, '(requiredAddons\[\]\s*=\s*\{[^}]*?)(\s*\};)', { param($m) $m.Groups[1].Value.TrimEnd() + ",`n        " + (Q $r) + "`n    };" }, 'Singleline')
        }
    }
    Write-File 'cfgPatches.hpp' $cpText
    Write-Host "Added $Key to addons\$Addon" -ForegroundColor Green
}

Write-Host "Classes: $($units -join ', ')"
Write-Host "Crew: $Crew   Cargo: $CargoRole$(if ($seats) { '   Gunners: ' + (($seats | ForEach-Object { "$($_.Turret)=$($_.Role)" }) -join ', ') })"
if ($Textures | Where-Object { $_ -match '^data\\' }) {
    Write-Host 'Own textures used: add this addon to texgen.bat and put the .paa files in data\.' -ForegroundColor Yellow
}
