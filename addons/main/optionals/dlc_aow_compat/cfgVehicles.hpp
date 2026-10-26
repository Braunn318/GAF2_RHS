class Coffin_02_flag_base_F;

class Coffin_02_Flag_F: Coffin_02_flag_base_F
{
	author = "Bohemia Interactive";
	editorPreview = "\A3\EditorPreviews_F_AoW\Data\CfgVehicles\Coffin_02_Flag_F.jpg";
	_generalMacro = "Coffin_02_Flag_F";
	scope = 2;
	scopeCurator = 2;
	displayName = "Military Coffin (Flag)";
	hiddenSelectionsTextures[] = {"a3\Props_F_AoW\Items\Decorative\Data\Military_Coffin_01_CO.paa","a3\Props_F_AoW\Items\Decorative\Data\coffin_02_decals_ca.paa","a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_US_CO.paa"};
  class Attributes
  {
    class FlagTypeList
    {
      displayName = "Select flag type";
      property = "FlagTypeList";
      control = "Combo";
      expression = "_this setObjectTextureGlobal [2,_value];";
      defaultValue = "'a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_US_CO.paa'";
      typeName = "STRING";
      class Values
      {
        class UnitedStates
        {
          name = "USA";
          value = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_US_CO.paa";
          picture = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_US_CO.paa";
        };
        class UK
        {
          name = "UK";
          value = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_UK_CO.paa";
          picture = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_UK_CO.paa";
        };
        class Altis
        {
          name = "Altis";
          value = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_Altis_CO.paa";
          picture = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_Altis_CO.paa";
        };
        class HorizonIslands
        {
          name = "Tanoa";
          value = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_Islands_CO.paa";
          picture = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_Islands_CO.paa";
        };
        class Livonia
        {
          name = "Livonia";
          value = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_Livonia_CO.paa";
          picture = "a3\Props_F_AoW\Items\Decorative\Data\Coffin_Flag_02_Livonia_CO.paa";
        };
        class Germany
        {
          name = "Germany";
          value = "z\gaf2\addons\main\data\Coffin_Flag_02_DE_CO.paa";
          picture = "z\gaf2\addons\main\data\Coffin_Flag_02_DE_CO.paa";
        };
      };
    };
  };
};
