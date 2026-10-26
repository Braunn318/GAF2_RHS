class BWA3_Puma_Fleck;
class BWA3_Puma_Tropen;
class BWA3_Leopard2_Fleck;
class BWA3_Leopard2_Tropen;
class B_MBT_01_mlrs_F;
class B_MBT_01_arty_F;
class B_APC_Tracked_01_AA_F;
class BWA3_Panzerhaubitze2000_Tropen;
class BWA3_Panzerhaubitze2000_Fleck;
class BWA3_Skorpion_Fleck;
class BWA3_Skorpion_Tropen;

class B_GAF2_Scorcher_Fleck: B_MBT_01_arty_F
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
  editorPreview = "z\gaf2\addons\armored\data\UI\B_GAF2_Scorcher_flk.jpg";
  displayName="Sholef 155mm";
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\MBT_01_body_WDL.paa","z\gaf2\addons\armored\data\MBT_01_scorcher_WDL.paa","z\gaf2\addons\armored\data\Turret_WDL.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa"};

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
        ITEM_XX(ACE_DefusalKit,1);
        ITEM_XX(ACE_EntrenchingTool,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
        WEAP_XX(GAF2_MG4_G33,1);

      };
};

class B_GAF2_MBT_01_Fleck: B_MBT_01_mlrs_F
{
  faction="B_GAF2_FLK";
  side=1;
    scope = 0;
  scopeCurator = 0;
  editorPreview = "z\gaf2\addons\armored\data\UI\B_GAF2_MBT_01_flk.jpg";
  displayName="MBT (MLRS)";
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\MBT_01_body_WDL.paa","z\gaf2\addons\armored\data\MBT_01_MLRS_WDL.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
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
        ITEM_XX(ACE_DefusalKit,1);
        ITEM_XX(ACE_EntrenchingTool,1); 
        ITEM_XX(ACE_Fortify,1); 
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
        WEAP_XX(GAF2_MG4_G33,1);
      };

};
//Tropentarn//
class B_GAF2_MBT_01_Tropen: B_MBT_01_mlrs_F
{
    faction="B_GAF2_TRP";
    side=1;
    scope = 0;
    scopeCurator = 0;
  editorPreview = "z\gaf2\addons\armored\data\UI\B_GAF2_MBT_01_trp.jpg";
    displayName="MBT (MLRS)";
    crew="B_GAF2_Crew_trp";
    typicalCargo[]={"B_GAF2_Crew_trp"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\MBT_01_body_TRP.paa","z\gaf2\addons\armored\data\MBT_01_MLRS_TRP.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};

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
        ITEM_XX(ACE_DefusalKit,1);
        ITEM_XX(ACE_EntrenchingTool,1); 
        ITEM_XX(ACE_Fortify,1); 
    };
    class TransportWeapons
    {
      WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
      WEAP_XX(gaf2_HK416_Arco_Blk,2);
      WEAP_XX(GAF2_MG4_G33,1);
    };
};

class B_GAF2_Scorcher_Tropen: B_MBT_01_arty_F
{
  faction="B_GAF2_TRP";
  side=1;
  scope = 0;
  scopeCurator = 0;
  editorPreview = "z\gaf2\addons\armored\data\UI\B_GAF2_Scorcher_trp.jpg";
  displayName="Sholef 155mm";
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\MBT_01_body_TRP.paa","z\gaf2\addons\armored\data\MBT_01_scorcher_TRP.paa","z\gaf2\addons\armored\data\Turret_TRP.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
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
        ITEM_XX(ACE_DefusalKit,1);
        ITEM_XX(ACE_EntrenchingTool,1); 
        ITEM_XX(ACE_Fortify,1); 
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
        WEAP_XX(GAF2_MG4_G33,1);
      };
};

class B_GAF2_AA_Fleck: B_APC_Tracked_01_AA_F
{
  faction="B_GAF2_FLK";
  side=1;
  scope = 0;
  scopeCurator = 0;
  displayName="FlakPanzer Gepard";
  editorPreview = "z\gaf2\addons\armored\data\UI\B_GAF2_AA_flk.jpg";
  hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\APC_Tracked_01_AA_body_WDL.paa","z\gaf2\addons\armored\data\MBT_01_body_WDL.paa","z\gaf2\addons\armored\data\APC_Tracked_01_AA_Tower_WDL.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
  crew="B_GAF2_Crew_flk";
  typicalCargo[]={"B_GAF2_Crew_flk"};

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
        ITEM_XX(ACE_DefusalKit,1);
        ITEM_XX(ACE_EntrenchingTool,1);
        ITEM_XX(ACE_Fortify,1); 
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
        WEAP_XX(GAF2_MG4_G33,1);
      };
};

class B_GAF2_AA_Tropen: B_APC_Tracked_01_AA_F
{
  faction="B_GAF2_TRP";
  side=1;
  scope = 0;
  scopeCurator = 0;
  displayName="FlakPanzer Gepard";
  editorPreview = "z\gaf2\addons\armored\data\UI\B_GAF2_AA_trp.jpg";
  hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\APC_Tracked_01_AA_body_TRP.paa","z\gaf2\addons\armored\data\MBT_01_body_TRP.paa","z\gaf2\addons\armored\data\APC_Tracked_01_AA_Tower_TRP.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
  crew="B_GAF2_Crew_trp";
  typicalCargo[]={"B_GAF2_Crew_trp"};

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
        ITEM_XX(ACE_DefusalKit,1);
        ITEM_XX(ACE_EntrenchingTool,1);
        ITEM_XX(ACE_Fortify,1); 
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
        WEAP_XX(GAF2_MG4_G33,1);
      };
};

