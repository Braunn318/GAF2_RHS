//hiddenSelectionsTextures[] = {"nia_wp_hk416\tex\toadie_416\416_upper_co.paa","nia_wp_hk416\tex\toadie_416\416_lower_co.paa","nia_wp_hk416\tex\toadie_416\416_barrel_co.paa","nia_wp_hk416\tex\toadie_416\416_common_co.paa","nia_wp_hk416\tex\toadie_416\416_stocks_co.paa","nia_wp_hk416\tex\toadie_416\geissele_smr_co.paa","nia_wp_hk416\tex\toadie_416\vltor_imod_tan_co.paa","nia_wp_hk416\tex\toadie_416\gunfighter_co.paa","nia_wp_hk416\tex\toadie_416\geissele_sch_co.paa","nia_wp_hk416\tex\toadie_acr\map2-556tan_co.paa"};
//class hlc_rifle_416D10C;
class hlc_rifle_416D10_tan;
//class hlc_rifle_416D145;
class hlc_rifle_416D145_GL;
class hlc_rifle_416D145_tan;
class hlc_rifle_416D10_st6;
class hlc_rifle_416D10_ptato;
//class hlc_rifle_416D165;
class hlc_rifle_416D165_tan;
/*
  class gaf2_HK416_Test_Blk: hlc_rifle_416D165_tan
    {   
      descriptionShort = "G95A1 test";
      displayName = "NiArms G95A1 test";
      		hiddenSelections[] = {"416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","M27_foregrip"};
		hiddenSelectionsTextures[] = {"z\gaf2\addons\hk416_niarms_compat\data\416_upperbw_co.paa","z\gaf2\addons\hk416_niarms_compat\data\416_lowerbw_co.paa","z\gaf2\addons\hk416_niarms_compat\data\416_barrel_co.paa","z\gaf2\addons\hk416_niarms_compat\data\416_common_camobw_co.paa","z\gaf2\addons\hk416_niarms_compat\data\416_stocksbw_co.paa","z\gaf2\addons\hk416_niarms_compat\data\416_extendedforegripbw_co.paa"};
    		HiddenSelectionsMaterials[] = {"nia_wp_hk416\mat\416_upper.rvmat","nia_wp_hk416\mat\416_lower.rvmat","nia_wp_hk416\mat\416_barrel.rvmat","nia_wp_hk416\mat\416_common.rvmat","nia_wp_hk416\mat\416_stocks.rvmat","nia_wp_hk416\mat\416_extendedforegrip.rvmat"};
      baseWeapon = "gaf2_HK416_Test_Blk";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;

      class LinkedItems
      {
        class LinkedItemsOptic
        {
          slot="CowsSlot";
          item="gaf2_optic_Elcan";
        };
        class LinkedItemsAcc
        {
          slot="PointerSlot";
          item="BWA3_acc_VarioRay_irlaser";
        };
        class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "rhsusf_acc_SF3P556";
      };
      };
    };
*/

  class gaf2_HK416_Arco_Blk: hlc_rifle_416D165_tan
    {   //descriptionShort = "HecklerKoch 416 Assault rifle";
        scope=1;
      class LinkedItems
      {
        class LinkedItemsOptic
        {
          slot="CowsSlot";
          item="gaf2_optic_Elcan";
        };
        class LinkedItemsAcc
        {
          slot="PointerSlot";
          item="BWA3_acc_VarioRay_irlaser";
        };
        class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "rhsusf_acc_SF3P556";
      };
      };
    };

    class gaf2_HK416_Arco_Tan: hlc_rifle_416D165_tan
      {   //descriptionShort = "HecklerKoch 416 Assault rifle";
          scope=1;
        class LinkedItems
        {
          class LinkedItemsOptic
          {
            slot="CowsSlot";
            item="gaf2_optic_Elcan";
          };
          class LinkedItemsAcc
          {
            slot="PointerSlot";
            item="BWA3_acc_VarioRay_irlaser";
          };
          class LinkedItemsMuzzle 
          {
          slot = "MuzzleSlot";
          item = "rhsusf_acc_SF3P556";
          };
        };
      };

