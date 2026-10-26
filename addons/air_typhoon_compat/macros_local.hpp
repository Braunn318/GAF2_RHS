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
