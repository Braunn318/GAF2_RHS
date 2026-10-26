
class B_GAF2_Recon_base: B_Soldier_recon_base
{   class EventHandlers;
    identityTypes[] = {"gm_language_deu_male","Head_Euro","GAF2_Wdl"};
    faceType = "Man_A3";
    genericNames = "BundeswehrMen";
    side=1;
    scope=0;
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    Items[] =        {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
	RespawnItems[] = {"FirstAidKit","BWA3_G_Combat_black","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools"};
    uniformClass = "gaf2_Unif_L_NatoFatigues_flk";

    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_recon_flk: B_GAF2_Recon_base {
    identityTypes[] = {"gm_language_deu_male","Head_Euro","GAF2_Wdl"};
    author = "braun";
    scope = 2;
    scopeCurator = 2;
    displayName = "Recon Rifleman";
    faction = "B_GAF2_FLK";

    cost = 100000;
    role = "SpecialOperative";

    headgearList[] =
    		{
    	"gaf2_helmet_opscore_pelt_flk",	0.8,
        "gaf2_helmet_opscore_flk", 0.2
    		};
    backpack = "gaf2_TacticalPack_flk_R";
    uniformClass = "gaf2_Unif_L_NatoFatigues_flk";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

    class Eventhandlers: EventHandlers
    		{
    			// The function must be triggered to benefit from the randomization, its usage is documented in its header (see link above)
    			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    		};
    };

class B_GAF2_recon_trp: B_GAF2_recon_flk {
    identityTypes[] = {"gm_language_deu_male","Head_Euro","GAF2_Des"};
    faction = "B_GAF2_TRP";
    headgearList[] =
    		{
    	"gaf2_helmet_opscore_pelt_trp",	0.8,
        "gaf2_helmet_opscore_trp", 0.2
    		};
    backpack = "gaf2_TacticalPack_trp_R";
    uniformClass = "gaf2_Unif_L_NatoFatigues_trp";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_RGW90_HH","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_RGW90_HH","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};

class B_GAF2_recon_mlt: B_GAF2_recon_flk {
    identityTypes[] = {"gm_language_deu_male","Head_Euro","GAF2_Wdl"};
    faction = "B_GAF2_MLT";
    headgearList[] =
    		{
    	"gaf2_helmet_opscore_pelt_mlt",	0.8,
    	"gaf2_helmet_opscore_mlt",	0.2

    		};
    backpack = "gaf2_TacticalPack_mlt_R";
    uniformClass = "gaf2_Unif_L_NatoFatigues_mlt";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_RGW90_HH","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_RGW90_HH","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};
class B_GAF2_recon_RGW90_flk: B_GAF2_recon_flk {

    scope = 2;
    displayName = "Recon RGW90";

    cost = 150000;
    threat[] = {1,0.6,0.1};
    icon = "iconManAT";
    role = "MissileSpecialist";
    secondaryAmmoCoef = 0; //0.5;
    uniformClass = "gaf2_Unif_L_NatoFatigues_flk";
    backpack = "gaf2_TacticalPack_flk_R";

    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_RGW90","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_RGW90","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_RGW90_HH","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_RGW90_HH","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
};
class B_GAF2_recon_RGW90_trp: B_GAF2_recon_trp {
    faction = "B_GAF2_TRP";
    displayName = "Recon RGW90";

    uniformClass = "gaf2_Unif_L_NatoFatigues_trp";
    backpack = "gaf2_TacticalPack_trp_R";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_RGW90","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_RGW90","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
};

class B_GAF2_recon_RGW90_mlt: B_GAF2_recon_mlt {
    faction = "B_GAF2_MLT";
    displayName = "Recon RGW90";

    uniformClass = "gaf2_Unif_L_NatoFatigues_mlt";
    backpack = "gaf2_TacticalPack_mlt_R";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_RGW90","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_RGW90","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
};

class B_GAF2_Recon_Pioneer_flk: B_GAF2_recon_flk {
    scope = 2;
    displayName = "Recon Sapper";

    cost = 115000;
    canDeactivateMines = 1;
    detectSkill = 80;
    icon = "iconManExplosive";
    picture = "pictureExplosive";
    role = "Sapper";

    uniformClass = "gaf2_Unif_L_NatoFatigues_rld_flk";
    backpack = "gaf2_Kitbag_flk_EXP";//
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
};
class B_GAF2_Recon_Pioneer_trp: B_GAF2_recon_trp {
    faction = "B_GAF2_TRP";
    displayName = "Recon Sapper";
    uniformClass = "gaf2_Unif_L_NatoFatigues_rld_trp";
    backpack = "gaf2_Kitbag_trp_EXP";//
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};

class B_GAF2_Recon_Pioneer_mlt: B_GAF2_recon_mlt {
    faction = "B_GAF2_MLT";
    displayName = "Recon Sapper";
    uniformClass = "gaf2_Unif_L_NatoFatigues_rld_mlt";
    backpack = "gaf2_Kitbag_mlt_EXP";//
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};


class B_GAF2_recon_Medic_flk: B_GAF2_recon_flk {

    scope = 2;
    displayName = "Recon Medic";

    cost = 290000;
    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";
    role = "CombatLifeSaver";

    uniformClass = "gaf2_Unif_L_NatoFatigues_rld_flk";
    backpack = "gaf2_TacticalPack_flk_CLS";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
};
class B_GAF2_recon_Medic_trp: B_GAF2_recon_trp {

    faction = "B_GAF2_TRP";
    displayName = "Recon Medic";

    cost = 290000;
    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";
    role = "CombatLifeSaver";


    uniformClass = "gaf2_Unif_L_NatoFatigues_rld_trp";
    backpack = "gaf2_TacticalPack_trp_CLS";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};

class B_GAF2_recon_Medic_mlt: B_GAF2_recon_mlt {

    faction = "B_GAF2_MLT";
    displayName = "Recon Medic";

    cost = 290000;
    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";
    role = "CombatLifeSaver";


    uniformClass = "gaf2_Unif_L_NatoFatigues_rld_mlt";
    backpack = "gaf2_TacticalPack_mlt_CLS";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};


class B_GAF2_recon_TL_flk: B_GAF2_recon_flk {
    scope = 2;
    displayName = "Recon Teamleader";

    cost = 440000;
    icon = "iconManLeader";
    role = "SpecialOperative";

    backpack = "gaf2_Kitbag_flk_R";
    uniformClass = "gaf2_Unif_L_NatoFatigues_flk";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =         {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =  {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};
};
class B_GAF2_recon_TL_trp: B_GAF2_recon_TL_flk {
    identityTypes[] = {"gm_language_deu_male","Head_Euro","GAF2_Des"};
    faction = "B_GAF2_TRP";

    backpack = "gaf2_Kitbag_tan_R";
    uniformClass = "gaf2_Unif_L_NatoFatigues_trp";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};

class B_GAF2_recon_TL_mlt: B_GAF2_recon_TL_flk {
    faction = "B_GAF2_MLT";

    backpack = "gaf2_Kitbag_sgg_R";
    uniformClass = "gaf2_Unif_L_NatoFatigues_mlt";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};

};

class B_GAF2_Recon_UAV_flk: B_GAF2_recon_flk
{
    author = "braun";
    scope = 2;
    scopeCurator = 2;
    displayName = "Recon UAV Operator";

    uniformClass = "gaf2_Unif_L_NatoFatigues_flk";
    role = "Rifleman";
    backpack="B_UAV_01_backpack_F";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =         {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =  {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};

};

class B_GAF2_Recon_UAV_trp: B_GAF2_recon_trp
{
    author = "braun";
    scope = 2;
    scopeCurator = 2;
    displayName = "Recon UAV Operator";

    role = "Rifleman";
    backpack="B_UAV_01_backpack_F";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =         {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =  {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};

};

class B_GAF2_Recon_UAV_mlt: B_GAF2_recon_mlt
{
    author = "braun";
    scope = 2;
    scopeCurator = 2;
    displayName = "Recon UAV Operator";

    role = "Rifleman";
    backpack="B_UAV_01_backpack_F";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"gaf2_HK416_Arco_KSK_WDL","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =         {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =  {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow","Chemlight_green","Chemlight_green"};

};
class B_GAF2_recon_Marksman_flk: B_GAF2_recon_flk {
    scope = 2;
    displayName = "Recon Marksman";
    backpack="gaf2_AssaultPack_flk_R";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_sniper_s"};
            speechPlural[] = {"veh_infantry_sniper_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
    nameSound = "veh_infantry_sniper_s";

    cost = 140000;
    role = "Marksman";
    primaryAmmoCoef = 0.2;
    secondaryAmmoCoef = 0.05;
    handgunAmmoCoef = 0.1;

    uniformClass = "gaf2_Unif_L_NatoFatigues_flk";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"GAF2_G28_KSK_DMR","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G28_KSK_DMR","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
};
class B_GAF2_recon_Marksman_trp: B_GAF2_recon_trp {
    faction = "B_GAF2_TRP";
    displayName = "Recon Marksman";
    backpack="gaf2_AssaultPack_trp_R";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_sniper_s"};
            speechPlural[] = {"veh_infantry_sniper_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
    nameSound = "veh_infantry_sniper_s";

    cost = 140000;
    role = "Marksman";
    primaryAmmoCoef = 0.2;
    secondaryAmmoCoef = 0.05;
    handgunAmmoCoef = 0.1;

    weapons[] =            {"GAF2_G28_KSK_DMR_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G28_KSK_DMR_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
};

class B_GAF2_recon_Marksman_mlt: B_GAF2_recon_mlt {
    faction = "B_GAF2_MLT";
    displayName = "Recon Marksman";
    backpack="gaf2_AssaultPack_mlt_R";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_sniper_s"};
            speechPlural[] = {"veh_infantry_sniper_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
    nameSound = "veh_infantry_sniper_s";

    cost = 140000;
    role = "Marksman";
    primaryAmmoCoef = 0.2;
    secondaryAmmoCoef = 0.05;
    handgunAmmoCoef = 0.1;

    weapons[] =            {"GAF2_G28_KSK_DMR_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G28_KSK_DMR_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    respawnMagazines[] =   {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","Chemlight_green","Chemlight_green"};
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_mlt","BWA3_ItemNavipad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
};
class B_GAF2_Sniper_G29_flk: B_GAF2_recon_flk {
    scope = 2;
    displayName = "Sniper G29";

    cost = 350000;
    threat[] = {1,0.3,0.3};
    camouflage = 0.6;
    sensitivity = 3.5;
    role = "Marksman";
    headgearList[] =
        {

          "H_Bandanna_sgg",	1
        };


    uniformClass = "BWA3_Uniform_Ghillie_flk";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"BWA3_G29_M5Xi_Tremor3_bipod","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"BWA3_G29_M5Xi_Tremor3_bipod","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow"};
    respawnMagazines[] =   {"BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_10Rnd_86x70_G29","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow"};

    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_sniper_s"};
            speechPlural[] = {"veh_infantry_sniper_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
    nameSound = "veh_infantry_sniper_s";
};
class B_GAF2_Sniper_G29_trp: B_GAF2_Sniper_G29_flk {
    faction = "B_GAF2_TRP";
        headgearList[] =
    {

      "H_Bandanna_sand",	1
    };


    uniformClass = "BWA3_Uniform_Ghillie_Tropen";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
};

class B_GAF2_Sniper_G29_mlt: B_GAF2_Sniper_G29_flk {
    faction = "B_GAF2_MLT";
        headgearList[] =
    {

      "H_Bandanna_sand",	1
    };


    uniformClass = "BWA3_Uniform_Ghillie_Multi";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
};

class B_GAF2_Sniper_G82_flk: B_GAF2_recon_flk {
    scope = 2;
    displayName = "Sniper G82";

    cost = 350000;
    threat[] = {1,0.3,0.3};
    camouflage = 0.6;
    sensitivity = 3.5;
    role = "Marksman";
    headgearList[] =
{
  "H_Bandanna_sgg",	1
};


    uniformClass = "BWA3_Uniform_Ghillie_flk";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"GAF2_G82_BLK","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G82_BLK","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow"};
    respawnMagazines[] =   {"rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","rhsusf_mag_10Rnd_STD_50BMG_mk211","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Yellow"};

    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_sniper_s"};
            speechPlural[] = {"veh_infantry_sniper_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
    nameSound = "veh_infantry_sniper_s";
};
class B_GAF2_Sniper_G82_trp: B_GAF2_Sniper_G82_flk {
    faction = "B_GAF2_TRP";
    headgearList[] =
{
  "H_Bandanna_sand",	1
};

    uniformClass = "BWA3_Uniform_Ghillie_Tropen";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"GAF2_G82_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G82_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
};

class B_GAF2_Sniper_G82_mlt: B_GAF2_Sniper_G82_trp {
    faction = "B_GAF2_MLT";
    headgearList[] =
{
  "H_Bandanna_sand",	1
};

    uniformClass = "BWA3_Uniform_Ghillie_Multi";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"GAF2_G82_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G82_Tan","BWA3_P12","Throw","Put","BWA3_Vector"};
};


class B_GAF2_Spotter_flk: B_GAF2_Sniper_G82_flk {
    scope = 2;
    displayName = "Spotter";
    cost = 250000;
    threat[] = {1,0.3,0.3};
    camouflage = 0.6;
    sensitivity = 3.5;
    role = "Marksman";

    uniformClass = "BWA3_Uniform_Ghillie_flk";
    linkedItems[] =        {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_flk","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"GAF2_G27_C_Blk_KSK","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G27_C_Blk_KSK","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow"};
    respawnMagazines[] =   {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow"};

    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";
};
class B_GAF2_Spotter_trp: B_GAF2_Spotter_flk {
    faction = "B_GAF2_TRP";

    uniformClass = "BWA3_Uniform_Ghillie_Tropen";
    linkedItems[] =        {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_trp","gaf2_helmet_opscore_pelt_trp","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"GAF2_G27_C_Blk_KSK_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G27_C_Blk_KSK_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow"};
    respawnMagazines[] =   {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow"};

};

class B_GAF2_Spotter_mlt: B_GAF2_Spotter_flk {
    faction = "B_GAF2_MLT";

    uniformClass = "BWA3_Uniform_Ghillie_Multi";
    linkedItems[] =        {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    respawnLinkedItems[] = {"gaf2_vest_Mobast_3_MLT","gaf2_helmet_opscore_pelt_flk","BWA3_ItemNaviPad","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_GAF2_INV_OPF"};
    weapons[] =            {"GAF2_G27_C_Blk_KSK_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    respawnWeapons[] =     {"GAF2_G27_C_Blk_KSK_DES","BWA3_P12","Throw","Put","BWA3_Vector"};
    magazines[] =          {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow"};
    respawnMagazines[] =   {"BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_12Rnd_45ACP_P12","BWA3_DM51A1","BWA3_DM25","BWA3_DM32_Orange","BWA3_DM32_Orange","BWA3_DM32_Yellow","BWA3_DM32_Yellow"};

};

class B_GAF2_Diver_flk: B_Diver_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    displayName = "Assault Diver";
    genericNames = "BundeswehrMen";
    side=1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_FLK";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_Diver_trp: B_Diver_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "BundeswehrMen";
    displayName = "Assault Diver";
    side=1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_Trp";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_Diver_mlt: B_Diver_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "BundeswehrMen";
    displayName = "Assault Diver";
    side=1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_MLT";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_DiverEXP_flk: B_diver_exp_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    displayName = "Assault Diver Explosive";
    genericNames = "BundeswehrMen";
    side=1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_FLK";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_DiverEXP_trp: B_diver_exp_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "BundeswehrMen";
    displayName = "Assault Diver Explosive";
    side=1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_TRP";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_DiverEXP_mlt: B_diver_exp_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "BundeswehrMen";
    displayName = "Assault Diver Explosive";
    side=1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_MLT";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_DiverTL_flk: B_diver_TL_F
{

    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    displayName = "Assault Diver Teamleader";
    genericNames = "BundeswehrMen";
    side=1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_FLK";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_DiverTL_trp: B_diver_TL_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "BundeswehrMen";
    displayName = "Assault Diver Teamleader";
    side = 1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_TRP";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};

class B_GAF2_DiverTL_mlt: B_diver_TL_F
{
    identityTypes[] = {"gm_language_deu_male","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "BundeswehrMen";
    displayName = "Assault Diver Teamleader";
    side = 1;
    editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
    vehicleClass = "MenRecon";
    editorSubcategory = "MyKSK";
    scope = 2;
    faction = "B_GAF2_MLT";
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_infantry_SF_s"};
            speechPlural[] = {"veh_infantry_SF_p"};
        };
    };
    textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound = "veh_infantry_SF_s";

    camouflage = 0.6;
    sensitivity = 3.5;
    detectSkill = 30;

};
