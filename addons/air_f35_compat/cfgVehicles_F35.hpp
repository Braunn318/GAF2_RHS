class F_35C;

//flktarn
class B_GAF2_F35_flk: F_35C
{
  faction="B_GAF2_FLK";
  side=1;
  crew="B_GAF2_Jetpilot_flk";
  typicalCargo[]={"B_GAF2_Jetpilot_flk"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\air_f35_compat\data\F35_LW.paa","F35C\data\F_35C_ext_2_co.paa","F35C\data\F_35C_ext_3_co.paa","",""};

};

//Multitarn
class B_GAF2_F35_mlt: B_GAF2_F35_flk
{
  faction="B_GAF2_MLT";
  side=1;
  crew="B_GAF2_Jetpilot_mlt";
  typicalCargo[]={"B_GAF2_Jetpilot_mlt"};

};

//Tropentarn
class B_GAF2_F35_trp: B_GAF2_F35_flk
{
  faction="B_GAF2_TRP";
  side=1;
  crew="B_GAF2_Jetpilot_trp";
  typicalCargo[]={"B_GAF2_Jetpilot_trp"};

};
