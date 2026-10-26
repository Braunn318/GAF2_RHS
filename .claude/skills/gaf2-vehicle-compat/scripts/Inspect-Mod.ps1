<#
.SYNOPSIS
  Lists what a GAF2 compat addon needs from a third-party Arma 3 mod:
  CfgPatches names, spawnable vehicle classes, hiddenSelections and liveries (TextureSources).

.EXAMPLE
  .\Inspect-Mod.ps1 -WorkshopId 3823883100
  .\Inspect-Mod.ps1 -ModPath "H:\Steam\steamapps\workshop\content\107410\3823883100"
  .\Inspect-Mod.ps1 -WorkshopId 3823883100 -All          # also show scope 0/1 classes
  .\Inspect-Mod.ps1 -WorkshopId 3823883100 -Filter Typhoon

  Needs HEMTT on PATH. The derapified configs are kept in %TEMP%\gaf2_modinspect\<id>\ for grepping.
#>
param(
    [string]$WorkshopId,
    [string]$ModPath,
    [switch]$All,
    [string]$Filter
)
$ErrorActionPreference = 'Stop'

# ---------- locate the mod ----------
if (-not $ModPath) {
    if (-not $WorkshopId) { throw 'Pass -WorkshopId or -ModPath.' }
    $candidates = @()
    foreach ($d in (Get-PSDrive -PSProvider FileSystem)) {
        foreach ($rel in 'Steam\steamapps\workshop\content\107410', 'SteamLibrary\steamapps\workshop\content\107410',
                         'Program Files (x86)\Steam\steamapps\workshop\content\107410', 'Games\Steam\steamapps\workshop\content\107410') {
            $candidates += Join-Path (Join-Path $d.Root $rel) $WorkshopId
        }
    }
    $ModPath = $candidates | Where-Object { Test-Path $_ } | Select-Object -First 1
    if (-not $ModPath) {
        throw "Workshop item $WorkshopId is not downloaded. Subscribe to it in Steam (and let it download), then run again."
    }
}
$addonsDir = Join-Path $ModPath 'addons'
if (-not (Test-Path $addonsDir)) { $addonsDir = $ModPath }
$id = if ($WorkshopId) { $WorkshopId } else { Split-Path $ModPath -Leaf }
$cache = Join-Path $env:TEMP "gaf2_modinspect\$id"
New-Item -ItemType Directory -Force $cache | Out-Null

Write-Host "Mod folder: $ModPath" -ForegroundColor Cyan
$modCpp = Join-Path $ModPath 'mod.cpp'
if (Test-Path $modCpp) { Get-Content $modCpp | Select-String '^\s*name\s*=' | ForEach-Object { Write-Host "  $($_.Line.Trim())" } }

# ---------- tiny parser for derapified config text ----------
function Read-Config([string]$path) {
    $root = @{ name = ''; parent = $null; props = @{}; children = [ordered]@{} }
    $stack = New-Object System.Collections.Stack
    $stack.Push($root)
    $arrKey = $null; $arrVals = $null
    foreach ($raw in [IO.File]::ReadLines($path)) {
        $line = $raw.Trim()
        if ($line -eq '' -or $line.StartsWith('//') -or $line.StartsWith('#')) { continue }
        $cur = $stack.Peek()
        if ($arrKey) {                                   # inside multi-line array
            if ($line -match '^\};?$') { $cur.props[$arrKey] = $arrVals; $arrKey = $null; continue }
            $arrVals += ($line.TrimEnd(',') -replace '^"(.*)"$', '$1')
            continue
        }
        if ($line -match '^class\s+(\w+)\s*;') { continue }                       # forward declaration
        if ($line -match '^class\s+(\w+)\s*(?::\s*(\w+))?\s*\{\s*(\};?)?$') {
            $node = @{ name = $Matches[1]; parent = $Matches[2]; props = @{}; children = [ordered]@{}; owner = $cur }
            $cur.children[$Matches[1]] = $node
            if (-not $Matches[3]) { $stack.Push($node) }
            continue
        }
        if ($line -match '^\};?$') { if ($stack.Count -gt 1) { [void]$stack.Pop() }; continue }
        if ($line -match '^(\w+)\[\]\s*\+?=\s*\{(.*)\};?$') {                     # one-line array
            $vals = @()
            if ($Matches[2].Trim()) { $vals = [regex]::Matches($Matches[2], '"([^"]*)"|([^,\s]+)') | ForEach-Object { if ($_.Groups[1].Success) { $_.Groups[1].Value } else { $_.Groups[2].Value } } }
            $cur.props[$Matches[1]] = @($vals); continue
        }
        if ($line -match '^(\w+)\[\]\s*\+?=\s*\{$') { $arrKey = $Matches[1]; $arrVals = @(); continue }
        if ($line -match '^(\w+)\s*=\s*(.*?);?$') { $cur.props[$Matches[1]] = ($Matches[2] -replace '^"(.*)"$', '$1') }
    }
    return $root
}

