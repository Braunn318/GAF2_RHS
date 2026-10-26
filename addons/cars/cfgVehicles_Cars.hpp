class BWA3_Dingo2_FLW200_GMW_Fleck;
class BWA3_Dingo2_FLW200_GMW_Tropen;
class BWA3_Eagle_Fleck;
class BWA3_Eagle_Tropen;
class BWA3_Eagle_FLW100_Fleck;
class BWA3_Dingo2_FLW200_M2_Fleck;
class KGB_B_MRAP_03_F;
class KGB_B_MRAP_03_hmg_F;
class KGB_B_MRAP_03_gmg_F;
class BW_LKW_Treibstoff_Fleck;
class BW_LKW_Geraet_Fleck;
class BW_LKW_Munition_Fleck;
class BW_LKW_Medic_Fleck;
class BW_LKW_Reparatur_Fleck;
class BW_LKW_Transport_offen_Fleck;
class BW_LKW_Transport_Fleck;
class BW_LKW_Treibstoff_Tropen;
class BW_LKW_Geraet_Tropen;
class BW_LKW_Munition_Tropen;
class BW_LKW_Medic_Tropen;
class BW_LKW_Reparatur_Tropen;
class BW_LKW_Transport_offen_Tropen;
class BW_LKW_Transport_Tropen;
class BWA3_Eagle_FLW100_Tropen;
class BWA3_Dingo2_FLW200_M2_Tropen;
class KGB_B_MRAP_03_F_DES;
class KGB_B_MRAP_03_hmg_F_DES;
class KGB_B_MRAP_03_gmg_F_DES;
class B_CTRG_LSV_01_light_F;
class B_LSV_01_unarmed_F;
class B_Truck_01_mover_F;
//class B_Truck_01_ammo_F;
//class B_Truck_01_cargo_F;
//class B_Truck_01_box_F;
//class B_Truck_01_Repair_F;
class B_Truck_01_transport_F;
//class B_Truck_01_flatbed_F;
class B_Truck_01_covered_F;
class BWA3_Multi_Fleck;
class BWA3_Multi_Tropen;

//Hemmt retextured
class B_GAF2_HEMMT_TROpen_flk: B_Truck_01_transport_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Transport (Open)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_TROpen_trp: B_Truck_01_transport_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Transport (Open)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};

class B_GAF2_HEMMT_TROpen_mlt: B_GAF2_HEMMT_TROpen_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Transport (Open)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};
};

//hiddenSelectionsTextures[] = {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"};
class B_GAF2_HEMMT_TRCover_flk: B_Truck_01_covered_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Transport (Cover)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa","z\gaf2\addons\cars\data\Truck_01_cover_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_TRCover_trp: B_Truck_01_covered_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Transport (Cover)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa","z\gaf2\addons\cars\data\Truck_01_cover_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};

class B_GAF2_HEMMT_TRCover_mlt: B_GAF2_HEMMT_TRCover_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Transport (Cover)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa","z\gaf2\addons\cars\data\Truck_01_cover_trp.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};
};

class B_GAF2_HEMMT_MED_flk: B_Truck_01_covered_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Medical";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  threat[] = {0,0,0};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa","z\gaf2\addons\cars\data\Truck_01_covermed_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
  ace_cargo_space = 100;
  vehicleClass = "Support";
  supplyRadius = 15;
  attendant = 1;


  class TransportItems
  {
    ITEM_XX(FirstAidKit,10);
    ITEM_XX(Medikit,10);
    ITEM_XX(ACE_epinephrine,30);
    ITEM_XX(ACE_morphine,30);
    ITEM_XX(ACE_salineIV_500,20);
    ITEM_XX(ACE_packingBandage,50);
    ITEM_XX(ACE_elasticBandage,50);
    ITEM_XX(ACE_quikclot,40);
    ITEM_XX(ACE_tourniquet,20);
    ITEM_XX(ACE_adenosine,20);
    ITEM_XX(ACE_CableTie,4);
    ITEM_XX(ACE_splint,15);
    ITEM_XX(ACE_surgicalKit,10);
    ITEM_XX(ACE_bodyBag,10);
  };

};


