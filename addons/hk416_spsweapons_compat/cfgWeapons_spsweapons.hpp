//hiddenSelectionsTextures[] = {"nia_wp_hk416\tex\toadie_416\416_upper_co.paa","nia_wp_hk416\tex\toadie_416\416_lower_co.paa","nia_wp_hk416\tex\toadie_416\416_barrel_co.paa","nia_wp_hk416\tex\toadie_416\416_common_co.paa","nia_wp_hk416\tex\toadie_416\416_stocks_co.paa","nia_wp_hk416\tex\toadie_416\416_extendedforegrip_co.paa"};

class SPS_hk416_16_5_afg_fde_f; //16.5
class SPS_hk416_16_5_glm_fde_f; //GL 16.5
class SPS_hk416_14_5_afg_fde_f; //14.5
//class SPS_hk416_14_5_glm_fde_f;// 14.5 GL
class SPS_hk417_20_vfg_fde_f; // G28 DMR HK417 20.0
class SPS_hk417_13_glm_fde_f;// HK417 G27 GL
class SPS_hk417_13_vfg_fde_f;// HK417 G27


  class gaf2_HK416_Arco_Blk: SPS_hk416_16_5_afg_fde_f
    {   descriptionShort = "G95A1 Assault Rifle";
        scope = 2;
scopeArsenal = 2;
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

      };
    };

    class gaf2_HK416_Arco_Tan: SPS_hk416_16_5_afg_fde_f
      {   descriptionShort = "G95A1 Assault Rifle";
          scope = 2;
scopeArsenal = 2;
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
class gaf2_HK416_Arco_M_WDL: SPS_hk416_16_5_afg_fde_f
  {   descriptionShort = "G95A1 Assault Rifle";
      scope = 2;
scopeArsenal = 2;
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

    };
  };

  class gaf2_HK416_Arco_M_BLK: SPS_hk416_16_5_afg_fde_f
    {   descriptionShort = "G95A1 Assault Rifle";
        scope = 2;
scopeArsenal = 2;
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

      };
    };

    class gaf2_HK416_Arco_M_TAN: SPS_hk416_16_5_afg_fde_f
      {   descriptionShort = "G95A1 Assault Rifle";
          scope = 2;
scopeArsenal = 2;
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

        };
      };
//Hk416 GL
  class gaf2_HK416_Arco_GL_Blk: SPS_hk416_16_5_glm_fde_f
    {   descriptionShort = "G95A1 Assault Rifle";
        scope = 2;
scopeArsenal = 2;
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

      };
    };

    class gaf2_HK416_Arco_GL_Tan: SPS_hk416_16_5_glm_fde_f
      {   descriptionShort = "G95A1 Assault Rifle";
          scope = 2;
scopeArsenal = 2;
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

        };
      };
      //Hk416 ksk
        class gaf2_HK416_Arco_KSK_Tan: SPS_hk416_14_5_afg_fde_f
          {   descriptionShort = "G95KA1 Assault Rifle";
              scope = 2;
scopeArsenal = 2;
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
              item = "BWA3_muzzle_snds_Rotex_IIIC_tan";
            };
            };
          };

          class gaf2_HK416_Arco_KSK_Blk: SPS_hk416_14_5_afg_fde_f
            {   descriptionShort = "G95KA1 Assault Rifle";
                scope = 2;
scopeArsenal = 2;
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
                item = "BWA3_muzzle_snds_Rotex_IIIC_tan";
              };
              };
            };

//HK416 CQC
class gaf2_HK416_Arco_C_WDL: SPS_hk416_14_5_afg_fde_f
  {   descriptionShort = "G95KA1 Assault Rifle";
      scope = 2;
scopeArsenal = 2;
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

    };
  };

    class gaf2_HK416_Arco_C_Tan: SPS_hk416_14_5_afg_fde_f
      {   descriptionShort = "G95KA1 Assault Rifle";
          scope = 2;
scopeArsenal = 2;
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

        };
      };


      //G27 HK417
class GAF2_G27_C_Blk: SPS_hk417_13_vfg_fde_f
  { descriptionShort = "Heckler&Koch 417 Assault rifle";
    scope = 2;
scopeArsenal = 2;
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
    };
  };

  class GAF2_G27_C_Tan: SPS_hk417_13_vfg_fde_f
  { descriptionShort = "Heckler&Koch 417 Assault rifle";
    scope = 2;
scopeArsenal = 2;
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
    };
  };

  class GAF2_F_C_KSK_Blk: SPS_hk417_13_vfg_fde_f
    { descriptionShort = "Heckler&Koch 417 Assault rifle";
      scope = 2;
scopeArsenal = 2;
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
        item = "rhsusf_acc_aac_762sdn6_silencer";
      };
      };
    };

    class GAF2_G27_C_KSK_Tan: SPS_hk417_13_vfg_fde_f
      { descriptionShort = "Heckler&Koch 417 Assault rifle";
        scope = 2;
scopeArsenal = 2;
        class LinkedItems
        {
          class LinkedItemsOptic
          {
            slot="CowsSlot";
            item="s";
          };
          class LinkedItemsAcc
          {
            slot="PointerSlot";
            item="BWA3_acc_VarioRay_irlaser";
          };
          class LinkedItemsMuzzle {
          slot = "MuzzleSlot";
          item = "rhsusf_acc_aac_762sdn6_silencer";
        };
        };
      };

  class GAF2_G27_AG36_Blk: SPS_hk417_13_glm_fde_f
    { descriptionShort = "Heckler&Koch 417 Assault rifle";
      scope = 2;
scopeArsenal = 2;
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
      };
    };

      class GAF2_G27_AG36_Tan: SPS_hk417_13_glm_fde_f
    { descriptionShort = "Heckler&Koch 417 Assault rifle";
      scope = 2;
scopeArsenal = 2;
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
      };
    };
            //g28 Marksman
            class GAF2_G28_DMR: SPS_hk417_20_vfg_fde_f
              {
                scope = 2;
scopeArsenal = 2;
                class LinkedItems
                {
                  class LinkedItemsOptic
                  {
                    slot="CowsSlot";
                    item="BWA3_optic_PMII_DMR_MicroT1_rear_pip";
                  };
                  class LinkedItemsAcc
                  {
                    slot="PointerSlot";
                    item="BWA3_acc_VarioRay_irlaser";
                  };
                    class LinkedItemsUnder {
                    slot = "UnderBarrelSlot";
                    item = "BWA3_bipod_Harris_tan"; // Added bipod
                  };
                };
              };

//G28 KSKS
class GAF2_G28_KSK_DMR: SPS_hk417_20_vfg_fde_f
  {
    scope = 2;
scopeArsenal = 2;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="BWA3_optic_PMII_DMR_MicroT1_rear_pip";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot ";
        item="BWA3_bipod_Harris_tan";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="BWA3_acc_VarioRay_irlaser";
      };
      class LinkedItemsMuzzle {
      slot = "MuzzleSlot";
      item = "rhsusf_acc_aac_762sdn6_silencer";
    };
    };
  };
