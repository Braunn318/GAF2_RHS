class BWA3_Puma_Fleck;
class BWA3_Puma_Tropen;
class BWA3_Leopard2_Fleck;
class BWA3_Leopard2_Tropen;
class B_MBT_01_mlrs_F;
class B_MBT_01_arty_F;
class B_APC_Tracked_01_AA_F;
class BWA3_Panzerhaubitze2000_Tropen;
class BWA3_Panzerhaubitze2000_Fleck;

//AA
class B_GAF2_AA_flk: B_APC_Tracked_01_AA_F
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="FlakPanzer Gepard";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

class B_GAF2_AA_trp: B_APC_Tracked_01_AA_F
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="FlakPanzer Gepard";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

class B_GAF2_AA_mlt: B_GAF2_AA_trp
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="FlakPanzer Gepard";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\APC_Tracked_01_AA_body_TRP.paa","z\gaf2\addons\armored\data\MBT_01_body_TRP.paa","z\gaf2\addons\armored\data\APC_Tracked_01_AA_Tower_TRP.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
  crew="B_GAF2_Crew_mlt";
  typicalCargo[]={"B_GAF2_Crew_mlt"};
};

//Flecktarn//

class B_GAF2_IFV_Puma_flk: BWA3_Puma_Fleck
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="IFV Puma";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  //hiddenSelectionsTextures[]={"bwa3_puma\data\bwa3_puma_wanne_fleck_co.paa","bwa3_puma\data\bwa3_puma_turm_fleck_co.paa","bwa3_puma\data\bwa3_puma_netz_fleck_ca.paa","bwa3_common\data\licenseplates\y_5_ca.paa","bwa3_common\data\licenseplates\y_4_ca.paa","bwa3_common\data\licenseplates\y_0_ca.paa","bwa3_common\data\licenseplates\y_4_ca.paa","bwa3_common\data\licenseplates\y_7_ca.paa","bwa3_common\data\licenseplates\y_2_ca.paa","bwa3_common\data\symbols\4_ca.paa","bwa3_common\data\symbols\1_ca.paa","bwa3_common\data\symbols\2_ca.paa","bwa3_common\data\symbols\2_ca.paa","#(argb,8,8,3)color(0,0,0,0,co)"};
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

class B_GAF2_IFV_Puma_trp: BWA3_Puma_Tropen
{
  faction="B_GAF2_TRP";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="IFV Puma";
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

class B_GAF2_IFV_Puma_mlt: B_GAF2_IFV_Puma_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="IFV Puma";
  crew="B_GAF2_Crew_mlt";
  typicalCargo[]={"B_GAF2_Crew_mlt"};
};
//Leopard//
class B_GAF2_MBT_Leopard_2_flk: BWA3_Leopard2_Fleck
{
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="MBT Leopard 2";
  //hiddenSelectionsTextures[]={"bwa3_leopard2\data\bwa3_leopard2_wanne_fleck_co.paa","bwa3_leopard2\data\bwa3_leopard2_turm_fleck_co.paa","bwa3_leopard2\data\bwa3_leopard2_fahrwerk_fleck2_co.paa","bwa3_leopard2\data\bwa3_leopard2_decals_fleck_ca.paa","bwa3_leopard2\data\bwa3_leopard2_netz_fleck_ca.paa","bwa3_common\data\bwa3_net_parts_co.paa","bwa3_mg3\data\bwa3_mg3_co.paa","bwa3_common\data\licenseplates\y_9_ca.paa","bwa3_common\data\licenseplates\y_2_ca.paa","bwa3_common\data\licenseplates\y_5_ca.paa","bwa3_common\data\licenseplates\y_4_ca.paa","bwa3_common\data\licenseplates\y_5_ca.paa","bwa3_common\data\licenseplates\y_8_ca.paa","bwa3_common\data\symbols\2_ca.paa","bwa3_common\data\symbols\1_ca.paa","bwa3_common\data\symbols\0_ca.paa","bwa3_common\data\symbols\4_ca.paa","bwa3_common\data\symbols\2_ca.paa","bwa3_common\data\symbols\1_ca.paa","bwa3_common\data\symbols\0_ca.paa","bwa3_common\data\symbols\2_t_ca.paa","bwa3_common\data\symbols\1_t_ca.paa","bwa3_common\data\symbols\0_t_ca.paa","#(argb,8,8,3)color(0,0,0,0,co)"};
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

class B_GAF2_MBT_Leopard_2_trp: BWA3_Leopard2_Tropen
{
  faction="B_GAF2_TRP";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="MBT Leopard 2";
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
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
        WEAP_XX(GAF2_MG4_G33,1);

      };

};

class B_GAF2_MBT_Leopard_2_mlt: B_GAF2_MBT_Leopard_2_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="MBT Leopard 2";
  crew="B_GAF2_Crew_mlt";
  typicalCargo[]={"B_GAF2_Crew_mlt"};
  };
// Marder//


class B_GAF2_Scorcher_flk: B_MBT_01_arty_F

{
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

class B_GAF2_MBT_01_flk: B_MBT_01_mlrs_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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
class B_GAF2_MBT_01_trp: B_MBT_01_mlrs_F
{
faction="B_GAF2_TRP";
side=1;
editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

class B_GAF2_MBT_01_mlt: B_GAF2_MBT_01_trp
{
faction="B_GAF2_MLT";
side=1;
editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
displayName="MBT (MLRS)";
crew="B_GAF2_Crew_mlt";
typicalCargo[]={"B_GAF2_Crew_mlt"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\MBT_01_body_TRP.paa","z\gaf2\addons\armored\data\MBT_01_MLRS_TRP.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
};

class B_GAF2_Scorcher_trp: B_MBT_01_arty_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

class B_GAF2_Scorcher_mlt: B_GAF2_Scorcher_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="Sholef 155mm";
  crew="B_GAF2_Crew_mlt";
  typicalCargo[]={"B_GAF2_Crew_mlt"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\armored\data\MBT_01_body_TRP.paa","z\gaf2\addons\armored\data\MBT_01_scorcher_TRP.paa","z\gaf2\addons\armored\data\Turret_TRP.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
};

class B_GAF2_PzH2000_flk: BWA3_Panzerhaubitze2000_Fleck

{
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

class B_GAF2_PzH2000_trp: BWA3_Panzerhaubitze2000_Tropen
{
  faction="B_GAF2_TRP";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

class B_GAF2_PzH2000_mlt: B_GAF2_PzH2000_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Crew_mlt";
  typicalCargo[]={"B_GAF2_Crew_mlt"};
};
