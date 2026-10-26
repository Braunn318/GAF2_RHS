class AH6_Littlebird_BW_Fleck;
class MH6_Littlebird_BW_Fleck;
//Helis Flecktarn//

	class B_GAF2_MH6_Littlebird_flk: MH6_Littlebird_BW_Fleck
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		hiddenSelectionsTextures[]={"\bw_retex_pack_choppers\textures\ah6_flecktarn.paa"};
		crew="B_GAF2_Helipilot_flk";
		typicalCargo[]={"B_GAF2_Helipilot_flk"};

	class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,6);
			MAG_XX(BWA3_DM25,4);
			MAG_XX(BWA3_200Rnd_556x45,10);
			MAG_XX(BWA3_120Rnd_762x51,10);
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

	class B_GAF2_AH6_Littlebird_flk: AH6_Littlebird_BW_Fleck
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "HelisVanilla";
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

    //Wildcats

	class B_GAF2_Wildcat_FLK_Bewaffnet_flk: AW159_BW_Fleck
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "HelisVanilla";
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
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	class B_GAF2_Wildcat_FLK_Unbewaffnet_flk: AW159_BW_Fleck_Unbewaffnet
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "HelisVanilla";
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
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

    class B_GAF2_Wildcat_Schwarz_Bewaffnet_flk: AW159_BW_Black
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "HelisVanilla";
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
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	class B_GAF2_Wildcat_Schwarz_Unbewaffnet_flk: AW159_BW_Black_Unbewaffnet
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "HelisVanilla";
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
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	
	class B_GAF2_Wildcat_Schwarz_Bewaffnet_trp: AW159_BW_Black
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "HelisVanilla";
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
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};
	
    class B_GAF2_Wildcat_Schwarz_Bewaffnet_mlt: B_GAF2_Wildcat_Schwarz_Bewaffnet_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_Wildcat_Schwarz_Unbewaffnet_trp: AW159_BW_Black_Unbewaffnet
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		hiddenSelectionsTextures[]={"\bw_retex_pack_choppers\textures\heli_light_03_base_bw_black_co.paa"};
		crew="B_GAF2_Helipilot_trp";
		typicalCargo[]={"B_GAF2_Helipilot_trp"};

	class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,6);
			MAG_XX(BWA3_DM25,4);
		};
		class TransportItems
		{
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	class B_GAF2_Wildcat_Schwarz_Unbewaffnet_mlt: B_GAF2_Wildcat_Schwarz_Unbewaffnet_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_Wildcat_Unbewaffnet_trp: AW159_BW_Trop_Unbewaffnet
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "HelisVanilla";
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
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	class B_GAF2_Wildcat_Unbewaffnet_mlt: B_GAF2_Wildcat_Unbewaffnet_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_Wildcat_trp: AW159_BW_Trop
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "HelisVanilla";
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
			ITEM_XX(FirstAidKit,6);
			ITEM_XX(ToolKit,1);
			ITEM_XX(B_Parachute,6);
		};
		class TransportWeapons
		{
			WEAP_XX(gaf2_HK416_Arco_Blk,2);
			WEAP_XX(BWA3_Vector,1);
		};

	};

	class B_GAF2_Wildcat_mlt: B_GAF2_Wildcat_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_MH6_Littlebird_trp: MH6_Littlebird_BW_Tropen
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Helipilot_trp";
		typicalCargo[]={"B_GAF2_Helipilot_trp"};

		class TransportMagazines
		{
			MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG,6);
			MAG_XX(BWA3_DM25,4);
			MAG_XX(BWA3_200Rnd_556x45,10);
			MAG_XX(BWA3_120Rnd_762x51,10);
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

	class B_GAF2_MH6_Littlebird_mlt: B_GAF2_MH6_Littlebird_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_AH6_Littlebird_trp: AH6_Littlebird_BW_Tropen
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};

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

	class B_GAF2_AH6_Littlebird_mlt: B_GAF2_AH6_Littlebird_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "HelisVanilla";
		editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};



