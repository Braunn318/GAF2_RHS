class BWA3_MG3;
class BWA3_MG4;
class BWA3_MG5;
class BWA3_MG5_Tan;
class rhs_weap_m107;
class rhs_weap_m107_d;


//MGs
    class GAF2_MG4_G33: BWA3_MG4
      {
        scope=1;
        class LinkedItems
        {
          class LinkedItemsOptic
          {
            slot="CowsSlot";
            item="rhsusf_acc_g33_xps3";
          };
          class LinkedItemsAcc
          {
            slot="PointerSlot";
            item="rhsusf_acc_anpeq15side_bk";
          };
          class LinkedItemsMuzzle {
          slot = "MuzzleSlot";
          item = "rhsusf_acc_SF3P556";
        };
        };
      };

      class GAF2_MG3_bipod: BWA3_MG3
        {
          scope=2;
          class LinkedItems
          {
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "BWA3_bipod_MG3";
            };
          };
        };
//magazineWell[] = {"CBA_762x51_LINKS","CBA_762x51_MG3"};
        class GAF2_MG5_G33_Blk: BWA3_MG5
          {
            scope=1;
            class LinkedItems
            {
              class LinkedItemsOptic
              {
                slot="CowsSlot";
                item="rhsusf_acc_g33_xps3";
              };
              class LinkedItemsAcc
              {
                slot="PointerSlot";
                item="rhsusf_acc_anpeq15side_bk";
              };
            };
          };

          class GAF2_MG5_G33_Tan: BWA3_MG5_Tan
            {
              scope=1;
              class LinkedItems
              {
                class LinkedItemsOptic
                {
                  slot="CowsSlot";
                  item="rhsusf_acc_g33_xps3_tan";
                };
                class LinkedItemsAcc
                {
                  slot="PointerSlot";
                  item="rhsusf_acc_anpeq15side";
                };
              };
            };


//G82//
class GAF2_G82_Blk: rhs_weap_m107
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="BWA3_optic_Hensoldt";
      };
        class LinkedItemsUnder {
        slot = "UnderBarrelSlot";
        item = "BWA3_bipod_Harris_tan"; // Added bipod
            };
          };
    };

  class GAF2_G82_Tan: rhs_weap_m107_d
    {
      scope=1;
      class LinkedItems
      {
        class LinkedItemsOptic
        {
          slot="CowsSlot";
          item="BWA3_optic_Hensoldt";
        };
        class LinkedItemsUnder {
        slot = "UnderBarrelSlot";
        item = "BWA3_bipod_Harris_tan"; // Added bipod
            };
      };
    };
