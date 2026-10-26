//Soldier with one primary weapon
#define SOLDAT(role, Ident, deflink, roleDisplayName, EditorCat, baseclass, UNIF, HELMET, HLType, VEST, WEAP, SMAG, BAG) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
    identityTypes[] = {##Ident}; \
    genericNames = "BundeswehrMen"; \
    author = "braun"; \
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg"; \
    editorSubcategory = QUOTE(##EditorCat); \
    scope = 2; \
    scopeCurator = 2; \
    side = SIDE_TAG; \
    displayName = roleDisplayName; \
    faction = QUOTE(SIDEPRFX##_##CAMO); \
    uniformClass = ##UNIF; \
    role = #role; \
    headgearList[] = {##HLType}; \
    backpack = ##BAG; \
    Items[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    RespawnItems[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    linkedItems[] = {##deflink,##HELMET,##VEST}; \
    respawnLinkedItems[] = {##deflink,##HELMET,##VEST}; \
    weapons[] = {DEFAULT_SOLDAT_WEAPONS,##WEAP}; \
    respawnWeapons[] = {DEFAULT_SOLDAT_WEAPONS,##WEAP}; \
    magazines[] = {DEFAULT_SOLDAT_MAGS,DEFAULT_SOLDAT_MAGS_GRENADES,##SMAG}; \
    respawnMagazines[] = {DEFAULT_SOLDAT_MAGS,DEFAULT_SOLDAT_MAGS_GRENADES,##SMAG}; \
    class EventHandlers: EventHandlers { \
        init = "[(_this select 0), [], []] call BIS_fnc_unitHeadgear;"; \
    }; \
}

//Soldier with no headgear randomization
#define SOLDATNH(role, Ident, deflink, roleDisplayName, EditorCat, baseclass, UNIF, HELMET, VEST, WEAP, SMAG, BAG) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
    identityTypes[] = {##Ident}; \
    genericNames = "BundeswehrMen"; \
    author = "braun"; \
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg"; \
    editorSubcategory = QUOTE(##EditorCat); \
    scope = 2; \
    scopeCurator = 2; \
    side = SIDE_TAG; \
    displayName = roleDisplayName; \
    faction = QUOTE(SIDEPRFX##_##CAMO); \
    uniformClass = ##UNIF; \
    role = #role; \
    backpack = ##BAG; \
    Items[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    RespawnItems[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    linkedItems[] = {##deflink,##HELMET,##VEST}; \
    respawnLinkedItems[] = {##deflink,##HELMET,##VEST}; \
    weapons[] = {DEFAULT_SOLDAT_WEAPONS,##WEAP}; \
    respawnWeapons[] = {DEFAULT_SOLDAT_WEAPONS,##WEAP}; \
    magazines[] = {DEFAULT_SOLDAT_MAGS,DEFAULT_SOLDAT_MAGS_GRENADES,##SMAG}; \
    respawnMagazines[] = {DEFAULT_SOLDAT_MAGS,DEFAULT_SOLDAT_MAGS_GRENADES,##SMAG}; \
}

//Soldier with one primary weapon and launcher
#define SOLDATAT(role, Ident, deflink, roleDisplayName, EditorCat, baseclass, UNIF, HELMET, HLType, VEST, WEAP, SMAG, WEAP_AT, MAG_AT, BAG) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
    identityTypes[] = {##Ident}; \
    genericNames = "BundeswehrMen"; \
    author = "braun"; \
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg"; \
    editorSubcategory = QUOTE(##EditorCat); \
    scope = 2; \
    scopeCurator = 2; \
    side = SIDE_TAG; \
    displayName = roleDisplayName; \
    faction = QUOTE(SIDEPRFX##_##CAMO); \
    uniformClass = ##UNIF; \
    role = #role; \
    headgearList[] = {##HLType}; \
    backpack = ##BAG; \
    Items[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    RespawnItems[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    linkedItems[] = {##deflink,##HELMET,##VEST}; \
    respawnLinkedItems[] = {##deflink,##HELMET,##VEST}; \
    weapons[] = {DEFAULT_SOLDAT_WEAPONS,##WEAP,##WEAP_AT}; \
    respawnWeapons[] = {DEFAULT_SOLDAT_WEAPONS,##WEAP,##WEAP_AT}; \
    magazines[] = {DEFAULT_SOLDAT_MAGS,DEFAULT_SOLDAT_MAGS_GRENADES,##SMAG,##MAG_AT}; \
    respawnMagazines[] = {DEFAULT_SOLDAT_MAGS,DEFAULT_SOLDAT_MAGS_GRENADES,##SMAG,##MAG_AT}; \
    class EventHandlers: EventHandlers { \
        init = "[(_this select 0), [], []] call BIS_fnc_unitHeadgear;"; \
    }; \
}

//Soldier with no weapons, headgear randomization
#define SOLDATUN(role, Ident, deflink, roleDisplayName, EditorCat, baseclass, UNIF, HELMET, VEST, BAG) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
    identityTypes[] = {##Ident}; \
    genericNames = "BundeswehrMen"; \
    author = "braun"; \
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg"; \
    editorSubcategory = QUOTE(##EditorCat); \
    scope = 2; \
    scopeCurator = 2; \
    side = SIDE_TAG; \
    displayName = roleDisplayName; \
    faction = QUOTE(SIDEPRFX##_##CAMO); \
    uniformClass = ##UNIF; \
    role = #role; \
    backpack = ##BAG; \
    Items[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    RespawnItems[] = {DEFAULT_SOLDAT_UNIFORM_ITEMS}; \
    linkedItems[] = {##deflink,##HELMET,##VEST}; \
    respawnLinkedItems[] = {##deflink,##HELMET,##VEST}; \
    weapons[] = {"Throw", "Put"}; \
    respawnWeapons[] = {"Throw", "Put"}; \
    magazines[] = {}; \
    respawnMagazines[] = {}; \
    }

    //Vanilla soldier, inheriting only specific classes
#define SOLDATA3(role, Ident, roleDisplayName, EditorCat, baseclass) \
class SIDEPRFX##_##role##_##CAMO: baseclass { \
    identityTypes[] = {##Ident}; \
    genericNames = "BundeswehrMen"; \
    author = "braun"; \
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg"; \
    editorSubcategory = QUOTE(##EditorCat); \
    scope = 2; \
    scopeCurator = 2; \
    side = SIDE_TAG; \
    displayName = roleDisplayName; \
    faction = QUOTE(SIDEPRFX##_##CAMO); \
    role = #role; \
    }

