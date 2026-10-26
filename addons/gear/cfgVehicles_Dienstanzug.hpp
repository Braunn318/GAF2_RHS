	class B_Soldier_base_F;
	class gaf2_Dienstanzug: B_Soldier_base_F
	{
		author = "braun";
		scope = 1;
		faction = "B_GAF2_flk";
		identityTypes[] = {"LanguageENG_F","Head_EURO"};
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		vehicleClass = "Lucian_VehClass_Men_Dienstanzug";
		modelSides[] = {1,2,3,4,5,6,7};
		uniformClass = "gaf2_Unif_P_Officer";
		displayName = "[UNIT] Officer Parade Uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"z\gaf2\addons\gear\Uniforms\data\Dienstanzug.paa"};
		hiddenSelectionsMaterials[] = {"z\gaf2\addons\gear\Uniforms\data\dienst.rvmat"};
	};
