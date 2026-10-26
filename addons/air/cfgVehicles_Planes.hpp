//Planes//

	class B_GAF2_A10_Warthog_flk: B_Plane_CAS_01_dynamicLoadout_F
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "PlanesVanilla";
		displayName="A10 Warthog";
		hiddenSelectionsTextures[]={"a3\air_f_epc\plane_cas_01\data\plane_cas_01_ext01_co.paa","a3\air_f_epc\plane_cas_01\data\plane_cas_01_ext02_co.paa"};
		crew="B_GAF2_Jetpilot_flk";
		typicalCargo[]={"B_GAF2_Jetpilot_flk"};
	};

	class B_GAF2_A10_Warthog_trp: B_Plane_CAS_01_dynamicLoadout_F
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "PlanesVanilla";
		displayName="A10 Warthog";
		hiddenSelectionsTextures[]={"a3\air_f_epc\plane_cas_01\data\plane_cas_01_ext01_co.paa","a3\air_f_epc\plane_cas_01\data\plane_cas_01_ext02_co.paa"};
		crew="B_GAF2_Jetpilot_trp";
		typicalCargo[]={"B_GAF2_Jetpilot_trp"};
	};

	class B_GAF2_A10_Warthog_mlt: B_GAF2_A10_Warthog_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "PlanesVanilla";
		displayName="A10 Warthog";
		hiddenSelectionsTextures[]={"a3\air_f_epc\plane_cas_01\data\plane_cas_01_ext01_co.paa","a3\air_f_epc\plane_cas_01\data\plane_cas_01_ext02_co.paa"};
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_F22_flk: B_Plane_Fighter_01_F
	{
		faction="B_GAF2_FLK";
		side=1;
		editorSubcategory = "PlanesVanilla";
		hiddenSelectionsTextures[] = {"z\gaf2\addons\air\data\Fighter_01_fuselage_01_co.paa","z\gaf2\addons\air\data\Fighter_01_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa"};
		crew="B_GAF2_Jetpilot_flk";
		typicalCargo[]={"B_GAF2_Jetpilot_flk"};
	};

	class B_GAF2_F22_trp: B_Plane_Fighter_01_F
	{
		faction="B_GAF2_TRP";
		side=1;
		editorSubcategory = "PlanesVanilla";
		hiddenSelectionsTextures[] = {"z\gaf2\addons\air\data\Fighter_01_fuselage_01_co.paa","z\gaf2\addons\air\data\Fighter_01_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa"};
		crew="B_GAF2_Jetpilot_trp";
		typicalCargo[]={"B_GAF2_Jetpilot_trp"};
	};
	class B_GAF2_F22_mlt: B_GAF2_F22_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		editorSubcategory = "PlanesVanilla";
		hiddenSelectionsTextures[] = {"z\gaf2\addons\air\data\Fighter_01_fuselage_01_co.paa","z\gaf2\addons\air\data\Fighter_01_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa"};
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	//RHS B130j
	class B_GAF2_C130J_flk: RHS_C130J
	{
		faction="B_GAF2_FLK";
		side=1;
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

	class B_GAF2_C130J_trp: RHS_C130J
	{
	faction="B_GAF2_TRP";
	side=1;
	hiddenSelectionsTextures[]={"z\gaf2\addons\air\data\c130j_body_lw.paa","z\gaf2\addons\air\data\c130j_wings_lw.paa"};
	crew="B_GAF2_Jetpilot_trp";
	typicalCargo[]={"B_GAF2_Jetpilot_trp"};

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

	class B_GAF2_C130J_mlt: B_GAF2_C130J_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		hiddenSelectionsTextures[]={"z\gaf2\addons\air\data\c130j_body_lw.paa","z\gaf2\addons\air\data\c130j_wings_lw.paa"};
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};

	class B_GAF2_C130JCargo_flk: RHS_C130J_Cargo
	{
		faction="B_GAF2_FLK";
		side=1;
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

	class B_GAF2_C130JCargo_trp: RHS_C130J_Cargo
	{
		faction="B_GAF2_TRP";
		side=1;
		hiddenSelectionsTextures[]={"z\gaf2\addons\air\data\c130j_body_lw.paa","z\gaf2\addons\air\data\c130j_wings_lw.paa"};
		crew="B_GAF2_Jetpilot_trp";
		typicalCargo[]={"B_GAF2_Jetpilot_trp"};

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

	class B_GAF2_C130JCargo_mlt: B_GAF2_C130JCargo_trp
	{
		faction="B_GAF2_MLT";
		side=1;
		hiddenSelectionsTextures[]={"z\gaf2\addons\air\data\c130j_body_lw.paa","z\gaf2\addons\air\data\c130j_wings_lw.paa"};
		crew="B_GAF2_Jetpilot_mlt";
		typicalCargo[]={"B_GAF2_Jetpilot_mlt"};
	};
