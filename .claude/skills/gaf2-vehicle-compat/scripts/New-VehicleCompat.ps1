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
  -ParentClassDesert  Source class with the desert paint (e.g. Hawks_GTK_Boxer_HMG_Sand). Then flk uses
              -ParentClass and mlt/trp use this one (same split as addons\armored: Fleck / Tropen).
  -TexturesDesert     hiddenSelectionsTextures[] for the desert base (only with -ParentClassDesert).
  -Cargo      Jet | Heli | Transport | Armor | None  (inventory presets from def_const/def_camo)
  -Sides      Any of B, I, O (default all three)
  -Textures   hiddenSelectionsTextures[]; leave out to keep the source mod's default textures.
              Paths starting with "data\" are made relative to the new addon (your own .paa files).
#>
param(
    [Parameter(Mandatory)][string]$Addon,
    [Parameter(Mandatory)][string]$Key,
    [Parameter(Mandatory)][string]$DisplayName,
    [Parameter(Mandatory)][string]$ParentClass,
    [string]$ParentClassDesert,
    [string[]]$TexturesDesert,
    [string[]]$RequiredAddons = @(),
    [string]$Category = 'Planes',
    [string]$Crew,
    [string]$CargoRole,
    [string[]]$Gunners = @(),
    [string]$GunnerRole,
    [ValidateSet('Jet', 'Heli', 'Transport', 'Armor', 'None')][string]$Cargo,
    [string[]]$Textures,
    [string]$TextureSource,
    [string]$EditorPreview,
    [ValidateSet('B', 'I', 'O')][string[]]$Sides = @('B', 'I', 'O'),
    [switch]$Append,
    [switch]$ResetEditorCategory,   # force editorCategory = "" (auto-detected from the inspector cache)
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
if (-not $Cargo) { $Cargo = if ($isPlane) { 'Jet' } elseif ($isHeli) { 'Heli' } elseif ($isCar) { 'Transport' } else { 'Armor' } }
$cargoMacros = @{
    Jet       = 'MAGS_TIGER,BSC_ITMS,DUMMY_WP'
    Heli      = 'MAGS_TIGER,ITMS_TIGER,TRN_SD_WEAP_HELI'
    Transport = 'TRN_SD_MAGS_TPLANE,TRN_SD_ITMS_TPLANE,TRN_SD_WEAP_HELI'
    Armor     = 'MAGS_PUMA,ITMS_PUMA,WEAPS_PUMA'
    None      = 'EMPTY,EMPTY,EMPTY'
}[$Cargo]
if ($TexturesDesert -and -not $ParentClassDesert) { throw '-TexturesDesert needs -ParentClassDesert.' }

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

# A source mod that sets editorCategory (e.g. GTK Boxer: "Hawks_Vehicles") would pull our vehicles out of
# the GAF2 faction in Eden, because editorCategory wins over faction. Reset it when the mod uses it.
$resetCategory = [bool]$ResetEditorCategory
if (-not $resetCategory) {
    $cacheRoot = Join-Path $env:TEMP 'gaf2_modinspect'
    $src = if (Test-Path $cacheRoot) { Get-ChildItem $cacheRoot -Recurse -Filter *.cpp | Select-String -Pattern "class\s+$ParentClass\s*:" -List | Select-Object -First 1 } else { $null }
    if ($src -and (Select-String -Path $src.Path -Pattern '^\s*editorCategory\s*=' -Quiet)) {
        $resetCategory = $true
        Write-Host 'Source mod sets editorCategory - setting it to the GAF2 faction so the vehicles sort with the other GAF2 vehicles.' -ForegroundColor Yellow
    }
}

$utf8 = New-Object System.Text.UTF8Encoding($false)
function Write-File([string]$name, [string]$text) { [IO.File]::WriteAllText((Join-Path $dir $name), (($text.TrimEnd() + "`n") -replace "`r?`n", "`r`n"), $utf8) }
function Q([string]$s) { '"' + $s + '"' }

$units = foreach ($s in $Sides) { foreach ($c in 'flk', 'mlt', 'trp') { "${s}_GAF2_${Key}_$c" } }

# ---------- base class(es) (hidden; the macro derives the visible ones) ----------
# One paint:   B_GAF2_<Key>_base                                  -> VEHICULOFIX  (all camos)
# Two paints:  B_GAF2_<Key>_base_Fleck / B_GAF2_<Key>_base_Tropen -> VEHICULOBWA3 (flk Fleck, mlt/trp Tropen)
$twoPaints = [bool]$ParentClassDesert
$basePrefix = if ($twoPaints) { "B_GAF2_${Key}_base_" } else { "B_GAF2_${Key}_base" }
$previewLine = if ($EditorPreview) { "`n    editorPreview = $(Q $EditorPreview);" } else { '' }

function New-BaseClass([string]$parent, [string]$name, [string]$camo, [string[]]$tex, [string]$texSource) {
    $faction = @{ flk = 'B_GAF2_FLK'; trp = 'B_GAF2_TRP' }[$camo]
    $texLines = ''
    if ($tex) {
        $fixed = $tex | ForEach-Object { if ($_ -match '^data\\') { "z\gaf2\addons\$Addon\$_" } else { $_ } }
        $texLines += "`n    hiddenSelectionsTextures[] = {$((($fixed | ForEach-Object { Q $_ }) -join ', '))};"
    }
    if ($texSource) { $texLines += "`n    textureList[] = {$(Q $texSource), 1};" }
    $baseParent = $parent
    $importClass = ''
    $turretLines = ''
    if ($seats) {
        # Same trick as cars\cfgVehicles_basicDefines.hpp (BWA3_Eagle_Import1): make the inherited
        # Turrets class and its seats visible, so child classes can change gunnerType.
        $baseParent = "${name}_import"
        $importClass = @"

// Exposes the source vehicle's Turrets so the GAF2 versions can set their own gunners.
class $baseParent : $parent
{
    scope = 0;
    scopeCurator = 0;
    class Turrets;
};
"@
        $turretLines = "`n    class Turrets : Turrets`n    {`n" + (($seats | ForEach-Object { "        class $($_.Turret);" }) -join "`n") + "`n    };"
    }
    return @"
$importClass
// $DisplayName - hidden base. cfgVehicles_macrounits.hpp creates the B/I/O x flk/mlt/trp versions from it.
class $name : $baseParent
{
    scope = 0;
    scopeCurator = 0;
    scopeArsenal = 0;
    side = 1;
    faction = "$faction";
    displayName = $(Q $DisplayName);$previewLine
    crew = "B_GAF2_${Crew}_$camo";
    typicalCargo[] = {"B_GAF2_${CargoRole}_$camo"};$texLines$turretLines
};

"@
}

if ($twoPaints) {
    $baseClass = (New-BaseClass $ParentClass "${basePrefix}Fleck" 'flk' $Textures $TextureSource) +
                 (New-BaseClass $ParentClassDesert "${basePrefix}Tropen" 'trp' $TexturesDesert $null)
    $parentDecl = @($ParentClass, $ParentClassDesert)
} else {
    $baseClass = New-BaseClass $ParentClass $basePrefix 'flk' $Textures $TextureSource
    $parentDecl = @($ParentClass)
}

# Plain vehicle: VEHICULOFIX / VEHICULOBWA3 from addons\main.
# With gunners and/or the faction category: VEHICULOFIXX / VEHICULOCAMOX from macros_local.hpp,
# which take one more argument, GAF2_EXTRA_<Key> = extra lines for the class body.
$extraParts = @()
if ($resetCategory) { $extraParts += 'GAF2_EDCAT' }
if ($seats) { $extraParts += 'class Turrets: Turrets { ' + (($seats | ForEach-Object { "GAF2_GUNNER($($_.Turret),$($_.Role));" }) -join ' ') + ' };' }
if ($extraParts) {
    $macroName = if ($twoPaints) { 'VEHICULOCAMOX' } else { 'VEHICULOFIXX' }
    $extraMacro = "GAF2_EXTRA_$Key"
    $extraDefine = "#define $extraMacro " + ($extraParts -join ' ')
    $macroLine = "$macroName($Key,$DisplayName,$Crew,$CargoRole,$subcat,$basePrefix,$cargoMacros,$extraMacro);"
} else {
    $macroName = if ($twoPaints) { 'VEHICULOBWA3' } else { 'VEHICULOFIX' }
    $extraDefine = $null
    $macroLine = "$macroName($Key,$DisplayName,$Crew,$CargoRole,$subcat,$basePrefix,$cargoMacros);"
}

# macros_local.hpp: VEHICULOFIXX / VEHICULOCAMOX (+ extra lines) and each vehicle's GAF2_EXTRA_<Key>
$xMacros = @'
// VEHICULOFIX / VEHICULOBWA3 + EXTRA (gunners, Eden category ...). EXTRA is a GAF2_EXTRA_<Key> macro below.
#define VEHICULOFIXX(role, roleDisplayName, CRW, TCGO, EditorCat, baseclass, TRANSMAG, TRANSITM, TRANSWEAP, EXTRA) \
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
		EXTRA \
}

