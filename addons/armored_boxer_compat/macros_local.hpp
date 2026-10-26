// Local macros for this compat addon (VEHICULOFIX itself lives in addons\main\macros_vehicles.hpp).

// One turret seat: gunner of the current side/camo, e.g. B_GAF2_Heli_Crew_flk
#define GAF2_GUNNER(turret,GNR) class turret: turret { gunnerType = QUOTE(SIDEPRFX##_##GNR##_##CAMO); }

// Eden category = the vehicle's own GAF2 faction (e.g. O_GAF2_trp), for source mods that set their
// own editorCategory. The categories are declared in cfgEditorCategories.hpp.
#define GAF2_EDCAT editorCategory = QUOTE(SIDEPRFX##_##CAMO);
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
// Extra class lines per vehicle:
#define GAF2_EXTRA_Boxer_HMG GAF2_EDCAT
#define GAF2_EXTRA_Boxer_GMG GAF2_EDCAT
#define GAF2_EXTRA_Boxer_IFV GAF2_EDCAT
#define GAF2_EXTRA_Boxer_Medical GAF2_EDCAT class Turrets: Turrets { GAF2_GUNNER(MedicTurret,CLS); };
#define GAF2_EXTRA_Boxer_RCH155 GAF2_EDCAT
