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
  (`VEHICULOBWA3` when the mod has separate woodland/desert classes),
- when extra lines are needed (gunners, Eden category), uses `VEHICULOFIXX` / `VEHICULOCAMOX` (generated
  into the addon's `macros_local.hpp`): same as above plus `GAF2_EXTRA_<Key>`, e.g. a `gunnerType` per
  turret and `editorCategory` = own faction, for each side/camo,
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

Check `editorCategory`: `grep editorCategory %TEMP%\gaf2_modinspect\<id>\*.cpp`. If the source mod sets
one (GTK Boxer: `"Hawks_Vehicles"`), Eden puts every child class there instead of under the GAF2 faction,
because `editorCategory` wins over `faction`. GAF2's own vehicles (e.g. the Puma from BWA3) have no
`editorCategory`, so Eden sorts them by faction. `editorCategory = "";` does NOT work: the vehicles then
vanish from Eden. `New-VehicleCompat.ps1` detects the mod's category from the inspector cache (force with
`-ResetEditorCategory`) and instead sets each class's `editorCategory` to its own GAF2 faction
(`GAF2_EDCAT` → e.g. `O_GAF2_trp`), and generates `cfgEditorCategories.hpp` declaring categories with the
same names and display names as `addons/main/cfgFactionClasses.hpp`.
Verify in-game that the vehicles sit under side → `[Germany] (Flecktarn)` → APCs next to the Puma —
one `[Germany] (Flecktarn)` entry, not two, and not under the mod's own category.

Pick:
- **ParentClass**: the spawnable (scope=2) class the user wants. If the mod has several loadout variants,
  ask which ones (each becomes one `-Append` call).
- **RequiredAddons**: the CfgPatches class from the PBO that defines that vehicle (include the model PBO's
  patch too if it is separate, like `F35C` + `F35C_cfg`).
- **Woodland + desert classes**: if the mod ships separate classes per paint (e.g. `Hawks_GTK_Boxer_HMG`
  and `Hawks_GTK_Boxer_HMG_Sand`), pass `-ParentClass <woodland> -ParentClassDesert <desert>` and no
  textures. Flecktarn then uses the woodland class, Multitarn and Tropentarn the desert one (same split as
  `addons/armored`). Prefer this over `-Textures` when the texture list is long (render targets, plates,
  decals): copying 40+ slots by hand is fragile.
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
  Check first: `grep gunnerType %TEMP%\gaf2_modinspect\<id>\*.cpp`. If the mod never sets `gunnerType`
  (like the GTK Boxer), every seat — including nested commander turrets — is filled from `crew`, so
  `-Crew` alone already makes the whole vehicle GAF2. Only add `-Gunners` for seats that need a
  different role (e.g. the Boxer Medical's `MedicTurret=CLS`).

### 3. Confirm with the user (one short question, only what is unclear)
Defaults, unless the user said otherwise: all three sides (B, I, O); one livery for all three camos;
category from vehicle type; cargo preset by type; roles as below.

| Category | `-Crew` | `-CargoRole` | `-GunnerRole` | `-Cargo` |
|---|---|---|---|---|
| Planes | Jetpilot | Jetpilot | Crew | Jet |
| Helicopters | Helipilot | Heli_Crew | Heli_Crew | Heli |
| Cars, Boats | Rifleman | Rifleman | MachineGunner_MG5 | Transport |
| Tanks, APCs, AA, Artillery | Crew | Crew | Crew | Armor (Puma loadout from `addons/armored`) |

Addon name: `air_<vehicle>_compat` for aircraft, `armored_<vehicle>_compat` for armour,
`cars_<vehicle>_compat` for cars. New addons require `gaf2_main` + `gaf2_units` (factions and crew)
plus the source mod's patch; leave out the source mod's *optional* patches (e.g. its BWA3 compat PBO),
or the GAF2 addon would switch off when that optional mod isn't loaded.
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

# armour with separate woodland/desert classes (see addons/armored_boxer_compat):
.\.claude\skills\gaf2-vehicle-compat\scripts\New-VehicleCompat.ps1 `
    -Addon armored_boxer_compat -Key Boxer_HMG -DisplayName "GTK Boxer (HMG)" `
    -ParentClass Hawks_GTK_Boxer_HMG -ParentClassDesert Hawks_GTK_Boxer_HMG_Sand `
    -RequiredAddons Hawks_GTK_Boxer -Category APCs
```
Options: `-Category Planes|Helicopters|Cars|Tanks|APCs|AA|Artillery|Boats|Drones|<raw subcategory>`,
`-Crew <role>`, `-CargoRole <role>`, `-Gunners "Turret","Turret=Role"`, `-GunnerRole <role>`,
`-ParentClassDesert <class>`, `-TexturesDesert ...`,
`-Cargo Jet|Heli|Transport|Armor|None`, `-Sides B,I,O`, `-EditorPreview <path.jpg>`.
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
Must finish with no errors/warnings for the new addon.

### 6. Build the DEV version (always — the user tests from it)
The user tests in-game from the HEMTT dev build, not from the source folders. A new or changed addon
does not exist in-game until the dev build is rebuilt, so **always run this as the last step**, also
after every later fix:
```bash
hemtt dev
```
**Arma must be closed first**: a running `arma3_x64.exe` locks the PBOs and `hemtt dev` fails with
"os error 32" (file in use). Check with `tasklist | grep -i arma3_x64`; if it runs, ask the user to quit
the game, then build.
Run it from the repo root (the worktree root if working in one). Output: `.hemttout\dev` — the user
loads that folder as a local mod in the Arma 3 Launcher, plus the source mod. It also points the
`Arma 3\z\gaf2` link at this folder. Never delete `.hemttout` after this step.

Check the new addon is in it and look at the generated classes:
```bash
ls .hemttout/dev/addons | grep <addon>
hemtt utils pbo extract .hemttout/dev/addons/gaf2_<addon>.pbo config.bin x.bin
hemtt utils config derapify x.bin x.cpp
```
Expect 9 classes per vehicle (3 sides × 3 camos), each with `crew`/`typicalCargo` and, with gunners,
`class Turrets` → `gunnerType` for its own side and camo (e.g. `O_GAF2_Heli_Crew_trp` in `O_GAF2_UH60_trp`).
Delete only `x.bin`/`x.cpp`.

Arma must be **restarted** after `hemtt dev` (PBOs are only read at game start). If the user reports
it's not working, read the newest `%LOCALAPPDATA%\Arma 3\*.rpt`: check the start time is after the
build, that `gaf2_<addon>.pbo` is listed under the dev folder, that the source mod is in `-mod=`, and
search for `Error`/`No entry` lines.

### 7. Tell the user
Which classes were added, where to find them in Eden (side → GAF2 faction/camo → subcategory),
that the dev build is rebuilt and Arma needs a restart, what the mod's Workshop dependency is
(for the Steam page / mod list), and that the vehicle only appears when that mod is loaded.
In-game check (user): load GAF2 dev + the source mod; also load GAF2 *without* the source mod to
confirm nothing errors. Don't commit unless asked.