class B_GAF2_HEMMT_MED_trp: B_Truck_01_covered_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Medical";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  threat[] = {0,0,0};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa","z\gaf2\addons\cars\data\Truck_01_covermed_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
  ace_cargo_space = 100;
  vehicleClass = "Support";
  supplyRadius = 15;
  attendant = 1;


  class TransportItems
  {
    ITEM_XX(FirstAidKit,10);
    ITEM_XX(Medikit,10);
    ITEM_XX(ACE_epinephrine,30);
    ITEM_XX(ACE_morphine,30);
    ITEM_XX(ACE_salineIV_500,20);
    ITEM_XX(ACE_packingBandage,50);
    ITEM_XX(ACE_elasticBandage,50);
    ITEM_XX(ACE_quikclot,40);
    ITEM_XX(ACE_tourniquet,20);
    ITEM_XX(ACE_adenosine,20);
    ITEM_XX(ACE_CableTie,4);
    ITEM_XX(ACE_splint,15);
    ITEM_XX(ACE_surgicalKit,10);
    ITEM_XX(ACE_bodyBag,10);
  };

};

class B_GAF2_HEMMT_MED_mlt: B_GAF2_HEMMT_MED_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Medical";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  threat[] = {0,0,0};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa","z\gaf2\addons\cars\data\Truck_01_covermed_trp.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};
  ace_cargo_space = 100;
  vehicleClass = "Support";
  supplyRadius = 15;
  attendant = 1;


  class TransportItems
  {
    ITEM_XX(FirstAidKit,10);
    ITEM_XX(Medikit,10);
    ITEM_XX(ACE_epinephrine,30);
    ITEM_XX(ACE_morphine,30);
    ITEM_XX(ACE_salineIV_500,20);
    ITEM_XX(ACE_packingBandage,50);
    ITEM_XX(ACE_elasticBandage,50);
    ITEM_XX(ACE_quikclot,40);
    ITEM_XX(ACE_tourniquet,20);
    ITEM_XX(ACE_adenosine,20);
    ITEM_XX(ACE_CableTie,4);
    ITEM_XX(ACE_splint,15);
    ITEM_XX(ACE_surgicalKit,10);
    ITEM_XX(ACE_bodyBag,10);
  };

};

class B_GAF2_HEMMT_Mover_flk: B_Truck_01_mover_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Mover";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\truck_01_mprimer_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_Mover_trp: B_Truck_01_mover_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Mover";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\truck_01_mprimer_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};

class B_GAF2_HEMMT_Mover_mlt: B_GAF2_HEMMT_Mover_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Mover";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\truck_01_mprimer_trp.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};
};

class B_GAF2_mlt_flk: BWA3_Multi_Fleck
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_mlt_trp: BWA3_Multi_Tropen
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};

class B_GAF2_Multi_mlt: B_GAF2_mlt_trp
{
  faction="B_GAF2_MLT";
  side=1;
  editorSubcategory = "MyTrucks";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};
};
/*

class B_GAF2_HEMMT_Flat_flk: B_Truck_01_flatbed_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Flatbed";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_co.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_Flat_trp: B_Truck_01_flatbed_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Flatbed";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_co.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};

// hiddenSelectionsTextures[] = {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_co.paa","\a3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_CO.paa"};


class B_GAF2_HEMMT_CGO_flk: B_Truck_01_cargo_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T (Cargo)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_co.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_CGO_trp: B_Truck_01_cargo_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T (Cargo)";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_co.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};
hiddenSelectionsTextures[] = {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"};
class B_GAF2_HEMMT_Repair_flk: B_Truck_01_Repair_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Repair";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_Repair_trp: B_Truck_01_Repair_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Repair";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};

class B_GAF2_HEMMT_Ammo_flk: B_Truck_01_ammo_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Ammo";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_Ammo_trp: B_Truck_01_ammo_F
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyTrucks";
  displayName="Truck 15T Ammo";
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
};

 hiddenSelectionsTextures[] = {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"};
*/
/*
class BWA3_Eagle_Tropen: BWA3_Eagle_hatch_base {
        #include "SimpleObject_Tropen.hpp"

        author = "$STR_BWA3_Author";
        scope = 2;
        editorPreview = "\bwa3_eagle\editorpreview\BWA3_Eagle_Tropen.jpg";
        side = 1;
        faction = "BWA3_Faction_Tropen";
        crew = "BWA3_Rifleman_Tropen";
        typicalCargo[] = {"BWA3_Rifleman_Tropen","BWA3_Rifleman_Tropen"};

        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "BWA3_MachineGunner_MG5_Tropen";
            };
        };

        textureList[] = {"Tropen1",0.2,"Tropen2",0.2,"Tropen1_2",0.2,"Tropen2_2",0.2,"Tropen3",0.2};
    };
    */
