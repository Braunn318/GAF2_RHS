// GM
class gm_ge_army_m109g;
class gm_ge_army_kat1_463_mlrs;
class gm_ge_army_bibera0;
class gm_ge_army_marder1a2;
class gm_ge_army_luchsa2;
class gm_ge_army_fuchsa0_reconnaissance;
class gm_ge_army_fuchsa0_command;
class gm_ge_army_gepard1a1;
class gm_ge_army_mg3_aatripod;

class B_GAF2_baseMLRS_LARS_01_flk: gm_ge_army_kat1_463_mlrs
{
  faction="B_GAF2_FLK";
  side=1;
  scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
//  editorSubcategory = "MyArtyGM";
  displayName="MLRS LARS2";
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseBrPz_flk: gm_ge_army_bibera0
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
  picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
//  editorSubcategory = "MyTanksGM";
  displayName="BrkPz";
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseM109G_flk: gm_ge_army_m109g
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
//  editorSubcategory = "MyArtyGM";
  displayName="Howitzer 155 mm - M109G";
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseFlakPz_1A1_flk: gm_ge_army_gepard1a1
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="FlakPz 1A1";
  hiddenSelectionsTextures[]={"gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\wdl\gm_ge_army_leopard1_wheels_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_02_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_03_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_04_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\wdl\gm_ge_army_gepard1a1_ext_05_wdl_co.paa","gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\tacticalsigns\gm_tacticalsigns_nato_airdefence_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\licenseplates\gm_ge_army_blk_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\y_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\-_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\2_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\8_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\8_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\0_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\5_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","","","","","","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\insignias\nations\gm_ge_army_01_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\3_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\5_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\5_ca.paa","","","","","","","","","","","","","","","","","","","","","","","",""};
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseFuchs_Recon_flk: gm_ge_army_fuchsa0_reconnaissance
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="Tpz Fuchs (Recon)";
  hiddenSelectionsTextures[]={"gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchs_rim_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_ext_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_ext_02_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_ext_03_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_engineer_ext_04_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_engineer_ext_04_wdl_co.paa","gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\tacticalsigns\gm_tacticalsigns_nato_armoredengineer_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\licenseplates\gm_ge_army_blk_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\y_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\-_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\2_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\1_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\4_ca.paa","","","","","","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\insignias\nations\gm_ge_army_01_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\4_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\4_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\9_ca.paa","","","","","","","","","","","","","","","","","","","","","","","",""};
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
        ITEM_XX(Minedetector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseFuchs_CMD_flk: gm_ge_army_fuchsa0_command
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="Tpz Fuchs (Command)";
  hiddenSelectionsTextures[]={"gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchs_rim_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_ext_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_ext_02_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_ext_03_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_engineer_ext_04_wdl_co.paa","gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\wdl\gm_ge_army_fuchsa0_engineer_ext_04_wdl_co.paa","gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\tacticalsigns\gm_tacticalsigns_nato_armoredengineer_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\licenseplates\gm_ge_army_blk_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\y_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\-_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\2_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\1_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\4_ca.paa","","","","","","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\insignias\nations\gm_ge_army_01_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\4_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\4_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\9_ca.paa","","","","","","","","","","","","","","","","","","","","","","","",""};
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
        ITEM_XX(Minedetector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseLuchs_2A2_flk: gm_ge_army_luchsa2
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="SpPz Luchs 2A2";
hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\wdl\gm_ge_army_luchs_rim_01_wdl_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\wdl\gm_ge_army_luchsa2_ext_01_wdl_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\wdl\gm_ge_army_luchs_ext_02_wdl_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\wdl\gm_ge_army_luchs_ext_03_wdl_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\wdl\gm_ge_army_luchsa2_ext_04_wdl_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\wdl\gm_ge_army_luchs_ext_05_wdl_co.paa","\gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa"};  
crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseMarder_1A2_flk: gm_ge_army_marder1a2
  {
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="Marder 1A2";
  hiddenSelectionsTextures[]={"gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\wdl\gm_ge_army_marder1a0_wheels_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\wdl\gm_ge_army_marder1a0_ext_01_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\wdl\gm_ge_army_marder1a0_ext_02_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\wdl\gm_ge_army_marder1a0_ext_03_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\wdl\gm_ge_army_marder1a0_ext_04_wdl_co.paa","gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\wdl\gm_ge_army_marder1a0_ext_04_wdl_co.paa","gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\tacticalsigns\gm_tacticalsigns_nato_mechanizedinfantry_ca.paa","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\licenseplates\gm_ge_army_blk_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\y_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\-_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\3_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\1_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\1_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\4_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\1_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk\9_ca.paa","","","","","","","","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\insignias\nations\gm_ge_army_01_ca.paa","","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\3_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\0_ca.paa","gm\gm_core\gm_core_vehicles\data\systems\vehiclemarkings\fonts\din_norm\blk_gry\5_ca.paa","","","","","","","","","","","","","","","","","","","","","","","",""};
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseBrPz_trp: gm_ge_army_bibera0
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="BrkPz";
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
  hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_biber\gm_ge_army_biber\data\des\gm_ge_army_biber_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_biber\gm_ge_army_biber\data\des\gm_ge_army_biber_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_biber\gm_ge_army_biber\data\des\gm_ge_army_biber_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_biber\gm_ge_army_biber\data\des\gm_ge_army_biber_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_biber\gm_ge_army_biber\data\des\gm_ge_army_biber_ext_05_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_biber\gm_ge_army_biber\data\des\gm_ge_army_biber_bridge_ext_01_des_co.paa"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseMarder_1A2_trp: gm_ge_army_marder1a2
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="Marder 1A2";
  hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\des\gm_ge_army_marder1a0_wheels_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\des\gm_ge_army_marder1a0_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\des\gm_ge_army_marder1a0_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\des\gm_ge_army_marder1a0_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\des\gm_ge_army_marder1a0_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_marder1\gm_ge_army_marder1\data\des\gm_ge_army_marder1a0_ext_04_des_co.paa","\gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa"};
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseLuchs_2A2_trp: gm_ge_army_luchsa2
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="SpPz Luchs 2A2";
hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\des\gm_ge_army_luchs_rim_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\des\gm_ge_army_luchsa2_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\des\gm_ge_army_luchs_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\des\gm_ge_army_luchs_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\des\gm_ge_army_luchsa2_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_luchs\gm_ge_army_luchs\data\des\gm_ge_army_luchs_ext_05_des_co.paa","\gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa"};  
crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

//FUCHS//
class B_GAF2_baseFuchs_CMD_trp: gm_ge_army_fuchsa0_command
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="Tpz Fuchs (Command)";
  hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchs_rim_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_command_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_command_ext_04_des_co.paa","\gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa"};
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
        ITEM_XX(Minedetector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};


class B_GAF2_baseFuchs_Recon_trp: gm_ge_army_fuchsa0_reconnaissance
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="Tpz Fuchs (Recon)";
  hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchs_rim_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_command_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_fuchs\gm_ge_army_fuchs\data\des\gm_ge_army_fuchsa0_command_ext_04_des_co.paa","\gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa"};
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
        ITEM_XX(Minedetector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseMLRS_LARS_01_trp: gm_ge_army_kat1_463_mlrs
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="MLRS LARS2";
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
  hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\des\gm_ge_army_kat1_rim_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\des\gm_ge_army_kat1_452_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\des\gm_ge_army_kat1_452_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\des\gm_ge_army_kat1_463_mlrs_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\des\gm_ge_army_kat1_463_mlrs_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_wheeled\gm_kat1\gm_ge_army_kat1\data\des\gm_ge_army_kat1_463_mlrs_ext_05_des_co.paa"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseM109G_trp: gm_ge_army_m109g
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="Howitzer 155 mm - M109G";
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
  hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_m109\gm_ge_army_m109\data\des\gm_ge_army_m109_wheels_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_m109\gm_ge_army_m109\data\des\gm_ge_army_m109g_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_m109\gm_ge_army_m109\data\des\gm_ge_army_m109g_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_m109\gm_ge_army_m109\data\des\gm_ge_army_m109g_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_m109\gm_ge_army_m109\data\des\gm_ge_army_m109g_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_m109\gm_ge_army_m109\data\des\gm_ge_army_m109g_ext_04_des_co.paa","\gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa"};
/*
  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,24);
        MAG_XX(BWA3_20Rnd_762x51_G28,12);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,18);
        MAG_XX(1Rnd_HE_Grenade_shell,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,5);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(HK416_Eotech_BLK,2);
        WEAP_XX(BWA3_MG4_BWA3_optic_ZO4x30_MicroT2,1);

      };*/

};

class B_GAF2_baseFlakPz_1A1_trp: gm_ge_army_gepard1a1
{
  faction="B_GAF2_TRP";
  side=1;
    scope = 0;
  scopeCurator = 0;
picture = "z\gaf2\addons\main\data\GAFGMeditoricon.paa";
  displayName="FlakPz 1A1";
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
  hiddenSelectionsTextures[] = {"\gm\gm_vehicles\gm_land\gm_tracked\gm_leopard1\gm_ge_army_leopard1\data\des\gm_ge_army_leopard1_wheels_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_01_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_02_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_03_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_04_des_co.paa","\gm\gm_vehicles\gm_land\gm_tracked\gm_gepard\gm_ge_army_gepard\data\des\gm_ge_army_gepard1a1_ext_05_des_co.paa","\gm\gm_core\data\camo\gm_camonet_01_nato_wdl_ca.paa"};
};