# ---------- extract + parse every PBO ----------
$allVehicles = @{}      # class name -> node (merged over PBOs)
$patches = @()
foreach ($pbo in Get-ChildItem $addonsDir -Filter *.pbo) {
    $out = Join-Path $cache ($pbo.BaseName + '.cpp')
    if (-not (Test-Path $out) -or (Get-Item $out).LastWriteTime -lt $pbo.LastWriteTime) {
        $bin = Join-Path $cache ($pbo.BaseName + '.bin')
        & hemtt utils pbo extract $pbo.FullName config.bin $bin 2>$null | Out-Null
        if (Test-Path $bin) {
            & hemtt utils config derapify $bin $out 2>$null | Out-Null
        } else {
            & hemtt utils pbo extract $pbo.FullName config.cpp $out 2>$null | Out-Null   # unbinarized mod
        }
    }
    if (-not (Test-Path $out)) { continue }
    $cfg = Read-Config $out
    if ($cfg.children.Contains('CfgPatches')) {
        foreach ($p in $cfg.children['CfgPatches'].children.Values) {
            $patches += [pscustomobject]@{ Pbo = $pbo.Name; Patch = $p.name; Units = ($p.props['units'] -join ', ') }
        }
    }
    if ($cfg.children.Contains('CfgVehicles')) {
        foreach ($v in $cfg.children['CfgVehicles'].children.Values) { $v.pbo = $pbo.Name; $allVehicles[$v.name] = $v }
    }
}

function Get-Inherited($node, [string]$key) {
    $n = $node; $guard = 0
    while ($n -and $guard -lt 30) {
        if ($n.props.ContainsKey($key)) { return $n.props[$key] }
        $n = if ($n.parent) { $allVehicles[$n.parent] } else { $null }; $guard++
    }
    return $null
}
function Get-InheritedChild($node, [string]$child) {
    $n = $node; $guard = 0
    while ($n -and $guard -lt 30) {
        if ($n.children.Contains($child)) { return $n.children[$child] }
        $n = if ($n.parent) { $allVehicles[$n.parent] } else { $null }; $guard++
    }
    return $null
}

# ---------- report ----------
Write-Host "`n=== CfgPatches (put these in requiredAddons[]) ===" -ForegroundColor Yellow
$patches | Format-Table Pbo, Patch -AutoSize | Out-String | Write-Host

Write-Host "=== Vehicle classes ===" -ForegroundColor Yellow
$shown = 0
foreach ($v in ($allVehicles.Values | Sort-Object { $_.name })) {
    $scope = Get-Inherited $v 'scope'
    if (-not $All -and $v.props['scope'] -ne '2') { continue }
    if ($Filter -and $v.name -notlike "*$Filter*" -and (Get-Inherited $v 'displayName') -notlike "*$Filter*") { continue }
    $shown++
    Write-Host ("`n{0} : {1}   [scope={2}, {3}]" -f $v.name, $v.parent, $scope, $v.pbo) -ForegroundColor Green
    foreach ($k in 'displayName', 'faction', 'side', 'editorSubcategory', 'crew') {
        $val = Get-Inherited $v $k; if ($val) { Write-Host "  $k = $val" }
    }
    $hs = Get-Inherited $v 'hiddenSelections'
    if ($hs) { Write-Host "  hiddenSelections[] = {$(($hs | ForEach-Object { '"' + $_ + '"' }) -join ', ')}" }
    $hst = Get-Inherited $v 'hiddenSelectionsTextures'
    if ($hst) { Write-Host "  hiddenSelectionsTextures[] (default):"; $hst | ForEach-Object { Write-Host "      ""$_""" } }
    $tl = Get-Inherited $v 'textureList'
    if ($tl) { Write-Host "  textureList[] = {$($tl -join ', ')}" }
    $tur = Get-InheritedChild $v 'Turrets'
    if ($tur -and $tur.children.Count) {
        Write-Host "  Turrets (seat -> who sits there; use names for -Gunners):" -ForegroundColor Magenta
        foreach ($t in $tur.children.Values) {
            $flags = @()
            if ($t.props['isCopilot'] -eq '1') { $flags += 'copilot' }
            if ($t.props['gunnerName']) { $flags += "name=$($t.props['gunnerName'])" }
            if ($t.props['proxyType'] -eq 'CPCargo' -or $t.name -like 'CargoTurret*') { $flags += 'FFV passenger seat' }
            $gt = if ($t.props['gunnerType']) { $t.props['gunnerType'] } else { '(inherited/default)' }
            Write-Host ("    - {0}  gunnerType={1}  {2}" -f $t.name, $gt, ($flags -join ', '))
            $sub = $t.children['Turrets']
            if ($sub -and $sub.children.Count) { Write-Host "        nested turrets (not supported by -Gunners): $($sub.children.Keys -join ', ')" }
        }
    }
    $ts = Get-InheritedChild $v 'TextureSources'
    if ($ts) {
        Write-Host "  TextureSources (liveries):" -ForegroundColor Magenta
        foreach ($src in $ts.children.Values) {
            Write-Host ("    - {0}  ""{1}""  factions={2}" -f $src.name, $src.props['displayName'], ($src.props['factions'] -join ','))
            $src.props['textures'] | ForEach-Object { Write-Host "        ""$_""" }
        }
    }
}
if ($shown -eq 0) { Write-Host '(no matching classes - try -All)' }
Write-Host "`nDerapified configs: $cache" -ForegroundColor Cyan
