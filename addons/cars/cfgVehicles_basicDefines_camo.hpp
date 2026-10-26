
class gaf2_base_Eagle_IV_Fleck: BWA3_Eagle_Import2_Fleck
{ 
  faction="B_GAF2_FLK";
  side=1;
scope = 0;
  scopeCurator = 0;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  class Turrets: Turrets {
      class CargoTurret_01: CargoTurret_01 {
          gunnerType = QUOTE(B_GAF2_MachineGunner_MG5_##CAMO);
      };
  };
};

class gaf2_base_Eagle_IV_Tropen: BWA3_Eagle_Import2_Tropen
{ 
  faction="B_GAF2_TRP";
  side=1;
  editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
  class Turrets: Turrets {
      class CargoTurret_01: CargoTurret_01 {
          gunnerType = QUOTE(B_GAF2_MachineGunner_MG5_##CAMO);
      };
  };
};

