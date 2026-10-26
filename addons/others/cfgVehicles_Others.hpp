class B_Boat_Armed_01_minigun_F;
class B_Boat_Transport_01_F;
class B_T_Quadbike_01_F;
class B_Quadbike_01_F;
class B_UAV_01_F;
class BW_Euro_Hawk;
class RHS_M2StaticMG_D;
class RHS_M2StaticMG_MiniTripod_D;
class B_SDV_01_F;
class BWA3_MRS120_Fleck;
class B_Mortar_01_F;
class B_Radar_System_01_F;
class B_SAM_System_03_F;
class B_UGV_02_Science_F;
class B_UGV_02_Demining_F;
class B_UAV_06_medical_F;
class B_UAV_06_F;
class RHS_TOW_TriPod_WD;
class RHS_MK19_TriPod_D;
class RHS_Stinger_AA_pod_D;
//DRONES//
//Darter//
class B_GAF2_AR2_Darter_flk: B_UAV_01_F
{
  faction="B_GAF2_FLK";
  side=1;
};

class B_GAF2_AR2_Darter_trp: B_UAV_01_F
{
  faction="B_GAF2_TRP";
  side=1;
};

class B_GAF2_AR2_Darter_mlt: B_UAV_01_F
{
  faction="B_GAF2_MLT";
  side=1;
};

class B_GAF2_A6_trp: B_UAV_06_F
{
  faction="B_GAF2_TRP";
  side=1;
};
class B_GAF2_A6_flk: B_UAV_06_F
{
  faction="B_GAF2_FLK";
  side=1;
};
class B_GAF2_A6_mlt: B_UAV_06_F
{
  faction="B_GAF2_MLT";
  side=1;
};
//A-6 Pelican Medical//
class B_GAF2_A6_Med_flk: B_UAV_06_medical_F
{
  faction="B_GAF2_FLK";
  side=1;
};

class B_GAF2_A6_Med_trp: B_UAV_06_medical_F
{
  faction="B_GAF2_TRP";
  side=1;
};
class B_GAF2_A6_Med_mlt: B_UAV_06_medical_F
{
  faction="B_GAF2_MLT";
  side=1;
};
//UGV Contact Science//
class B_GAF2_UGV_Science_flk: B_UGV_02_Science_F
{
  faction="B_GAF2_FLK";
  side=1;
};

class B_GAF2_UGV_Science_trp: B_UGV_02_Science_F
{
  faction="B_GAF2_TRP";
  side=1;
};
class B_GAF2_UGV_Science_mlt: B_UGV_02_Science_F
{
  faction="B_GAF2_MLT";
  side=1;
};
//UGV Contact Demining//
class B_GAF2_UGV_Demine_flk: B_UGV_02_Demining_F
{
  faction="B_GAF2_FLK";
  side=1;
};

class B_GAF2_UGV_Demine_mlt: B_UGV_02_Demining_F
{
  faction="B_GAF2_MLT";
  side=1;
};
class B_GAF2_UGV_Demine_trp: B_UGV_02_Demining_F
{
  faction="B_GAF2_TRP";
  side=1;
};
//SAM SYSTEMS//
class B_GAF2_Radar_Sys_flk: B_Radar_System_01_F
{
  faction="B_GAF2_FLK";
  side=1;
};

class B_GAF2_SAM_Sys_flk: B_SAM_System_03_F
{
  faction="B_GAF2_FLK";
  side=1;
};

class B_GAF2_Radar_Sys_trp: B_Radar_System_01_F
{
  faction="B_GAF2_TRP";
  side=1;
};

class B_GAF2_SAM_Sys_trp: B_SAM_System_03_F
{
  faction="B_GAF2_TRP";
  side=1;
};

class B_GAF2_Radar_Sys_mlt: B_Radar_System_01_F
{
  faction="B_GAF2_MLT";
  side=1;
};

class B_GAF2_SAM_Sys_mlt: B_SAM_System_03_F
{
  faction="B_GAF2_MLT";
  side=1;
};
//Boats//

class B_GAF2_Speedboat_Minigun_flk: B_Boat_Armed_01_minigun_F
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="Speedboat Minigun";
  hiddenSelectionsTextures[]={"a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"};
  crew="B_GAF2_Rifleman2_flk";
  typicalCargo[]={"B_GAF2_Rifleman2_flk"};
};