// Same, parent is baseclass##BWA_CAMO (B_GAF2_<Key>_base_Fleck / _Tropen).
#define VEHICULOCAMOX(role, roleDisplayName, CRW, TCGO, EditorCat, baseclass, TRANSMAG, TRANSITM, TRANSWEAP, EXTRA) \
class SIDEPRFX##_##role##_##CAMO: baseclass##BWA_CAMO { \
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
		EXTRA \
}
'@
$localMacros = @'
// Local macros for this compat addon (VEHICULOFIX itself lives in addons\main\macros_vehicles.hpp).

// One turret seat: gunner of the current side/camo, e.g. B_GAF2_Heli_Crew_flk
#define GAF2_GUNNER(turret,GNR) class turret: turret { gunnerType = QUOTE(SIDEPRFX##_##GNR##_##CAMO); }

// Eden category = the vehicle's own GAF2 faction (e.g. O_GAF2_trp), for source mods that set their
// own editorCategory. The categories are declared in cfgEditorCategories.hpp.
#define GAF2_EDCAT editorCategory = QUOTE(SIDEPRFX##_##CAMO);

'@ + $xMacros + @'

// Extra class lines per vehicle:
'@

function Add-ExtraDefine {
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
    $lmText = (Get-Content $lm -Raw).TrimEnd()
    # macros_local.hpp from an older script version
    if ($lmText -notmatch 'define VEHICULOFIXX') { $lmText += "`n`n" + $xMacros }
    if ($lmText -notmatch 'define GAF2_EDCAT') { $lmText += "`n#define GAF2_EDCAT editorCategory = QUOTE(SIDEPRFX##_##CAMO);" }
    if ($extraDefine) { $lmText += "`n" + $extraDefine }
    Write-File 'macros_local.hpp' $lmText
    if ($resetCategory) { Add-EditorCategories }
}

