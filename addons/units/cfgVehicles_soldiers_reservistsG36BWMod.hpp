
//platzhalte

// RIFLEMAN
class B_GAF2_ReserveRg36_flk: B_GAF2_Rifleman_base
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
    author = "braun";
    scope = 2;
    side=1;
    scopeCurator = 2;
    displayName = "Rifleman (G36)";
    editorSubcategory = "MyRSV";
    uniformClass = "BWA3_Uniform2_sleeves_Fleck";
    role = "Rifleman";

    Items[] =              {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    RespawnItems[] =       {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    linkedItems[] =        {"V_TacVest_oli","BWA3_Booniehat_Fleck","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"V_TacVest_oli","BWA3_Booniehat_Fleck","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
};

class B_GAF2_ReserveRg36_Trop: B_GAF2_Rifleman_base
{   identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
    author = "braun";
    scope = 2;
    side=1;
    scopeCurator = 2;
    displayName = "Rifleman (G36)";
    faction = "B_GAF2_TRP";
    uniformClass = "BWA3_Uniform2_sleeves_Tropen";
    editorSubcategory = "MyRSV";
    role = "Rifleman";


    Items[] =              {"FirstAidKit","BWA3_Booniehat_Tropen","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    RespawnItems[] =       {"FirstAidKit","BWA3_Booniehat_Tropen","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    linkedItems[] =        {"V_TacVest_khk","BWA3_Booniehat_Tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
    respawnLinkedItems[] = {"V_TacVest_khk","BWA3_Booniehat_Tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};

    };

    class B_GAF2_ReserveRg36_Multi: B_GAF2_Rifleman_base
    {   identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
        author = "braun";
        scope = 2;
        side=1;
        scopeCurator = 2;
        displayName = "Rifleman (G36)";
        faction = "B_GAF2_MLT";
        uniformClass = "GAF2_Uniform2_Short_Multi";
        editorSubcategory = "MyRSV";
        role = "Rifleman";


        Items[] =              {"FirstAidKit","BWA3_Booniehat_Multi","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
        RespawnItems[] =       {"FirstAidKit","BWA3_Booniehat_Multi","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
        linkedItems[] =        {"V_TacVest_khk","BWA3_Booniehat_Multi","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
        respawnLinkedItems[] = {"V_TacVest_khk","BWA3_Booniehat_Multi","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
        weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};

        };

class B_GAF2_ReserveRAT_flk: B_GAF2_Rifleman_base
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
    author = "braun";
    scope = 2;
    side=1;
    scopeCurator = 2;
    displayName = "Rifleman (G36 AT)";
    editorSubcategory = "MyRSV";
    uniformClass = "BWA3_Uniform2_sleeves_Fleck";
    role = "Rifleman";

    Items[] =              {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    RespawnItems[] =       {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    linkedItems[] =        {"V_TacVest_oli","BWA3_Booniehat_Fleck","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"V_TacVest_oli","BWA3_Booniehat_Fleck","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    weapons[] =            {"BWA3_G36A3_G","BWA3_PzF3","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","BWA3_PzF3","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_PzF3_Tandem","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_PzF3_Tandem","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};

};

class B_GAF2_ReserveRAT_Trop: B_GAF2_Rifleman_base
{   identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
    author = "braun";
    scope = 2;
    side=1;
    scopeCurator = 2;
    displayName = "Rifleman G36 (AT)";
    faction = "B_GAF2_TRP";
    uniformClass = "BWA3_Uniform2_sleeves_Tropen";
    editorSubcategory = "MyRSV";
    role = "Rifleman";


    Items[] =              {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    RespawnItems[] =       {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    linkedItems[] =        {"V_TacVest_khk","BWA3_Booniehat_Tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
    respawnLinkedItems[] = {"V_TacVest_khk","BWA3_Booniehat_Tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
    weapons[] =            {"BWA3_G36A3_G","BWA3_PzF3","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","BWA3_PzF3","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_PzF3_Tandem","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_PzF3_Tandem","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    };

    class B_GAF2_ReserveRAT_Multi: B_GAF2_Rifleman_base
    {   identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
        author = "braun";
        scope = 2;
        side=1;
        scopeCurator = 2;
        displayName = "Rifleman G36 (AT)";
        faction = "B_GAF2_MLT";
        uniformClass = "GAF2_Uniform2_Short_Multi";
        editorSubcategory = "MyRSV";
        role = "Rifleman";


        Items[] =              {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
        RespawnItems[] =       {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
        linkedItems[] =        {"V_TacVest_khk","BWA3_Booniehat_Multi","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
        respawnLinkedItems[] = {"V_TacVest_khk","BWA3_Booniehat_Multi","ItemMap","ItemCompass","ItemWatch","ItemRadio",};
        weapons[] =            {"BWA3_G36A3_G","BWA3_PzF3","rhsusf_weap_glock17g4","Throw","Put"};
        respawnWeapons[] =     {"BWA3_G36A3_G","BWA3_PzF3","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_PzF3_Tandem","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_PzF3_Tandem","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
        };
//Commandant
class B_GAF2_ReserveCMD_flk: B_GAF2_Rifleman_base
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
    author = "braun";
    scope = 2;
    side=1;
    scopeCurator = 2;
    displayName = "Commander (G36)";
    editorSubcategory = "MyRSV";
    uniformClass = "BWA3_Uniform2_sleeves_Fleck";
    role = "Rifleman";

    Items[] =              {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    RespawnItems[] =       {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    linkedItems[] =        {"V_TacVest_oli","BWA3_Beret_Wach_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"V_TacVest_oli","BWA3_Beret_Wach_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};

};

class B_GAF2_ReserveCMD_Trop: B_GAF2_Rifleman_base
{   identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
    author = "braun";
    scope = 2;
    side=1;
    scopeCurator = 2;
    displayName = "Commander (G36)";
    faction = "B_GAF2_TRP";
    uniformClass = "BWA3_Uniform2_sleeves_Tropen";
    editorSubcategory = "MyRSV";
    role = "Rifleman";


    Items[] =              {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    RespawnItems[] =       {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    linkedItems[] =        {"V_TacVest_khk","BWA3_Beret_Wach_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
    respawnLinkedItems[] = {"V_TacVest_khk","BWA3_Beret_Wach_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    
    };

class B_GAF2_ReserveCMD_Multi: B_GAF2_Rifleman_base
{   identityTypes[] = {"gm_language_deu_male","Head_Euro","NoGlasses"};
    author = "braun";
    scope = 2;
    side=1;
    scopeCurator = 2;
    displayName = "Commander (G36)";
    faction = "B_GAF2_MLT";
    uniformClass = "GAF2_Uniform2_Short_Multi";
    editorSubcategory = "MyRSV";
    role = "Rifleman";


    Items[] =              {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    RespawnItems[] =       {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    linkedItems[] =        {"V_TacVest_khk","BWA3_Beret_Wach_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
    respawnLinkedItems[] = {"V_TacVest_khk","BWA3_Beret_Wach_blue","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    
    };
    //Rifleman G36 old
class B_GAF2_Rifleman3_flk: B_GAF2_Rifleman_flk
{
    author = "braun";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (G36)";
    uniformClass = "BWA3_Uniform2_sleeves_Fleck";

    role = "Rifleman";
      backpack="BWA3_AssaultPack_Fleck_R";
    linkedItems[] =        {"V_PlateCarrier1_rang","gaf_lwh_flk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"V_PlateCarrier1_rang","gaf_lwh_flk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
};

class B_GAF2_Rifleman3_Trop: B_GAF2_Rifleman_trp
{
    author = "braun";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (G36)";
    faction = "B_GAF2_TRP";
    uniformClass = "BWA3_Uniform2_sleeves_Tropen";
    role = "Rifleman";
    backpack="BWA3_AssaultPack_Trop_R";
    linkedItems[] =        {"V_PlateCarrier1_tan","gaf_lwh_trp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"V_PlateCarrier1_tan","gaf_lwh_trp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
};

class B_GAF2_Rifleman3_Multi: B_GAF2_Rifleman_mlt
{
    author = "braun";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (G36)";
    faction = "B_GAF2_MLT";
    uniformClass = "GAF2_Uniform2_Short_Multi";
    role = "Rifleman";
    backpack="BWA3_AssaultPack_Multi_R";
    linkedItems[] =        {"V_PlateCarrier1_tan","gaf_lwh_mtr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"V_PlateCarrier1_tan","gaf_lwh_mtr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] =     {"BWA3_G36A3_G","rhsusf_weap_glock17g4","Throw","Put"};
    magazines[] =          {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
    respawnMagazines[] =   {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","BWA3_DM51A1","BWA3_DM51A1","BWA3_DM25","BWA3_DM25"};
};