//hk 416 with magnified optic
class gaf2_HK416_Arco_M_WDL: hlc_rifle_416D145_tan
  {   //descriptionShort = "HecklerKoch 416 Assault rifle";
      scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="gaf2_optic_Elcan";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="BWA3_acc_VarioRay_irlaser";
      };
      class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "rhsusf_acc_SF3P556";
		};
    };
  };

  class gaf2_HK416_Arco_M_BLK: hlc_rifle_416D145_tan
    {   //descriptionShort = "HecklerKoch 416 Assault rifle";
        scope=1;
      class LinkedItems
      {
        class LinkedItemsOptic
        {
          slot="CowsSlot";
          item="gaf2_optic_Elcan";
        };
        class LinkedItemsAcc
        {
          slot="PointerSlot";
          item="BWA3_acc_VarioRay_irlaser";
        };
        class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "rhsusf_acc_SF3P556";
      };
      };
    };

    class gaf2_HK416_Arco_M_TAN: hlc_rifle_416D145_tan
      {   //descriptionShort = "HecklerKoch 416 Assault rifle";
          scope=1;
        class LinkedItems
        {
          class LinkedItemsOptic
          {
            slot="CowsSlot";
            item="gaf2_optic_Elcan";
          };
          class LinkedItemsAcc
          {
            slot="PointerSlot";
            item="BWA3_acc_VarioRay_irlaser";
          };
          class LinkedItemsMuzzle {
          slot = "MuzzleSlot";
          item = "rhsusf_acc_SF3P556";
        };
        };
      };
//Hk416 GL
  class gaf2_HK416_Arco_GL_Blk: hlc_rifle_416D145_GL
    {   //descriptionShort = "HecklerKoch 416 Assault rifle";
        scope=1;
      class LinkedItems
      {
        class LinkedItemsOptic
        {
          slot="CowsSlot";
          item="gaf2_optic_Elcan";
        };
        class LinkedItemsAcc
        {
          slot="PointerSlot";
          item="BWA3_acc_VarioRay_irlaser";
        };
        class LinkedItemsMuzzle {
        slot = "MuzzleSlot";
        item = "rhsusf_acc_SF3P556";
      };
      };
    };

    class gaf2_HK416_Arco_GL_Tan: hlc_rifle_416D145_GL
      {   //descriptionShort = "HecklerKoch 416 Assault rifle";
          scope=1;
        class LinkedItems
        {
          class LinkedItemsOptic
          {
            slot="CowsSlot";
            item="gaf2_optic_Elcan";
          };
          class LinkedItemsAcc
          {
            slot="PointerSlot";
            item="BWA3_acc_VarioRay_irlaser";
          };
          class LinkedItemsMuzzle {
          slot = "MuzzleSlot";
          item = "rhsusf_acc_SF3P556";
        };
        };
      };
      //Hk416 ksk
        class gaf2_HK416_Arco_KSK_Tan: hlc_rifle_416D10_ptato
          {   //descriptionShort = "HecklerKoch 416 Assault rifle";
              scope=1;
            class LinkedItems
            {
              class LinkedItemsOptic
              {
                slot="CowsSlot";
                item="gaf2_optic_Elcan";
              };
              class LinkedItemsAcc
              {
                slot="PointerSlot";
                item="BWA3_acc_VarioRay_irlaser";
              };
              class LinkedItemsMuzzle {
              slot = "MuzzleSlot";
              item = "hlc_muzzle_snds_ROTEX3P";
            };
            };
          };

          class gaf2_HK416_Arco_KSK_Blk: hlc_rifle_416D10_st6
            {   //descriptionShort = "HecklerKoch 416 Assault rifle";
                scope=1;
              class LinkedItems
              {
                class LinkedItemsOptic
                {
                  slot="CowsSlot";
                  item="gaf2_optic_Elcan";
                };
                class LinkedItemsAcc
                {
                  slot="PointerSlot";
                  item="BWA3_acc_VarioRay_irlaser";
                };
                class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "hlc_muzzle_snds_ROTEX3P";
              };
              };
            };

//HK416 CQC
class gaf2_HK416_Arco_C_WDL: hlc_rifle_416D10_tan
  {   //descriptionShort = "HecklerKoch 416 Assault rifle";
      scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="gaf2_optic_Elcan";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="BWA3_acc_VarioRay_irlaser";
      };
      class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "rhsusf_acc_SF3P556";
		};
    };
  };

    class gaf2_HK416_Arco_C_Tan: hlc_rifle_416D10_tan
      {   //descriptionShort = "HecklerKoch 416 Assault rifle";
          scope=1;
        class LinkedItems
        {
          class LinkedItemsOptic
          {
            slot="CowsSlot";
            item="gaf2_optic_Elcan";
          };
          class LinkedItemsAcc
          {
            slot="PointerSlot";
            item="BWA3_acc_VarioRay_irlaser";
          };
          class LinkedItemsMuzzle {
          slot = "MuzzleSlot";
          item = "rhsusf_acc_SF3P556";
        };
        };
      };