class BWA3_Eagle_Fleck_Import1: BWA3_Eagle_Fleck
{ scope = 0;
  class Turrets;
};

class BWA3_Eagle_Fleck_Import2: BWA3_Eagle_Fleck_Import1
{ scope = 0;
  class Turrets: Turrets
  {
  class CargoTurret_01;
  };
};

class BWA3_Eagle_Tropen_Import1: BWA3_Eagle_Tropen
{ scope = 0;
  class Turrets;
};

class BWA3_Eagle_Tropen_Import2: BWA3_Eagle_Tropen_Import1
{ scope = 0;
  class Turrets: Turrets
  {
  class CargoTurret_01;
  };
};


class B_GAF2_Eagle_IV_flk: BWA3_Eagle_Fleck_Import2
{ 
  scope = 2;
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
  class Turrets: Turrets {
      class CargoTurret_01: CargoTurret_01 {
          gunnerType = "B_GAF2_MachineGunner_MG5_flk";
      };
  };
  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};

class B_GAF2_Eagle_IV_trp: BWA3_Eagle_Tropen_Import2
{ 
  scope = 2;
  faction="B_GAF2_TRP";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};
  class Turrets: Turrets {
      class CargoTurret_01: CargoTurret_01 {
          gunnerType = "B_GAF2_MachineGunner_MG5_trp";
      };
  };

  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};

class B_GAF2_Eagle_IV_mlt: B_GAF2_Eagle_IV_trp
{ 
  scope = 2;
  faction="B_GAF2_MLT";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};
  class Turrets: Turrets {
      class CargoTurret_01: CargoTurret_01 {
          gunnerType = "B_GAF2_MachineGunner_MG5_mlt";
      };
  };

};


class B_GAF2_Eagle_IV_FLW100_flk: BWA3_Eagle_FLW100_Fleck
{
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};


  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};

class B_GAF2_Eagle_IV_FLW100_trp: BWA3_Eagle_FLW100_Tropen
{
  faction="B_GAF2_TRP";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};


  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};

class B_GAF2_Eagle_IV_FLW100_mlt: B_GAF2_Eagle_IV_FLW100_trp
{
  faction="B_GAF2_MLT";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};


  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};


class B_GAF2_Polaris_flk: B_CTRG_LSV_01_light_F
{
  faction="B_GAF2_FLK";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="Polaris (KSK)";
  crew="B_GAF2_recon_flk";
  typicalCargo[]={"B_GAF2_recon_flk"};


  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_KSK_WDL,2);

      };
};

class B_GAF2_Polaris_trp: B_LSV_01_unarmed_F
{
  faction="B_GAF2_TRP";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="Polaris (KSK)";
  crew="B_GAF2_recon_trp";
  typicalCargo[]={"B_GAF2_recon_trp"};


  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_KSK_Tan,2);

      };
};

class B_GAF2_Polaris_mlt: B_GAF2_Polaris_trp
{
  faction="B_GAF2_MLT";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  displayName="Polaris (KSK)";
  crew="B_GAF2_recon_mlt";
  typicalCargo[]={"B_GAF2_recon_mlt"};


  class TransportMagazines
  		{
  			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
  			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
  			MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
  		};
  		class TransportItems
  		{
  			ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
  		};
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_KSK_Tan,2);

      };
};

      class B_GAF2_Dingo_M2_flk: BWA3_Dingo2_FLW200_M2_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Grenadier_flk"};


        class TransportMagazines
        		{
        			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
        			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        			MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
        		};
        		class TransportItems
        		{
        			ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
        		};
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };
      };

      class B_GAF2_Dingo_M2_trp: BWA3_Dingo2_FLW200_M2_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Grenadier_trp"};


        class TransportMagazines
        		{
        			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
        			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        			MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
        		};
        		class TransportItems
        		{
        			ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
        		};
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };
      };

      class B_GAF2_Dingo_M2_mlt: B_GAF2_Dingo_M2_trp
      {
        faction="B_GAF2_MLT";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};


        class TransportMagazines
        		{
        			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
        			MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        			MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
        		};
        		class TransportItems
        		{
        			ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
        		};
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };
      };

