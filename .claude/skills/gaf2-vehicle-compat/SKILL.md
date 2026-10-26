---
name: gaf2-vehicle-compat
description: Add a vehicle from another Arma 3 mod (Steam Workshop link/ID or local mod folder) into the GAF2 factions as an optional compat addon that only loads when that mod is loaded. Use when the user wants to add/integrate a plane, helicopter, car, tank or boat from a workshop mod, give it a GAF2/German livery, or put it into the GAF2 Planes/Helicopters/etc. editor section for Blufor, Indfor and Opfor.
---

# GAF2 vehicle compat addon

GAF2 brings third-party vehicles in through `addons/<name>_compat/` folders (see `air_f35_compat`,
`air_ec135_compat`). Each one:

- inherits the mod's vehicle class into one hidden base class `B_GAF2_<Key>_base` with the GAF2 texture,
- uses the `VEHICULOFIX` macro (from `addons/main/macros_vehicles.hpp`) to create
  `{B,I,O}_GAF2_<Key>_{flk,mlt,trp}` in factions `*_GAF2_FLK/MLT/TRP`, with the GAF2 pilot/crew and cargo,
- for vehicles with gunner seats, uses `VEHICULOFIXG` (generated into the addon's `macros_local.hpp`):
  same as `VEHICULOFIX` plus a `gunnerType` per turret for each side/camo,
- has `skipWhenMissingDependencies = 1`, so it is skipped when the source mod is not loaded.

Two scripts do the mechanical part. Run them with PowerShell from the repo root.

## Workflow

### 1. Get the source mod
Workshop link → take the `id=` number. Read the Workshop page (built-in browser, `get_page_text`) for
the vehicle name and which paint schemes it ships (e.g. a "Luftwaffe" livery).
The mod must be downloaded (user subscribes in Steam). If `Inspect-Mod.ps1` says it is not downloaded,
stop and ask the user to subscribe and let Steam finish downloading.

### 2. Inspect it
```powershell
.\.claude\skills\gaf2-vehicle-compat\scripts\Inspect-Mod.ps1 -WorkshopId <id>            # scope=2 vehicles
.\.claude\skills\gaf2-vehicle-compat\scripts\Inspect-Mod.ps1 -WorkshopId <id> -All -Filter <text>
```
It prints the `CfgPatches` names (→ `-RequiredAddons`), vehicle classes with parent, `hiddenSelections`,
default `hiddenSelectionsTextures`, the `Turrets` (seats), and every `TextureSources` livery with its texture list.
Derapified configs stay in `%TEMP%\gaf2_modinspect\<id>\` for grepping if something is unclear.

Pick:
- **ParentClass**: the spawnable (scope=2) class the user wants. If the mod has several loadout variants,
  ask which ones (each becomes one `-Append` call).
- **RequiredAddons**: the CfgPatches class from the PBO that defines that vehicle (include the model PBO's
  patch too if it is separate, like `F35C` + `F35C_cfg`).
- **Textures**: copy the `textures[]` of the chosen livery *exactly*, same order and count as
  `hiddenSelections` (keep `""` slots). Also pass `-TextureSource <livery class>`.
  Set the textures directly — the mod's `TextureSources` usually have `factions[] = {"BLU_F"}`, so the
  livery would not be applied/offered for GAF2 factions otherwise.
  Own textures: put `.paa` in `addons/<addon>/data/` and pass `data\name.paa`; then add the addon to `texgen.bat`.
- **Crew** (`-Crew`, the driver/pilot), **CargoRole** (`-CargoRole`, `typicalCargo[]`) and **Gunners** (`-Gunners`).
  Roles are GAF2 unit roles without side/camo, e.g. `Jetpilot`, `Helipilot`, `Heli_Crew`, `Crew`,
  `Rifleman`, `MachineGunner_MG5` (full list: `addons/units/CfgPatches.hpp`, `B_GAF2_<role>_flk`).
- **Gunners**: from the inspector's `Turrets` list, take the seats that a crew member mans:
  door guns / `MainTurret` (→ `-GunnerRole`, default `Heli_Crew` for helis), and `CopilotTurret`
  (→ `CopilotTurret=Helipilot`). Leave out seats marked "FFV passenger seat" (`CargoTurret_*`) —
  those are for passengers, unless the inspector names one as a gunner (e.g. `$STR_A3_LEFT_GUNNER`).
  Only top-level turrets are supported; nested turrets (commander inside MainTurret on tanks) are not.
  Without `-Gunners` the seats keep the source mod's own soldiers (e.g. US pilots) — check that this is wanted.

### 3. Confirm with the user (one short question, only what is unclear)
Defaults, unless the user said otherwise: all three sides (B, I, O); one livery for all three camos;
category from vehicle type; cargo preset by type; roles as below.

| Category | `-Crew` | `-CargoRole` | `-GunnerRole` |
|---|---|---|---|
| Planes | Jetpilot | Jetpilot | Crew |
| Helicopters | Helipilot | Heli_Crew | Heli_Crew |
| Cars, Boats | Rifleman | Rifleman | MachineGunner_MG5 |
| Tanks, APCs, AA, Artillery | Crew | Crew | Crew |
Addon name: `air_<vehicle>_compat` for aircraft, `<group>_<vehicle>_compat` otherwise (lowercase).

### 4. Generate
```powershell
.\.claude\skills\gaf2-vehicle-compat\scripts\New-VehicleCompat.ps1 `
    -Addon air_typhoon_compat -Key Typhoon -DisplayName "Eurofighter Typhoon" `
    -ParentClass <class> -RequiredAddons <patch1>,<patch2> -Category Planes `
    -Textures "<tex1>","<tex2>","" -TextureSource <livery>
# more variants in the same addon:
... -Addon air_typhoon_compat -Append -Key Typhoon_CAS -DisplayName "Eurofighter Typhoon (CAS)" -ParentClass <class2> ...

# helicopter with door gunners and copilot:
.\.claude\skills\gaf2-vehicle-compat\scripts\New-VehicleCompat.ps1 `
    -Addon air_uh60_compat -Key UH60 -DisplayName "UH-60M" -ParentClass CUP_B_UH60M_US `
    -RequiredAddons CUP_AirVehicles_UH60 -Category Helicopters `
    -Gunners "MainTurret","RightDoorGun","CopilotTurret=Helipilot"
```
Options: `-Category Planes|Helicopters|Cars|Tanks|APCs|AA|Artillery|Boats|Drones|<raw subcategory>`,
`-Crew <role>`, `-CargoRole <role>`, `-Gunners "Turret","Turret=Role"`, `-GunnerRole <role>`,
`-Cargo Jet|Heli|Transport|None`, `-Sides B,I,O`, `-EditorPreview <path.jpg>`.
The script warns about roles that don't exist in `addons/units` and turret names that don't exist in the
source mod (it reads the inspector's cache). Treat both warnings as errors: fix the name and regenerate
(delete the addon folder first, or the class already exists for `-Append`).
With gunners, the script adds a hidden `B_GAF2_<Key>_import` class that exposes the source `Turrets`
(same trick as `BWA3_Eagle_Import1` in `addons/cars`). Appending gunners to an older addon without
`macros_local.hpp` creates it and adds the `#include` to `config.cpp` automatically.
`-DisplayName` must not contain commas (macro argument). `-Key` only letters/digits/_.

Different livery per camo (e.g. desert for `trp`): generate with the woodland livery, then in
`cfgVehicles_basicDefines.hpp` add a second base class with the desert textures and a second
`VEHICULOFIX` line (see `air_ec135_compat`: `_wdl` / `_des` keys).

### 5. Verify
```bash
hemtt check
```
Must finish with no errors/warnings for the new addon. To see the generated classes:
`hemtt build`, then `hemtt utils pbo extract .hemttout/build/addons/gaf2_<addon>.pbo config.bin x.bin`
and `hemtt utils config derapify x.bin x.cpp` — expect 9 classes per vehicle (3 sides × 3 camos),
each with `crew`/`typicalCargo` and, with gunners, `class Turrets` → `gunnerType` for its own side and camo
(e.g. `O_GAF2_Heli_Crew_trp` in `O_GAF2_UH60_trp`).
Delete `.hemttout` afterwards. In-game check (user): load GAF2 + the source mod, Eden → GAF2 faction →
Planes; also load GAF2 *without* the mod to confirm nothing errors.

### 6. Tell the user
Which classes were added, what the mod's Workshop dependency is (for the Steam page / mod list),
and that the vehicle only appears when that mod is loaded. Don't commit unless asked.