# Eden categories named exactly like the GAF2 factions, with the same display names, so vehicles with
# editorCategory = "<faction>" sort next to the faction's other vehicles (e.g. the GAF2 Puma).
function Add-EditorCategories {
    $fc = Get-Content (Join-Path $RepoRoot 'addons\main\cfgFactionClasses.hpp') -Raw
    $cats = [regex]::Matches($fc, '(?s)class\s+(\w+)\s*\{.*?displayName\s*=\s*"([^"]*)"') | ForEach-Object {
        "class $($_.Groups[1].Value)`n{`n    displayName = $(Q $_.Groups[2].Value);`n};"
    }
    Write-File 'cfgEditorCategories.hpp' ("// Generated from addons\main\cfgFactionClasses.hpp - same names as the GAF2 factions.`n" + ($cats -join "`n"))
    $cfgPath = Join-Path $dir 'config.cpp'
    $cfg = Get-Content $cfgPath -Raw
    if ($cfg -notmatch 'cfgEditorCategories\.hpp') {
        $cfg = $cfg -replace '(class CfgVehicles)', "class CfgEditorCategories`n{`n    #include ""cfgEditorCategories.hpp""`n};`n`n`$1"
        Write-File 'config.cpp' $cfg
    }
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
    Write-File 'cfgVehicles_basicDefines.hpp' ((($parentDecl | ForEach-Object { "class $_;" }) -join "`n") + "`n$baseClass")
    Write-File 'cfgVehicles_macrounits.hpp' @"
// One line per vehicle. Each line is expanded for every side (macroveh_define_*.hpp) and camo (flk/mlt/trp).
// VEHICULOFIX  (classKey, displayName, crewRole, cargoRole, editorSubcategory, baseClass, magazines, items, weapons)
// VEHICULOBWA3 (same, baseClass is a prefix: flk uses <prefix>Fleck, mlt/trp use <prefix>Tropen)
// VEHICULOFIXX / VEHICULOCAMOX (... same ..., GAF2_EXTRA_<Key>)  - gunners / Eden category, see macros_local.hpp
// editorSubcategory: EdSubcat_Planes, EdSubcat_Helicopters, HelisVanilla, PlanesVanilla ...

$macroLine
"@
    Add-ExtraDefine
    $req = @('gaf2_main', 'gaf2_units') + $RequiredAddons   # GAF2 factions + crew units
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
    if ($bdText -match "class\s+B_GAF2_${Key}_base(_Fleck)?\s*:") { throw "B_GAF2_${Key}_base already exists in $Addon." }
    foreach ($p in $parentDecl) { if ($bdText -notmatch "class\s+$p\s*;") { $bdText = "class $p;`n" + $bdText } }
    Write-File 'cfgVehicles_basicDefines.hpp' ($bdText.TrimEnd() + "`n" + $baseClass)
    Write-File 'cfgVehicles_macrounits.hpp' ((Get-Content (Join-Path $dir 'cfgVehicles_macrounits.hpp') -Raw).TrimEnd() + "`n" + $macroLine)
    Add-ExtraDefine

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
