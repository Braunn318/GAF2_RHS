
#define VEHICULOFIX(role, roleDisplayName, CRW, TCGO, EditorCat, baseclass, TRANSMAG , TRANSITM , TRANSWEAP) \
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
}

#define VEHICULOFIXTRTNCRW(role, EditorCat, baseclass) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
		faction=QUOTE(SIDEPRFX##_##CAMO); \
		side= SIDE_TAG; \
		scopeCurator = 2; \
		scope = 2; \
		editorSubcategory = QUOTE(EditorCat); \
}

#define VEHICULOFIXTRTCRW(role, EditorCat, CRW, TCGO, baseclass) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
		faction=QUOTE(SIDEPRFX##_##CAMO); \
		side= SIDE_TAG; \
		scopeCurator = 2; \
		scope = 2; \
		editorSubcategory = QUOTE(EditorCat); \
		crew=QUOTE(SIDEPRFX##_##CRW##_##CAMO); \
		typicalCargo[]={QUOTE(SIDEPRFX##_##TCGO##_##CAMO)}; \
}

#define VEHICULOBWA3(role, roleDisplayName, CRW, TCGO, EditorCat, baseclass, TRANSMAG , TRANSITM , TRANSWEAP) \
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
}

#define VEHICULOBWA3G(role, roleDisplayName, CRW, TCGO, TRRT, EditorCat, baseclass, TRANSMAG , TRANSITM , TRANSWEAP) \
class SIDEPRFX##_##role##_##CAMO: baseclass##BWA_CAMO { \
		faction=QUOTE(SIDEPRFX##_##CAMO); \
		side= SIDE_TAG; \
		scopeCurator = 2; \
		scope = 2; \
		editorSubcategory = QUOTE(EditorCat); \
		displayName= QUOTE(roleDisplayName); \
		crew=QUOTE(SIDEPRFX##_##CRW##_##CAMO); \
		typicalCargo[]={QUOTE(SIDEPRFX##_##TCGO##_##CAMO)}; \
		 class Turrets: Turrets { \
      class CargoTurret_01: CargoTurret_01 { \
          gunnerType = QUOTE(SIDEPRFX##_##TRRT##_##CAMO); \
      }; \
	}; \
}

//EdSubcats:
//PLanes: editorSubcategory = "EdSubcat_Planes";
//Helis: editorSubcategory = "EdSubcat_Helicopters";