//GMW
class B_GAF2_Dingo_GMW_flk: BWA3_Dingo2_FLW200_GMW_Fleck
{
  faction="B_GAF2_FLK";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};


  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};

class B_GAF2_Dingo_GMW_trp: BWA3_Dingo2_FLW200_GMW_Tropen
{
  faction="B_GAF2_TRP";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Grenadier_trp"};


  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};

class B_GAF2_Dingo_GMW_mlt: B_GAF2_Dingo_GMW_trp
{
  faction="B_GAF2_MLT";
  side=1;
   editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Grenadier_mlt"};


  class TransportMagazines
      {
        MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
        MAG_XX(BWA3_20Rnd_762x51_G28,10);
        MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
        MAG_XX(BWA3_DM25,12);
        MAG_XX(rhs_mag_M433_HEDP,10);
        MAG_XX(1Rnd_Smoke_Grenade_shell,16);
        MAG_XX(BWA3_DM51A1,10);
        MAG_XX(BWA3_200Rnd_556x45,10);
        MAG_XX(BWA3_120Rnd_762x51,2);
      };
      class TransportItems
      {
        ITEM_XX(FirstAidKit,10);
        ITEM_XX(ToolKit,1);
      };
      class TransportWeapons
      {
        WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
        WEAP_XX(gaf2_HK416_Arco_Blk,2);

      };
};

//Fennek

      class B_GAF2_Fennek_flk: KGB_B_MRAP_03_F
      {
        faction="B_GAF2_FLK";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Grenadier_flk"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };

      class B_GAF2_Fennek_trp: KGB_B_MRAP_03_F_DES
      {
        faction="B_GAF2_TRP";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Grenadier_trp"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };

      class B_GAF2_Fennek_mlt: B_GAF2_Fennek_trp
      {
        faction="B_GAF2_MLT";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };


      class B_GAF2_Fennek_HMG_flk: KGB_B_MRAP_03_hmg_F
      {
        faction="B_GAF2_FLK";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
//        hiddenSelectionsTextures[]={"nato_strider\data\mrap_03_ext_co.paa","nato_strider\data\turret_03_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Grenadier_flk"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };

      class B_GAF2_Fennek_HMG_trp: KGB_B_MRAP_03_hmg_F_DES
      {
        faction="B_GAF2_TRP";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Grenadier_trp"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };

      class B_GAF2_Fennek_HMG_mlt: B_GAF2_Fennek_HMG_trp
      {
        faction="B_GAF2_MLT";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };



      class B_GAF2_Fennek_GMG_flk: KGB_B_MRAP_03_gmg_F
      {
        faction="B_GAF2_FLK";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
//        hiddenSelectionsTextures[]={"nato_strider\data\mrap_03_ext_co.paa","nato_strider\data\turret_03_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Grenadier_flk"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };

      class B_GAF2_Fennek_GMG_trp: KGB_B_MRAP_03_gmg_F_DES
      {
        faction="B_GAF2_TRP";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Grenadier_trp"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };

      class B_GAF2_Fennek_GMG_mlt: B_GAF2_Fennek_GMG_trp
      {
        faction="B_GAF2_MLT";
        side=1;
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,16);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,12);
              MAG_XX(rhs_mag_M433_HEDP,10);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,10);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,2);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
              ITEM_XX(ToolKit,1);
            };
            class TransportWeapons
            {
              WEAP_XX(BWA3_PzF3_Tandem_Loaded,2);
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };


      class B_GAF2_Truck_Fuel_flk: BW_LKW_Treibstoff_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Fuel";
//        hiddenSelectionsTextures[]={"bw_retex_pack_vehicles\textures\truck_03_ext01_co.paa","bw_retex_pack_vehicles\textures\truck_03_ext02_co.paa","bw_retex_pack_vehicles\textures\truck_03_fuel_flk_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Rifleman_flk"};
      };

      class B_GAF2_Truck_Fuel_trp: BW_LKW_Treibstoff_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Fuel";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Rifleman_trp"};
      };

      class B_GAF2_Truck_Fuel_mlt: B_GAF2_Truck_Fuel_trp
      {
        faction="B_GAF2_MLT";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Fuel";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};
      };

      class B_GAF2_Truck_Ammo_flk: BW_LKW_Munition_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Ammo";
