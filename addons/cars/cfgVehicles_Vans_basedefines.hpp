//Vans White
class B_G_Van_02_vehicle_F;
class B_G_Van_02_transport_F;
class B_GEN_Van_02_transport_F;
class B_GEN_Van_02_vehicle_F;

class B_GAF2_VAN_base_Transport_flk: B_G_Van_02_transport_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Transport_trp.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Transport (White)";
  class EventHandlers
{
init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
};
class textureSources
{
// This texture source will be available for every defined factions
class whiteBW
{
// Display name of the texture
displayName = "White BW";
// Author of the texture
author = "braunn";
// Paths to the texture files, in the same order as the hidden selections
textures[] = { "z\gaf2\addons\cars\data\van_body_white_bw_transport.paa" };
// This source should be available for the following factions
factions[] =
  {
  "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
  };
};
};
  textures[] = { "z\gaf2\addons\cars\data\van_body_white_bw_transport.paa"};
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_bw_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  textureList[]=
  {
    "whiteBW",
    1
  };
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_Transport_trp: B_GAF2_VAN_base_Transport_flk
{
faction="B_GAF2_TRP";
side=1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Transport_trp.jpg";
scope = 0;
scopeCurator = 0;
scopeArsenal = 1;
forceInGarage = 1;
displayName="BW Van Transport (White)";
textures[] = { "z\gaf2\addons\cars\data\van_body_white_bw_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_bw_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
crew="B_GAF2_Rifleman_trp";
typicalCargo[]={"B_GAF2_Rifleman_trp"};
};
/*
class B_GAF2_VAN_base_Transport_mlt: B_GAF2_VAN_base_Transport_flk
{
faction="B_GAF2_MLT";
side=1;
editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
forceInGarage = 1;
displayName="BW Van Transport (White)";
textures[] = { "z\gaf2\addons\cars\data\van_body_white_bw_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_bw_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
crew="B_GAF2_Rifleman_mlt";
typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
*/
class B_GAF2_VAN_base_Cargo_flk: B_G_Van_02_vehicle_F
{
  faction="B_GAF2_FLK";
  side=1;
   editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Van_Cargo_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo (White)";
  textures[] = { "z\gaf2\addons\cars\data\van_body_white_bw_cargo.paa"};
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class whiteBW
    {
      // Display name of the texture
      displayName = "White BW";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\van_body_white_bw_cargo.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_bw_cargo","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_Cargo_trp: B_GAF2_VAN_base_Cargo_flk
{
  faction="B_GAF2_TRP";
  side=1;
   editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Van_Cargo_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo (White)";
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_bw_cargo","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};

};


class B_GAF2_VAN_base_Cargo_mlt: B_GAF2_VAN_base_Cargo_flk
{
  faction="B_GAF2_MLT";
  side=1;
   editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Van_Cargo_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo (White)";
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_bw_cargo","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};

};
//Vans greenBW

class B_GAF2_VAN_base_Grn_Transport_flk: B_G_Van_02_transport_F
{
  faction="B_GAF2_FLK";
  side=1;
   editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Grn_Transport_trp.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Transport (Green)";
  class EventHandlers
{
// (_this select 0): the vehicle
// """" Random texture source (pick one from the property textureList[])
// []: randomize the animation sources (accordingly to the property animationList[])
// false: Don't change the mass even if an animation source has a defined mass
init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
};
class textureSources
{
// This texture source will be available for every defined factions
class greenBW
{
// Display name of the texture
displayName = "Green BW";
// Author of the texture
author = "braunn";
// Paths to the texture files, in the same order as the hidden selections
textures[] = { "z\gaf2\addons\cars\data\van_body_green_bw_transport.paa" };
// This source should be available for the following factions
factions[] =
  {
  "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
  };
};
};
  textures[] = { "z\gaf2\addons\cars\data\van_body_green_bw_transport.paa"};
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_bw_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  textureList[]=
  {
    "greenBW",
    1
  };
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_Grn_Transport_trp: B_GAF2_VAN_base_Grn_Transport_flk
{
faction="B_GAF2_TRP";
side=1;
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Grn_Transport_trp.jpg";
scope = 0;
scopeCurator = 0;
scopeArsenal = 1;
forceInGarage = 1;
displayName="BW Van Transport (Green)";
textures[] = { "z\gaf2\addons\cars\data\van_body_green_bw_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_bw_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
crew="B_GAF2_Rifleman_trp";
typicalCargo[]={"B_GAF2_Rifleman_trp"};
};
/*
class B_GAF2_VAN_base_Grn_Transport_mlt: B_GAF2_VAN_base_Grn_Transport_flk
{
faction="B_GAF2_MLT";
side=1;
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Grn_Transport_trp.jpg";
scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
forceInGarage = 1;
displayName="BW Van Transport (Green)";
textures[] = { "z\gaf2\addons\cars\data\van_body_green_bw_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_bw_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
crew="B_GAF2_Rifleman_mlt";
typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
*/
class B_GAF2_VAN_base_Grn_Cargo_flk: B_G_Van_02_vehicle_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Van_Grn_Cargo_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo (Green)";
  textures[] = { "z\gaf2\addons\cars\data\van_body_green_bw_cargo.paa"};
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class greenBW
    {
      // Display name of the texture
      displayName = "Green BW";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\van_body_green_bw_cargo.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_bw_cargo","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_Grn_Cargo_trp: B_GAF2_VAN_base_Grn_Cargo_flk
{
  faction="B_GAF2_TRP";
  side=1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Van_Grn_Cargo_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo (Green)";
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_bw_cargo","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};

};

/*
class B_GAF2_VAN_base_Grn_Cargo_mlt: B_GAF2_VAN_base_Grn_Cargo_flk
{
  faction="B_GAF2_MLT";
  side=1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Van_Grn_Cargo_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo (Green)";
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_bw_cargo","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_CO.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};

};
*/
//MP VANS White
class B_GAF2_VAN_base_TransportMP_flk: B_GEN_Van_02_transport_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_TransportMP_trp.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Transport MP (White)";
  class EventHandlers
{
// (_this select 0): the vehicle
// """" Random texture source (pick one from the property textureList[])
// []: randomize the animation sources (accordingly to the property animationList[])
// false: Don't change the mass even if an animation source has a defined mass
init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
};
class textureSources
{
// This texture source will be available for every defined factions
class whiteBW
{
// Display name of the texture
displayName = "White BW-MP";
// Author of the texture
author = "braunn";
// Paths to the texture files, in the same order as the hidden selections
textures[] = { "z\gaf2\addons\cars\data\van_body_white_MP_transport.paa" };
// This source should be available for the following factions
factions[] =
  {
  "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
  };
};
};
  textures[] = { "z\gaf2\addons\cars\data\van_body_white_MP_transport.paa"};
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_MP_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  textureList[]=
  {
    "whiteBW",
    1
  };
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_TransportMP_trp: B_GAF2_VAN_base_TransportMP_flk
{
faction="B_GAF2_TRP";
side=1;
editorSubcategory = "MyMP";
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_TransportMP_trp.jpg";
scope = 0;
scopeCurator = 0;
scopeArsenal = 1;
forceInGarage = 1;
textures[] = { "z\gaf2\addons\cars\data\van_body_white_MP_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_MP_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
crew="B_GAF2_Rifleman_trp";
typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

class B_GAF2_VAN_base_TransportMP_mlt: B_GAF2_VAN_base_TransportMP_flk
{
faction="B_GAF2_MLT";
side=1;
editorSubcategory = "MyMP";
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_TransportMP_trp.jpg";
scope = 0;
scopeCurator = 0;
scopeArsenal = 1;
forceInGarage = 1;
textures[] = { "z\gaf2\addons\cars\data\van_body_white_MP_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_MP_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
crew="B_GAF2_Rifleman_mlt";
typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

class B_GAF2_VAN_base_CargoMP_flk: B_GEN_Van_02_vehicle_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_CargoMP_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo MP (White)";
  textures[] = { "z\gaf2\addons\cars\data\van_body_white_MP_cargo.paa"};
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class whiteBW
    {
      // Display name of the texture
      displayName = "White BW-MP";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\van_body_white_MP_cargo.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_MP_cargo.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_CargoMP_trp: B_GAF2_VAN_base_CargoMP_flk
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_CargoMP_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_MP_cargo.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};

};


class B_GAF2_VAN_base_CargoMP_mlt: B_GAF2_VAN_base_CargoMP_flk
{
  faction="B_GAF2_MLT";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_CargoMP_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_white_MP_cargo.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};

};

//MP Green
class B_GAF2_VAN_base_Grn_TransportMP_flk: B_GEN_Van_02_transport_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Grn_TransportMP_trp.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Transport MP (Green)";
  class EventHandlers
{
// (_this select 0): the vehicle
// """" Random texture source (pick one from the property textureList[])
// []: randomize the animation sources (accordingly to the property animationList[])
// false: Don't change the mass even if an animation source has a defined mass
init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
};
class textureSources
{
// This texture source will be available for every defined factions
class greenBW
{
// Display name of the texture
displayName = "Green BW-MP";
// Author of the texture
author = "braunn";
// Paths to the texture files, in the same order as the hidden selections
textures[] = { "z\gaf2\addons\cars\data\van_body_green_MP_transport.paa" };
// This source should be available for the following factions
factions[] =
  {
  "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
  };
};
};
  textures[] = { "z\gaf2\addons\cars\data\van_body_green_MP_transport.paa"};
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_MP_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  textureList[]=
  {
    "greenBW",
    1
  };
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_Grn_TransportMP_trp: B_GAF2_VAN_base_Grn_TransportMP_flk
{
faction="B_GAF2_TRP";
side=1;
editorSubcategory = "MyMP";
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Grn_TransportMP_trp.jpg";
scope = 0;
scopeCurator = 0;
scopeArsenal = 1;
forceInGarage = 1;
textures[] = { "z\gaf2\addons\cars\data\van_body_green_MP_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_MP_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
crew="B_GAF2_Rifleman_trp";
typicalCargo[]={"B_GAF2_Rifleman_trp"};
};
/*
class B_GAF2_VAN_base_Grn_TransportMP_mlt: B_GAF2_VAN_base_Grn_TransportMP_flk
{
faction="B_GAF2_MLT";
side=1;
editorSubcategory = "MyMP";
editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_base_Grn_TransportMP_trp.jpg";
scope = 2;
scopeCurator = 2;
scopeArsenal = 2;
forceInGarage = 1;
textures[] = { "z\gaf2\addons\cars\data\van_body_green_MP_transport.paa"};
hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_MP_transport.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
crew="B_GAF2_Rifleman_mlt";
typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
*/
class B_GAF2_VAN_base_Grn_CargoMP_flk: B_GEN_Van_02_vehicle_F
{
  faction="B_GAF2_FLK";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_Grn_CargoMP_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  displayName="BW Van Cargo MP (Green)";
  textures[] = { "z\gaf2\addons\cars\data\van_body_green_MP_cargo.paa"};
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class greenBW
    {
      // Display name of the texture
      displayName = "Green BW-MP";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\van_body_green_MP_cargo.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_MP_cargo.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};

};

class B_GAF2_VAN_base_Grn_CargoMP_trp: B_GAF2_VAN_base_Grn_CargoMP_flk
{
  faction="B_GAF2_TRP";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_Grn_CargoMP_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_MP_cargo.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};

};


class B_GAF2_VAN_base_Grn_CargoMP_mlt: B_GAF2_VAN_base_Grn_CargoMP_flk
{
  faction="B_GAF2_MLT";
  side=1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_VAN_Grn_CargoMP_flk.jpg";
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  forceInGarage = 1;
  hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\van_body_green_MP_cargo.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};

};
//Offroads
class C_Offroad_01_F;
class B_GEN_Offroad_01_gen_F;

class B_GAF2_Offroad_base_flk: C_Offroad_01_F
{
  faction="B_GAF2_FLK";
  side=1;
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Offroad_Grn_flk.jpg";
  displayName="Offroad (Green)";
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class OffBwGrn
    {
      // Display name of the texture
      displayName = "Green";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\off_BW_GRN.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\off_BW_GRN.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};

class B_GAF2_Offroad_base_mlt: B_GAF2_Offroad_base_flk
{
  faction="B_GAF2_MLT";
  side=1;
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Offroad_Grn_flk.jpg";
  displayName="Offroad (Green)";
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\off_BW_GRN.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};

class B_GAF2_Offroad_base_trp: C_Offroad_01_F
{
  faction="B_GAF2_TRP";
  side=1;
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Offroad_Des_flk.jpg";
  displayName="Offroad (Sand)";
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class OffBwTrp
    {
      // Display name of the texture
      displayName = "Sand";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\off_BW_TRP.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\off_BW_TRP.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"};
  crew="B_GAF2_Rifleman2_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};

//MP Offroads
class B_GAF2_Offroad_baseMP_flk: B_GEN_Offroad_01_gen_F
{
  faction="B_GAF2_FLK";
  side=1;
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Offroad_MP_grn_flk.jpg";
  displayName="Offroad MP (Green)";
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class OffBwMpGrn
    {
      // Display name of the texture
      displayName = "Green MP";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\off_BWMP_GRN.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\off_BWMP_GRN.paa","\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa"};
  crew="B_GAF2_Rifleman_flk";
  typicalCargo[]={"B_GAF2_Rifleman_flk"};
};
/*
class B_GAF2_Offroad_baseMP_mlt: B_GAF2_Offroad_baseMP_flk
{
  faction="B_GAF2_MLT";
  side=1;
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Offroad_MP_grn_flk.jpg";
  displayName="Offroad MP (Green)";
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\off_BWMP_GRN.paa","\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa"};
  crew="B_GAF2_Rifleman_mlt";
  typicalCargo[]={"B_GAF2_Rifleman_mlt"};
};
*/
class B_GAF2_Offroad_baseMP_trp: B_GEN_Offroad_01_gen_F
{
  faction="B_GAF2_TRP";
  side=1;
  scope = 0;
  scopeCurator = 0;
  scopeArsenal = 1;
  editorSubcategory = "MyMP";
  editorPreview = "z\gaf2\addons\cars\data\UI\B_GAF2_Offroad_MP_snd_flk.jpg";
  displayName="Offroad MP (Sand)";
  class EventHandlers
  {
    // (_this select 0): the vehicle
    // """" Random texture source (pick one from the property textureList[])
    // []: randomize the animation sources (accordingly to the property animationList[])
    // false: Don't change the mass even if an animation source has a defined mass
    init = "if (local (_this select 0)) then { [(_this select 0), """", [], true] call BIS_fnc_initVehicle; };";
  };
  class textureSources
  {
    // This texture source will be available for every defined factions
    class OffBwMpTrp
    {
      // Display name of the texture
      displayName = "SAND MP";
      // Author of the texture
      author = "braunn";
      // Paths to the texture files, in the same order as the hidden selections
      textures[] = { "z\gaf2\addons\cars\data\off_BWMP_TRP.paa" };
      // This source should be available for the following factions
      factions[] =
        {
        "B_GAF2_FLK", "B_GAF2_TRP", "B_GAF2_MLT", "I_GAF2_FLK", "I_GAF2_TRP", "I_GAF2_TRP", "O_GAF2_FLK", "O_GAF2_TRP", "O_GAF2_MLT"	// Side Blufor
        };
    };
  };
  hiddenSelectionsTextures[] = {"z\gaf2\addons\cars\data\off_BWMP_TRP.paa","\A3\Soft_F_Exp\Offroad_01\Data\Offroad_01_ext_gen_CO.paa"};
  crew="B_GAF2_Rifleman_trp";
  typicalCargo[]={"B_GAF2_Rifleman_trp"};
};
