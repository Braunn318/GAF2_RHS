class AH6_Littlebird_BW_Fleck;
class MH6_Littlebird_BW_Fleck;
class AH6_Littlebird_BW_Tropen;
class MH6_Littlebird_BW_Tropen;
class RHS_A10;
class rhsusf_f22;
class RHS_C130J;
class RHS_C130J_Cargo;
class BWA3_NH90_TTH_Fleck;
class BWA3_NH90_TTH_Tropen;
class BWA3_NH90_TTH_M3M_Fleck;
class BWA3_NH90_TTH_M3M_Tropen;
class BWA3_Tiger_RMK;
class BWA3_Tiger;
class RHS_CH_47F;
class RHS_CH_47F_10_cargo;
class RHS_CH_47F_light;
//RHS Transport planes
	class B_GAF2_C130J_base_flk: RHS_C130J
	{
		faction="B_GAF2_FLK";
		side=1;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 1;
		editorPreview = "z\gaf2\addons\air\data\UI\B_GAF2_C130J_flk.jpg";
		hiddenSelectionsTextures[]={"z\gaf2\addons\air\data\c130j_body_lw.paa","z\gaf2\addons\air\data\c130j_wings_lw.paa"};
		crew="B_GAF2_Jetpilot_flk";
		typicalCargo[]={"B_GAF2_Jetpilot_flk"};

		class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,30);
			MAG_XX(BWA3_DM25,10);
			MAG_XX(BWA3_200Rnd_556x45,10);
			MAG_XX(BWA3_120Rnd_762x51,10);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,20);
			ITEM_XX(ToolKit,1);
			ITEM_XX(MediKit,4);
			ITEM_XX(B_Parachute,14);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,2);
		};

	};
		class B_GAF2_C130JCargo_base_flk: RHS_C130J_Cargo
	{
		faction="B_GAF2_FLK";
		side=1;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 1;
		editorPreview = "z\gaf2\addons\air\data\UI\B_GAF2_C130J_flk.jpg";
		hiddenSelectionsTextures[]={"z\gaf2\addons\air\data\c130j_body_lw.paa","z\gaf2\addons\air\data\c130j_wings_lw.paa"};
		crew="B_GAF2_Jetpilot_flk";
		typicalCargo[]={"B_GAF2_Jetpilot_flk"};

		class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,30);
			MAG_XX(BWA3_DM25,10);
			MAG_XX(BWA3_200Rnd_556x45,10);
			MAG_XX(BWA3_120Rnd_762x51,10);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,20);
			ITEM_XX(ToolKit,1);
			ITEM_XX(MediKit,4);
			ITEM_XX(B_Parachute,14);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,2);
		};

	};
//Chinooks
	class B_GAF2_CH47F_base_flk: RHS_CH_47F
	{
		faction="B_GAF2_FLK";
		side=1;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 1;
		editorPreview = "z\gaf2\addons\air\data\UI\B_GAF2_CH47F_flk.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
		crew="B_GAF2_Helipilot_flk";
		typicalCargo[]={"B_GAF2_Helipilot_flk"};

	class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,16);
			ITEM_XX(ToolKit,1);
			ITEM_XX(MediKit,1);
			ITEM_XX(B_Parachute,16);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	//Chinooks cargo
	class B_GAF2_CH47F_base_C_flk: RHS_CH_47F_10_cargo
	{
		faction="B_GAF2_FLK";
		side=1;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 1;
		editorPreview = "z\gaf2\addons\air\data\UI\B_GAF2_CH47F_flk.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
		crew="B_GAF2_Helipilot_flk";
		typicalCargo[]={"B_GAF2_Helipilot_flk"};

	class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,16);
			ITEM_XX(ToolKit,1);
			ITEM_XX(MediKit,1);
			ITEM_XX(B_Parachute,16);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};
//Chinooks desert
	class B_GAF2_CH47F_base_DES_trp: RHS_CH_47F_light
	{
		faction="B_GAF2_TRP";
		side=1;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 1;
		editorPreview = "z\gaf2\addons\air\data\UI\B_GAF2_CH47F_DES_trp.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"};
		crew="B_GAF2_Helipilot_trp";
		typicalCargo[]={"B_GAF2_Helipilot_trp"};

		class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,10);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,16);
			ITEM_XX(ToolKit,1);
			ITEM_XX(MediKit,1);
			ITEM_XX(B_Parachute,16);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};