//        hiddenSelectionsTextures[]={"bw_retex_pack_vehicles\textures\truck_03_ext01_co.paa","bw_retex_pack_vehicles\textures\truck_03_ext02_co.paa","bw_retex_pack_vehicles\textures\truck_03_cargo_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Rifleman_flk"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,20);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,20);
              MAG_XX(rhs_mag_M433_HEDP,30);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,20);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,10);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
            };
            class TransportWeapons
            {
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };

      };

      class B_GAF2_Truck_Ammo_trp: BW_LKW_Munition_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Ammo";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Rifleman_trp"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,20);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,20);
              MAG_XX(rhs_mag_M433_HEDP,30);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,20);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,10);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
            };
            class TransportWeapons
            {
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };
      };

      class B_GAF2_Truck_Ammo_mlt: B_GAF2_Truck_Ammo_trp
      {
        faction="B_GAF2_MLT";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Ammo";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Rifleman_mlt"};

        class TransportMagazines
            {
              MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,20);
              MAG_XX(BWA3_20Rnd_762x51_G28,10);
              MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
              MAG_XX(BWA3_DM25,20);
              MAG_XX(rhs_mag_M433_HEDP,30);
              MAG_XX(1Rnd_Smoke_Grenade_shell,16);
              MAG_XX(BWA3_DM51A1,20);
              MAG_XX(BWA3_200Rnd_556x45,10);
              MAG_XX(BWA3_120Rnd_762x51,10);
            };
            class TransportItems
            {
              ITEM_XX(FirstAidKit,10);
            };
            class TransportWeapons
            {
              WEAP_XX(gaf2_HK416_Arco_Blk,2);

            };
      };


      class B_GAF2_Truck_Device_flk: BW_LKW_Geraet_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Device";
//        hiddenSelectionsTextures[]={"bw_retex_pack_vehicles\textures\truck_03_ext01_co.paa","bw_retex_pack_vehicles\textures\truck_03_ext02_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Rifleman_flk"};
      };

      class B_GAF2_Truck_Device_trp: BW_LKW_Geraet_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Device";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Rifleman_trp"};
      };

      class B_GAF2_Truck_Device_mlt: B_GAF2_Truck_Device_trp
      {
        faction="B_GAF2_MLT";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Device";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};
      };

      class B_GAF2_Truck_Medevac_flk: BW_LKW_Medic_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Medevac";
//        hiddenSelectionsTextures[]={"bw_retex_pack_vehicles\textures\truck_03_ext01_co.paa","bw_retex_pack_vehicles\textures\truck_03_ext02_co.paa","bw_retex_pack_vehicles\textures\truck_03_cargo_co.paa","bw_retex_pack_vehicles\textures\truck_03_medic_flk_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Rifleman_flk"};

        class TransportItems
        {
          ITEM_XX(FirstAidKit,10);
          ITEM_XX(Medikit,10);
          ITEM_XX(ACE_epinephrine,30);
          ITEM_XX(ACE_morphine,30);
          ITEM_XX(ACE_salineIV_500,10);
          ITEM_XX(ACE_packingBandage,50);
          ITEM_XX(ACE_elasticBandage,50);
          ITEM_XX(ACE_quikclot,40);
          ITEM_XX(ACE_tourniquet,10);
          ITEM_XX(ACE_adenosine,20);
          ITEM_XX(ACE_CableTie,4);
          ITEM_XX(ACE_splint,10);
          ITEM_XX(ACE_surgicalKit,10);
          ITEM_XX(ACE_bodyBag,5);
        };
      };

      class B_GAF2_Truck_Medevac_trp: BW_LKW_Medic_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Medevac";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Rifleman_trp"};

        class TransportItems
        {
          ITEM_XX(FirstAidKit,10);
          ITEM_XX(Medikit,10);
          ITEM_XX(ACE_epinephrine,30);
          ITEM_XX(ACE_morphine,30);
          ITEM_XX(ACE_salineIV_500,10);
          ITEM_XX(ACE_packingBandage,50);
          ITEM_XX(ACE_elasticBandage,50);
          ITEM_XX(ACE_quikclot,40);
          ITEM_XX(ACE_tourniquet,10);
          ITEM_XX(ACE_adenosine,20);
          ITEM_XX(ACE_CableTie,4);
          ITEM_XX(ACE_splint,10);
          ITEM_XX(ACE_surgicalKit,10);
          ITEM_XX(ACE_bodyBag,5);
        };
      };

      class B_GAF2_Truck_Medevac_mlt: B_GAF2_Truck_Medevac_trp
      {
        faction="B_GAF2_MLT";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Medevac";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};
};
      class B_GAF2_Truck_Repair_flk: BW_LKW_Reparatur_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
        editorSubcategory = "MyTrucks";
        editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Repair";
