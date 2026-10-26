class EC135Armedlu;
class EC135Unarmedlu;
//Flecktarn
class B_GAF2_base_EC135Unarmed_flk: EC135Unarmedlu
{
  faction="B_GAF2_FLK";
  editorPreview = "z\gaf2\addons\air_ec135_compat\data\UI\B_GAF2_EC135_Unarmed_wdl_flk.jpg";
  side=1;
  editorSubcategory = "EdSubcat_Helicopters";
  displayName="EC135 (Unarmed)";
    scope = 0;
scopeArsenal = 0;
  crew="B_GAF2_Helipilot_flk";
  typicalCargo[]={"B_GAF2_Helipilot_flk"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\air_EC135_compat\data\camo1.paa","z\gaf2\addons\air_EC135_compat\data\camo2.paa","z\gaf2\addons\air_EC135_compat\data\camo3.paa","z\gaf2\addons\air_EC135_compat\data\camo4.paa","z\gaf2\addons\air_EC135_compat\data\camo5.paa",""};

  class TransportMagazines
      {

        MAG_XX(BWA3_DM25,2);
        MAG_XX(BWA3_DM32_Blue,2);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,4);
        ITEM_XX(ToolKit,1);
        ITEM_XX(BWA3_ItemNaviPad,1);
        ITEM_XX(BWA3_Vector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
      };

};

class B_GAF2_base_EC135_Armed_flk: EC135Armedlu
{
  faction="B_GAF2_FLK";
  editorPreview = "z\gaf2\addons\air_ec135_compat\data\UI\B_GAF2_EC135_Armed_wdl_flk.jpg";
  side=1;
  editorSubcategory = "EdSubcat_Helicopters";
  displayName="EC135 (Armed)";
  scope = 0;
scopeArsenal = 0;
  crew="B_GAF2_Helipilot_flk";
  typicalCargo[]={"B_GAF2_Helipilot_flk"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\air_EC135_compat\data\camo1.paa","z\gaf2\addons\air_EC135_compat\data\camo2.paa","z\gaf2\addons\air_EC135_compat\data\camo3.paa","z\gaf2\addons\air_EC135_compat\data\camo4.paa","z\gaf2\addons\air_EC135_compat\data\camo5.paa",""};

  class TransportMagazines
      {

        MAG_XX(BWA3_DM25,2);
        MAG_XX(BWA3_DM32_Blue,2);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,4);
        ITEM_XX(ToolKit,1);
        ITEM_XX(BWA3_ItemNaviPad,1);
        ITEM_XX(BWA3_Vector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
      };

};
//Multitarn
class B_GAF2_base_EC135_Unarmed_mlt: EC135Unarmedlu
{
  faction="B_GAF2_MLT";
  side=1;
  editorPreview = "z\gaf2\addons\air_ec135_compat\data\UI\B_GAF2_EC135_Unarmed_des_flk.jpg";
  editorSubcategory = "EdSubcat_Helicopters";
  displayName="EC135 (Unarmed)";
    scope = 0;
scopeArsenal = 0;
  crew="B_GAF2_Jetpilot_mlt";
  typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\air_EC135_compat\data\dcamo1.paa","z\gaf2\addons\air_EC135_compat\data\dcamo2.paa","z\gaf2\addons\air_EC135_compat\data\dcamo3.paa","z\gaf2\addons\air_EC135_compat\data\dcamo4.paa","z\gaf2\addons\air_EC135_compat\data\dcamo5.paa",""};

  class TransportMagazines
      {

        MAG_XX(BWA3_DM25,2);
        MAG_XX(BWA3_DM32_Blue,2);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,4);
        ITEM_XX(ToolKit,1);
        ITEM_XX(BWA3_ItemNaviPad,1);
        ITEM_XX(BWA3_Vector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
      };

};

class B_GAF2_base_EC135_Armed_mlt: EC135Armedlu
{
  faction="B_GAF2_MLT";
  editorPreview = "z\gaf2\addons\air_ec135_compat\data\UI\B_GAF2_EC135_Armed_des_flk.jpg";
  side=1;
  editorSubcategory = "EdSubcat_Helicopters";
  displayName="EC135 (Armed)";
  scope = 0;
scopeArsenal = 0;
  crew="B_GAF2_Jetpilot_mlt";
  typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\air_EC135_compat\data\dcamo1.paa","z\gaf2\addons\air_EC135_compat\data\dcamo2.paa","z\gaf2\addons\air_EC135_compat\data\dcamo3.paa","z\gaf2\addons\air_EC135_compat\data\dcamo4.paa","z\gaf2\addons\air_EC135_compat\data\dcamo5.paa",""};

  class TransportMagazines
      {

        MAG_XX(BWA3_DM25,2);
        MAG_XX(BWA3_DM32_Blue,2);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,4);
        ITEM_XX(ToolKit,1);
        ITEM_XX(BWA3_ItemNaviPad,1);
        ITEM_XX(BWA3_Vector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
      };

};
//Tropentarn
class B_GAF2_base_EC135Unarmed_trp: EC135Unarmedlu
{
  faction="B_GAF2_TRP";
  editorPreview = "z\gaf2\addons\air_ec135_compat\data\UI\B_GAF2_EC135_Unarmed_des_flk.jpg";
  side=1;
  editorSubcategory = "EdSubcat_Helicopters";
  displayName="EC135 (Unarmed)";
    scope = 0;
scopeArsenal = 0;
  crew="B_GAF2_Helipilot_trp";
  typicalCargo[]={"B_GAF2_Helipilot_trp"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\air_EC135_compat\data\dcamo1.paa","z\gaf2\addons\air_EC135_compat\data\dcamo2.paa","z\gaf2\addons\air_EC135_compat\data\dcamo3.paa","z\gaf2\addons\air_EC135_compat\data\dcamo4.paa","z\gaf2\addons\air_EC135_compat\data\dcamo5.paa",""};

  class TransportMagazines
      {

        MAG_XX(BWA3_DM25,2);
        MAG_XX(BWA3_DM32_Blue,2);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,4);
        ITEM_XX(ToolKit,1);
        ITEM_XX(BWA3_ItemNaviPad,1);
        ITEM_XX(BWA3_Vector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
      };

};

class B_GAF2_base_EC135_Armed_trp: EC135Armedlu
{
  faction="B_GAF2_TRP";
  editorPreview = "z\gaf2\addons\air_ec135_compat\data\UI\B_GAF2_EC135_Armed_des_flk.jpg";
  side=1;
  editorSubcategory = "EdSubcat_Helicopters";
  displayName="EC135 (Armed)";
  scope = 0;
scopeArsenal = 0;
  crew="B_GAF2_Helipilot_trp";
  typicalCargo[]={"B_GAF2_Helipilot_trp"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\air_EC135_compat\data\dcamo1.paa","z\gaf2\addons\air_EC135_compat\data\dcamo2.paa","z\gaf2\addons\air_EC135_compat\data\dcamo3.paa","z\gaf2\addons\air_EC135_compat\data\dcamo4.paa","z\gaf2\addons\air_EC135_compat\data\dcamo5.paa",""};

  class TransportMagazines
      {

        MAG_XX(BWA3_DM25,2);
        MAG_XX(BWA3_DM32_Blue,2);
        MAG_XX(BWA3_DM51A1,5);
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,4);
        ITEM_XX(ToolKit,1);
        ITEM_XX(BWA3_ItemNaviPad,1);
        ITEM_XX(BWA3_Vector,1);
      };
      class TransportWeapons
      {
        WEAP_XX(gaf2_HK416_Arco_Blk,2);
      };

};
