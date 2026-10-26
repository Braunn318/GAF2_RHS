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
//class B_Truck_01_mover_F;
//class B_Truck_01_ammo_F;
//class B_Truck_01_cargo_F;
//class B_Truck_01_box_F;
//class B_Truck_01_Repair_F;

//class B_Truck_01_flatbed_F;
//class Turrets;
class BWA3_Multi_Fleck;
class BWA3_Multi_Tropen;
class B_Truck_01_transport_F;
class B_Truck_01_covered_F;

class B_GAF2_HEMMT_TROpen_base_Fleck: B_Truck_01_transport_F
{
scope = 0;
scopeCurator = 0;
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_HEMMT_TROpen_flk.jpg";
hiddenSelections[] = {"Camo1","Camo2","Camo3"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Grenadier_flk"};
};

class B_GAF2_HEMMT_TROpen_base_Tropen: B_Truck_01_transport_F
{
scope = 0;
scopeCurator = 0;
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_HEMMT_TROpen_trp.jpg";
hiddenSelections[] = {"Camo1","Camo2","Camo3"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa"};
};

class B_GAF2_HEMMT_TRCover_base_Fleck: B_Truck_01_covered_F
{
scope = 0;
scopeCurator = 0;
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_HEMMT_TRCover_flk.jpg";
hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_flk.paa","z\gaf2\addons\cars\data\truck_01_ext_02_flk.paa","z\gaf2\addons\cars\data\Truck_01_cargo_flk.paa","z\gaf2\addons\cars\data\Truck_01_cover_flk.paa"};
};

class B_GAF2_HEMMT_TRCover_base_Tropen: B_Truck_01_covered_F
{
scope = 0;
scopeCurator = 0;
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_HEMMT_TRCover_trp.jpg";
hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\truck_01_ext_01_trp.paa","z\gaf2\addons\cars\data\truck_01_ext_02_trp.paa","z\gaf2\addons\cars\data\Truck_01_cargo_trp.paa","z\gaf2\addons\cars\data\Truck_01_cover_trp.paa"};
};

class BWA3_Eagle_Import1_Fleck: BWA3_Eagle_Fleck
{ scope = 0;
  class Turrets;
};

class BWA3_Eagle_Import2_Fleck: BWA3_Eagle_Import1_Fleck
{ scope = 0;
  class Turrets: Turrets
  {
  class CargoTurret_01;
  };
};

class BWA3_Eagle_Import1_Tropen: BWA3_Eagle_Tropen
{ scope = 0;
  class Turrets;
};

class BWA3_Eagle_Import2_Tropen: BWA3_Eagle_Import1_Tropen
{ scope = 0;
  class Turrets: Turrets
  {
  class CargoTurret_01;
  };
};