//        hiddenSelectionsTextures[]={"bw_retex_pack_vehicles\textures\truck_03_ext01_co.paa","bw_retex_pack_vehicles\textures\truck_03_ext02_co.paa","bw_retex_pack_vehicles\textures\truck_03_fuel2_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Rifleman_flk"};

        class TransportItems
        {
          ITEM_XX(FirstAidKit,10);
          ITEM_XX(ToolKit,5);
        };
      };

      class B_GAF2_Truck_Repair_trp: BW_LKW_Reparatur_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Repair";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Rifleman_trp"};

        class TransportItems
        {
          ITEM_XX(FirstAidKit,10);
          ITEM_XX(ToolKit,5);
        };
      };

      class B_GAF2_Truck_Repair_mlt: B_GAF2_Truck_Repair_trp
      {
        faction="B_GAF2_MLT";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Repair";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Grenadier_mlt"};
};
      class B_GAF2_Truck_Tansport_Open_flk: BW_LKW_Transport_offen_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Tansport Open";
//        hiddenSelectionsTextures[]={"bw_retex_pack_vehicles\textures\truck_03_ext01_co.paa","bw_retex_pack_vehicles\textures\truck_03_ext02_co.paa","bw_retex_pack_vehicles\textures\truck_03_cargo_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Rifleman_flk"};
      };

      class B_GAF2_Truck_Tansport_Open_trp: BW_LKW_Transport_offen_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Tansport Open";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Rifleman_trp"};
      };

      class B_GAF2_Truck_Tansport_Open_mlt: B_GAF2_Truck_Tansport_Open_trp
      {
        faction="B_GAF2_MLT";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Tansport Open";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Rifleman_mlt"};
      };


      class B_GAF2_Truck_Transport_flk: BW_LKW_Transport_Fleck
      {
        faction="B_GAF2_FLK";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Transport";
//        hiddenSelectionsTextures[]={"bw_retex_pack_vehicles\textures\truck_03_ext01_co.paa","bw_retex_pack_vehicles\textures\truck_03_ext02_co.paa","bw_retex_pack_vehicles\textures\truck_03_cargo_co.paa","bw_retex_pack_vehicles\textures\truck_03_cover_co.paa"};
        crew="B_GAF2_Rifleman_flk";
        typicalCargo[]={"B_GAF2_Rifleman_flk"};
      };

      class B_GAF2_Truck_Transport_trp: BW_LKW_Transport_Tropen
      {
        faction="B_GAF2_TRP";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Transport";
        crew="B_GAF2_Rifleman_trp";
        typicalCargo[]={"B_GAF2_Rifleman_trp"};
      };

      class B_GAF2_Truck_Transport_mlt: B_GAF2_Truck_Transport_trp
      {
        faction="B_GAF2_MLT";
        side=1;
        editorSubcategory = "MyTrucks";
         editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
        displayName="Truck Transport";
        crew="B_GAF2_Rifleman_mlt";
        typicalCargo[]={"B_GAF2_Rifleman_mlt"};
      };
