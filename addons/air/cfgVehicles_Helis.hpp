class B_Plane_CAS_01_dynamicLoadout_F;
class B_Plane_Fighter_01_F;
class BWA3_NH90_TTH_Fleck;
class BWA3_NH90_TTH_M3M_Fleck;
class AW159_BW_Fleck;
class AW159_BW_Fleck_Unbewaffnet;
class BWA3_Tiger;
class BWA3_Tiger_RMK;
class AW159_BW_Black;
class AW159_BW_Black_Unbewaffnet;
class AH6_Littlebird_BW_Tropen;
class MH6_Littlebird_BW_Tropen;
class AW159_BW_Trop;
class AW159_BW_Trop_Unbewaffnet;
class RHS_C130J;
class RHS_C130J_Cargo;
class RHS_CH_47F;
class RHS_CH_47F_10_cargo;
class RHS_CH_47F_light;

//Chinooks
	class B_GAF2_CH47F_base_flk: RHS_CH_47F
	{
		faction="B_GAF2_FLK";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

	class B_GAF2_CH47F_base_mlt: RHS_CH_47F
	{
		faction="B_GAF2_MLT";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};

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

	class B_GAF2_CH47F_base_trp: RHS_CH_47F
	{
		faction="B_GAF2_TRP";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
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
	//Chinooks cargo
	class B_GAF2_CH47F_base_C_flk: RHS_CH_47F_10_cargo
	{
		faction="B_GAF2_FLK";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

	class B_GAF2_CH47F_base_C_mlt: RHS_CH_47F_10_cargo
	{
		faction="B_GAF2_MLT";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};

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

	class B_GAF2_CH47F_base_C_trp: RHS_CH_47F_10_cargo
	{
		faction="B_GAF2_TRP";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
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

	class B_GAF2_CH47F_base_DES_trp: RHS_CH_47F_light
	{
		faction="B_GAF2_TRP";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

	class B_GAF2_CH47F_base_DES_mlt: RHS_CH_47F_light
	{
		faction="B_GAF2_MLT";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa","z\gaf2\addons\air\data\ch47f_nalepky_ca.paa","\rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"};
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};

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

		//NH 90 Fleck
	class B_GAF2_NH90_TTH_flk: BWA3_NH90_TTH_Fleck
	{
		faction="B_GAF2_FLK";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

	class B_GAF2_NH90_TTH_M3M_flk: BWA3_NH90_TTH_M3M_Fleck
	{
		faction="B_GAF2_FLK";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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
	//NH 90 Trop and Multi
	class B_GAF2_NH90_TTH_trp: B_GAF2_NH90_TTH_flk
	{
		faction="B_GAF2_TRP";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

	class B_GAF2_NH90_TTH_mlt: B_GAF2_NH90_TTH_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_NH90_TTH_M3M_trp: B_GAF2_NH90_TTH_M3M_flk
	{
		faction="B_GAF2_TRP";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
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

	class B_GAF2_NH90_TTH_M3M_mlt: B_GAF2_NH90_TTH_M3M_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	
	class B_GAF2_Tiger_flk: BWA3_Tiger
	{
		faction="B_GAF2_FLK";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Helipilot_flk";
		typicalCargo[]={"B_GAF2_Helipilot_flk"};

	class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,6);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,2);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,2);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	class B_GAF2_Tiger_RMK_flk: BWA3_Tiger_RMK
	{
		faction="B_GAF2_FLK";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Helipilot_flk";
		typicalCargo[]={"B_GAF2_Helipilot_flk"};

	class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,6);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,2);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,2);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	
	//Tiger Tropentarn and Multi//


	class B_GAF2_Tiger_trp: BWA3_Tiger
	{
		faction="B_GAF2_TRP";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Helipilot_trp";
		typicalCargo[]={"B_GAF2_Helipilot_trp"};

		class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,6);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,2);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,2);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};
	};

	class B_GAF2_Tiger_mlt: B_GAF2_Tiger_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_Tiger_RMK_trp: BWA3_Tiger_RMK
	{
		faction="B_GAF2_TRP";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Helipilot_trp";
		typicalCargo[]={"B_GAF2_Helipilot_trp"};

	class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,6);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,2);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,2);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	class B_GAF2_Tiger_RMK_mlt: B_GAF2_Tiger_RMK_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

  
