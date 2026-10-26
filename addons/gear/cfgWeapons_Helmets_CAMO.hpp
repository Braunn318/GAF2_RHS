	class H_HelmetB_camo;
//Helmets Olive
    class gaf2_BaVi_H_HelmetB_Solid_Olive: H_HelmetB
	{
		author="Seb";
		displayName="[OLIVE] Batlskin Viper";
		hiddenSelectionsTextures[]=
		{
			"z\gaf2\addons\gear\Headgear\data\equip1_Solid_Olive_co.paa"
		};
		picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_Solid_Olive_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class gaf2_BaVi_H_HelmetSpecB_Solid_Olive: H_HelmetSpecB
	{
		author="Seb";
		displayName="[OLIVE] Batlskin Viper Enhanced";
		hiddenSelectionsTextures[]=
		{
			"z\gaf2\addons\gear\Headgear\data\equip1_Solid_Olive_co.paa"
		};
		picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetSpecB_Solid_Olive_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
    class gaf2_BaVi_H_HelmetB_camo_Solid_Olive: H_HelmetB_camo
	{
		author="Seb";
		displayName="[OLIVE] Batlskin Viper Camo";
		hiddenSelectionsTextures[]=
		{
			"z\gaf2\addons\gear\Headgear\data\equip1_Solid_Olive_co.paa",
			"z\gaf2\addons\gear\Headgear\data\ghillie_2_Solid_Olive_ca.paa"
		};
		picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Olive_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
//Helmets Tan
class gaf2_BaVi_H_HelmetB_Solid_Tan: H_HelmetB
	{
		author="Seb";
		displayName="[TAN] Batlskin Viper";
		hiddenSelectionsTextures[]=
		{
			"z\gaf2\addons\gear\Headgear\data\equip1_Solid_Tan_co.paa"
		};
		picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class gaf2_BaVi_H_HelmetSpecB_Solid_Tan: H_HelmetSpecB
	{
		author="Seb";
		displayName="[TAN] Batlskin Viper Enhanced";
		hiddenSelectionsTextures[]=
		{
			"z\gaf2\addons\gear\Headgear\data\equip1_Solid_Tan_co.paa"
		};
		picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetSpecB_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
    class gaf2_BaVi_H_HelmetB_camo_Solid_Tan: H_HelmetB_camo
	{
		author="Seb";
		displayName="[TAN] Batlskin Viper Camo";
		hiddenSelectionsTextures[]=
		{
			"z\gaf2\addons\gear\Headgear\data\equip1_Solid_Tan_co.paa",
			"z\gaf2\addons\gear\Headgear\data\ghillie_2_Solid_Tan_ca.paa"
		};
		picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
//Opscore placeholder
/*
class rhsusf_opscore_fg;
class rhsusf_opscore_fg_pelt;
class rhsusf_opscore_paint;
class rhsusf_opscore_paint_pelt;
class rhsusf_opscore_ut;
class rhsusf_opscore_ut_pelt;
*/
class rhsusf_opscore_mc_cover;
class rhsusf_opscore_mc_cover_pelt;
//class rhsusf_opscore_mc_cover_pelt_nsw;

	class gaf2_helmet_opscore_flk: rhsusf_opscore_mc_cover
	{
		author="braun";
		displayName="[Flecktarn] Opscore Helmet";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","","","","z\gaf2\addons\gear\Headgear\data\fs_cover_flk_co.paa",""};
	//	picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
		class gaf2_helmet_opscore_pelt_flk: rhsusf_opscore_mc_cover_pelt
	{
		author="braun";
		displayName="[Flecktarn] Opscore Helmet Peltor";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","z\gaf2\addons\gear\Headgear\data\fs_cover_flk_co.paa",""};
	//	picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class gaf2_helmet_opscore_trp: rhsusf_opscore_mc_cover
	{
		author="braun";
		displayName="[Tropentarn] Opscore Helmet";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa","","","","z\gaf2\addons\gear\Headgear\data\fs_cover_trp_co.paa",""};
	//	picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
		class gaf2_helmet_opscore_pelt_trp: rhsusf_opscore_mc_cover_pelt
	{
		author="braun";
		displayName="[Tropentarn] Opscore Helmet Peltor";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","z\gaf2\addons\gear\Headgear\data\fs_cover_trp_co.paa",""};
//		picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};

	class gaf2_helmet_opscore_mlt: rhsusf_opscore_mc_cover
	{
		author="braun";
		displayName="[Multitarn] Opscore Helmet";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa","","","","z\gaf2\addons\gear\Headgear\data\fs_cover_mlt_co.paa",""};
	//	picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
		class gaf2_helmet_opscore_pelt_mlt: rhsusf_opscore_mc_cover_pelt
	{
		author="braun";
		displayName="[Multitarn] Opscore Helmet Peltor";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","","","z\gaf2\addons\gear\Headgear\data\fs_cover_mlt_co.paa",""};
	//	picture="\z\gaf2\addons\gear\Headgear\data\UI\icon_H_HelmetB_camo_Solid_Tan_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
