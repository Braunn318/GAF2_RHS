//G36 classic old

class hlc_rifle_G36V;
class hlc_rifle_G36VAG36;

class hlc_rifle_G36V_BWA3_optic_ZO4x30_MicroT2: hlc_rifle_G36V
  {   descriptionShort = "Standard G36 Assault rifle";
      scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="BWA3_optic_ZO4x30_RSAS";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
    };
  };
  //G36 reservists
  class BWA3_G36A3_G: hlc_rifle_G36V
    {   descriptionShort = "Standard G36 Assault rifle";
        scope=1;
      class LinkedItems
      {
        class LinkedItemsOptic
        {
          slot="CowsSlot";
          item="BWA3_optic_ZO4x30_RSAS";
        };
        class LinkedItemsAcc
        {
          slot="PointerSlot";
          item="rhsusf_acc_anpeq15side_bk";
        };
      };
    };

//G36 grenadier

  class hlc_rifle_G36VAG36_BWA3_optic_ZO4x30_MicroT2: hlc_rifle_G36VAG36
    { descriptionShort = "Standard G36 Assault rifle with GL";
      scope=1;
      class LinkedItems
      {
        class LinkedItemsOptic
        {
          slot="CowsSlot";
          item="BWA3_optic_ZO4x30_RSAS";
        };
        class LinkedItemsAcc
        {
          slot="PointerSlot";
          item="rhsusf_acc_anpeq15side_bk";
        };
      };
    };