class B_GAF2_Speedboat_Minigun_trp: B_Boat_Armed_01_minigun_F
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="Speedboat Minigun";
  hiddenSelectionsTextures[]={"a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_Speedboat_Minigun_mlt: B_Boat_Armed_01_minigun_F
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="Speedboat Minigun";
  hiddenSelectionsTextures[]={"a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

class B_GAF2_Assault_Boat_flk: B_Boat_Transport_01_F
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="Assault Boat";
  hiddenSelectionsTextures[]={"a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
  crew="B_GAF2_Rifleman2_flk";
  typicalCargo[]={"B_GAF2_Rifleman2_flk"};
};

class B_GAF2_Assault_Boat_trp: B_Boat_Transport_01_F
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="Assault Boat";
  hiddenSelectionsTextures[]={"a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_Assault_Boat_mlt: B_Boat_Transport_01_F
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="Assault Boat";
  hiddenSelectionsTextures[]={"a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

class B_GAF2_Quadbike_flk: B_T_Quadbike_01_F
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="Quadbike";
  hiddenSelectionsTextures[]={"a3\soft_f\quadbike_01\data\quadbike_01_co.paa","a3\soft_f\quadbike_01\data\quadbike_01_wheel_co.paa"};
  crew="B_GAF2_Rifleman2_flk";
  typicalCargo[]={"B_GAF2_Rifleman2_flk"};
};

class B_GAF2_Quadbike_trp: B_Quadbike_01_F
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="Quadbike";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_Quadbike_mlt: B_Quadbike_01_F
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="Quadbike";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

class B_GAF2_Eurohawk_flk: BW_Euro_Hawk
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="Eurohawk";
  crew="B_UAV_AI";
  typicalCargo[]={"B_UAV_AI"};
};

class B_GAF2_Eurohawk_trp: BW_Euro_Hawk
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="Eurohawk";
  crew="B_UAV_AI";
  typicalCargo[]={"B_UAV_AI"};
};

class B_GAF2_Eurohawk_mlt: BW_Euro_Hawk
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="Eurohawk";
  crew="B_UAV_AI";
  typicalCargo[]={"B_UAV_AI"};
};

class B_GAF2_M2_MG_flk: RHS_M2StaticMG_D
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="M2 Heavy MG";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_M2_MG_trp: RHS_M2StaticMG_D
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="M2 Heavy MG";
  hiddenSelectionsTextures[]={};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_M2_MG_mlt: RHS_M2StaticMG_D
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="M2 Heavy MG";
  hiddenSelectionsTextures[]={};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

class B_GAF2_M2_MG_Mini_flk: RHS_M2StaticMG_MiniTripod_D
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="M2 Heavy MG Tripod";
  hiddenSelectionsTextures[]={};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_M2_MG_Mini_trp: RHS_M2StaticMG_MiniTripod_D
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="M2 Heavy MG Tripod";
  hiddenSelectionsTextures[]={};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_M2_MG_Mini_mlt: RHS_M2StaticMG_MiniTripod_D
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="M2 Heavy MG Tripod";
  hiddenSelectionsTextures[]={};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

class B_GAF2_SDV_flk: B_SDV_01_F
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="SDV";
  hiddenSelectionsTextures[]={"a3\boat_f_beta\sdv_01\data\sdv_ext_co.paa"};
  crew="B_GAF2_DiverTL_flk";
  typicalCargo[]={"B_GAF2_Diver_flk"};
};

class B_GAF2_SDV_trp: B_SDV_01_F
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="SDV";
  hiddenSelectionsTextures[]={"a3\boat_f_beta\sdv_01\data\sdv_ext_co.paa"};
  crew="B_GAF2_DiverTL_trp";
  typicalCargo[]={"B_GAF2_Diver_trp"};
};

class B_GAF2_SDV_mlt: B_SDV_01_F
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="SDV";
  hiddenSelectionsTextures[]={"a3\boat_f_beta\sdv_01\data\sdv_ext_co.paa"};
  crew="B_GAF2_DiverTL_mlt";
  typicalCargo[]={"B_GAF2_DiverTL_mlt"};
};

class B_GAF2_Mortar_120MM_flk: BWA3_MRS120_Fleck
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="Mortar 120MM";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_Mortar_120MM_trp: BWA3_MRS120_Fleck
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="Mortar 120MM";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_Mortar_120MM_mlt: BWA3_MRS120_Fleck
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="Mortar 120MM";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
//B_Mortar_01_F//

class B_GAF2_M6_flk: B_Mortar_01_F
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="Mortar M6";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_M6_trp: B_Mortar_01_F
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="Mortar M6";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_M6_mlt: B_Mortar_01_F
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="Mortar M6";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

//RHS AT
class B_GAF2_TOW_flk: RHS_TOW_TriPod_WD
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="TOW MILAN";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_TOW_trp: RHS_TOW_TriPod_WD
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="TOW MILAN";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_TOW_mlt: RHS_TOW_TriPod_WD
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="TOW MILAN";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
//RHS GMG
class B_GAF2_Mk19_flk: RHS_MK19_TriPod_D
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="Mk19 (GMG)";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_Mk19_trp: RHS_MK19_TriPod_D
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="Mk19 (GMG)";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_Mk19_mlt: RHS_MK19_TriPod_D
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="Mk19 (GMG)";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
//RHS AA
class B_GAF2_FIM_flk: RHS_Stinger_AA_pod_D
{
  faction="B_GAF2_FLK";
  side=1;
  displayName="FIM Stinger (AA)";
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_FIM_trp: RHS_Stinger_AA_pod_D
{
  faction="B_GAF2_TRP";
  side=1;
  displayName="FIM Stinger (AA)";
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};
class B_GAF2_FIM_mlt: RHS_Stinger_AA_pod_D
{
  faction="B_GAF2_MLT";
  side=1;
  displayName="FIM Stinger (AA)";
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
