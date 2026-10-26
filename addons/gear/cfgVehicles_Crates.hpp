class BWA3_Box_Weapons;
class BWA3_Box_SpecialWeapons;
class BWA3_Box_Ammo;
class BWA3_Box_Explosives;
class BWA3_Box_Support;
class BWA3_Box_Launchers;
class BWA3_Box_Gear_Fleck;
class BWA3_Box_Gear_Tropen;

 class GAF2_Box_Weapons: BWA3_Box_Weapons {
     ACE_dragging_canCarry = 1;
     ACE_dragging_canDrag = 1;
     editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
     editorSubcategory = "MySupplies";

     class TransportMagazines {
          MAG_XX(gaf2_mag_30Rnd_556x45_G95,8);
          MAG_XX(BWA3_200Rnd_556x45,2);
          MAG_XX(BWA3_20Rnd_762x51_G28,2);
          MAG_XX(BWA3_40Rnd_46x30_MP7,1);
          MAG_XX(BWA3_30Rnd_556x45_G36,1);
 //       MAG_XX(gm_20Rnd_762x51mm_AP_DM151_g3_blk,1);
          MAG_XX(rhsusf_mag_17Rnd_9x19_FMJ,3);
      };

      class TransportWeapons 
        {

          WEAP_XX(gaf2_HK416_Arco_Blk,4);
          WEAP_XX(gaf2_HK416_Arco_GL_Blk,2);
          WEAP_XX(gaf2_HK416_Arco_C_WDL,2);
          WEAP_XX(BWA3_MG4,2);
          WEAP_XX(GAF2_G27_C_Blk,2);
          WEAP_XX(rhsusf_weap_glock17g4,3);
          WEAP_XX(BWA3_MP7,1);
          WEAP_XX(BWA3_G36A3_G,1);
          
        };
      class TransportItems {};
  };

  class GAF2_Box_Ammo: BWA3_Box_Ammo {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
      editorSubcategory = "MySupplies";
      class TransportMagazines {
                 MAG_XX(gaf2_mag_30Rnd_556x45_G95,24);
                 MAG_XX(BWA3_200Rnd_556x45,10);
                 MAG_XX(BWA3_20Rnd_762x51_G28,10);
                 MAG_XX(BWA3_40Rnd_46x30_MP7,8);
                 MAG_XX(1Rnd_HE_Grenade_shell,8);
                 MAG_XX(BWA3_DM51A1,12);
                 MAG_XX(rhsusf_mag_17Rnd_9x19_FMJ,26);
             };
             class TransportWeapons {};
             class TransportItems {};

  };

  class GAF2_Box_Ammo_RSV: BWA3_Box_Ammo {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      displayName = "AMMO (Reservists)";
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
      scope=2;
      scopecurator=2;
      editorSubcategory = "MySupplies";
      class TransportMagazines {
                 MAG_XX(BWA3_30Rnd_556x45_G36,18);
                 MAG_XX(BWA3_DM51A1,18);
                 MAG_XX(rhsusf_mag_17Rnd_9x19_FMJ,14);
             };
             class TransportWeapons {};
             class TransportItems {};

  };

  class GAF2_Box_Launchers: BWA3_Box_Launchers {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
      editorSubcategory = "MySupplies";

  };
  class GAF2_Box_SpecialWeapons: BWA3_Box_SpecialWeapons {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
      editorSubcategory = "MySupplies";
      class TransportMagazines {
    MAG_XX(BWA3_20Rnd_762x51_G28,20);
    MAG_XX(BWA3_10Rnd_86x70_G29,12);
    MAG_XX(rhsusf_mag_10Rnd_STD_50BMG_mk211,6);
};
class TransportWeapons {
    WEAP_XX(GAF2_G27_C_Blk,5);
    WEAP_XX(GAF2_G27_AG36,2);
    WEAP_XX(GAF2_G28_DMR,5);
    WEAP_XX(BWA3_G29_bipod,2);
    WEAP_XX(GAF2_G82_BLK,1);
};
class TransportItems {
    ITEM_XX(rhsusf_acc_g33_xps3,2);
    ITEM_XX(rhsusf_acc_g33_xps3_tan,2);
    ITEM_XX(gaf2_optic_Elcan,8);
    ITEM_XX(BWA3_optic_PMII_ShortdotCC,1);
    ITEM_XX(BWA3_optic_PMII_DMR_MicroT1_rear,1);
    ITEM_XX(BWA3_optic_M5Xi_Tremor3_MicroT2,1);
    ITEM_XX(BWA3_optic_M5Xi_MSR_MicroT2,1);
    ITEM_XX(BWA3_optic_Hensoldt,1);
};


  };

  class GAF2_Box_Support: BWA3_Box_Support {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
      editorSubcategory = "MySupplies";

      class TransportMagazines {};
            class TransportWeapons {
                WEAP_XX(Binocular,1);
                WEAP_XX(BWA3_Vector,2);
                WEAP_XX(NVGoggles_GAF2_INV_OPF,10);

            };
            class TransportItems {
                ITEM_XX(FirstAidKit,10);
                ITEM_XX(Medikit,1);
                ITEM_XX(ToolKit,1);
                ITEM_XX(MineDetector,1);
                ITEM_XX(BWA3_ItemNaviPad,5);
                ITEM_XX(rhsusf_acc_anpeq15side_bk,10);
                ITEM_XX(rhsusf_acc_anpeq15side,5);
                ITEM_XX(BWA3_acc_LLM01_irlaser_underbarrel,5);
                ITEM_XX(BWA3_acc_LLMPI_irlaser,5);
                ITEM_XX(BWA3_acc_VarioRay_irlaser,5);
                ITEM_XX(BWA3_muzzle_snds_Rotex_IIA,5);
                ITEM_XX(BWA3_muzzle_snds_Rotex_Monoblock,5);
                ITEM_XX(BWA3_muzzle_snds_Rotex_IIIC,3);
                ITEM_XX(BWA3_muzzle_snds_Rotex_IIIC_tan,3);
                ITEM_XX(BWA3_muzzle_snds_QDSS,3);
                ITEM_XX(BWA3_muzzle_snds_QDSS_tan,3);
                ITEM_XX(BWA3_muzzle_snds_Rotex_II,5);
                ITEM_XX(BWA3_muzzle_snds_Impuls_IIA,5);
                ITEM_XX(BWA3_bipod_Atlas,5);
                ITEM_XX(BWA3_bipod_Harris,3);
                ITEM_XX(BWA3_bipod_Harris_tan,3);
                ITEM_XX(rhsusf_oakley_goggles_clr,3);
                ITEM_XX(rhsusf_oakley_goggles_blk,3);
                ITEM_XX(rhsusf_oakley_goggles_ylw,3);

            };
  };

  class GAF2_Box_Explosives: BWA3_Box_Explosives {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
      editorSubcategory = "MySupplies";

      class TransportMagazines {
    MAG_XX(1Rnd_HE_Grenade_shell,12);
    MAG_XX(BWA3_DM51A1,24);
    MAG_XX(BWA3_DM25,4);
    MAG_XX(BWA3_DM32_Orange,4);
    MAG_XX(BWA3_DM32_Yellow,4);
    MAG_XX(BWA3_DM32_Green,4);
    MAG_XX(BWA3_DM32_Red,4);
    MAG_XX(BWA3_DM32_Purple,4);
    MAG_XX(BWA3_DM32_Blue,4);
    MAG_XX(BWA3_DM31AT_Mag,5);
          };
class TransportWeapons {};

class TransportItems {
  ITEM_XX(Minedetector,1);
  ITEM_XX(APERSBoundingMine_Range_Mag,3);
  ITEM_XX(ClaymoreDirectionalMine_Remote_Mag,2);
  ITEM_XX(DemoCharge_Remote_Mag,2);
  ITEM_XX(SLAMDirectionalMine_Wire_Ma,3);
                      };
  };

  class GAF2_Box_Gear_flk: BWA3_Box_Gear_Fleck {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
      editorSubcategory = "MySupplies";
      class TransportBackpacks {
          ITEM_XX(gaf2_AssaultPack_flk,2);
          ITEM_XX(gaf2_Kitbag_flk,4);
          ITEM_XX(gaf2_TacticalPack_flk,4);
//        ITEM_XX(BWA3_FieldPack_Fleck,2);
          ITEM_XX(gaf2_Carryall_flk,2);
//        ITEM_XX(BWA3_PatrolPack_Fleck,2);
      };
      class TransportWeapons {};
      class TransportMagazines {};
      class TransportItems {
          ITEM_XX(rhsusf_opscore_fg_pelt_nsw,18);
          ITEM_XX(rhsusf_opscore_ut_pelt_nsw,4);
          ITEM_XX(gaf2_BaVi_H_HelmetB_Solid_Olive,12);
          ITEM_XX(gaf2_BaVi_H_HelmetSpecB_Solid_Olive,6);
          ITEM_XX(BWA3_CrewmanKSK_Fleck_Headset,2);
          ITEM_XX(BWA3_CrewmanKSK,3);
          ITEM_XX(BWA3_CrewmanKSK_Headset,1);
          ITEM_XX(BWA3_Knighthelm,2);
          ITEM_XX(BWA3_Booniehat_Fleck,6);
          ITEM_XX(BWA3_Beret_PzGren,1);
          ITEM_XX(BWA3_Beret_Pz,1);
          ITEM_XX(BWA3_Beret_PzAufkl,1);
          ITEM_XX(BWA3_Beret_Jaeger,1);
          ITEM_XX(BWA3_Beret_Falli,1);
          ITEM_XX(BWA3_Beret_HFlieger,1);
          ITEM_XX(BWA3_Beret_Wach_green,1);
          ITEM_XX(BWA3_Beret_Wach_blue,1);
          ITEM_XX(BWA3_Uniform2_Fleck,8);
          ITEM_XX(gaf2_Unif_CombatFatigues_flk,2);
          ITEM_XX(BWA3_Uniform2_Ghillie_Fleck,2);
          ITEM_XX(gaf2_Unif_LFatigues_flk,8);
          ITEM_XX(gaf2_vest_Mobast_2_flk,12);
          ITEM_XX(gaf2_vest_Mobast_3_flk,4);
          ITEM_XX(gaf2_vest_Mobast_4_flk,6);
      };
  };

  class GAF2_Box_Gear_trp: BWA3_Box_Gear_Tropen {
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
        editorSubcategory = "MySupplies";
      class TransportBackpacks {
          ITEM_XX(gaf2_AssaultPack_trp,2);
          ITEM_XX(gaf2_Kitbag_trp,4);
          ITEM_XX(gaf2_TacticalPack_trp,4);
//        ITEM_XX(BWA3_FieldPack_Tropen,2);
          ITEM_XX(gaf2_Carryall_trp,2);
//        ITEM_XX(BWA3_PatrolPack_Tropen,2);
      };
      class TransportWeapons {};
      class TransportMagazines {};
      class TransportItems {
          ITEM_XX(rhsusf_opscore_ut_pelt_nsw,14);
          ITEM_XX(rhsusf_opscore_coy_cover_pelt,4);
          ITEM_XX(rhsusf_opscore_mar_ut_pelt,4);
          ITEM_XX(gaf2_BaVi_H_HelmetB_Solid_Tan,12);
          ITEM_XX(gaf2_BaVi_H_HelmetB_camo_Solid_Tan,6);
          ITEM_XX(BWA3_CrewmanKSK_Tropen_Headset,2);
          ITEM_XX(BWA3_Knighthelm,2);
          ITEM_XX(BWA3_Booniehat_Tropen,6);
          ITEM_XX(BWA3_Beret_PzGren,1);
          ITEM_XX(BWA3_Beret_Pz,1);
          ITEM_XX(BWA3_Beret_PzAufkl,1);
          ITEM_XX(BWA3_Beret_Jaeger,1);
          ITEM_XX(BWA3_Beret_Falli,1);
          ITEM_XX(BWA3_Beret_HFlieger,1);
          ITEM_XX(BWA3_Beret_Wach_green,1);
          ITEM_XX(BWA3_Beret_Wach_blue,1);
          ITEM_XX(BWA3_Uniform2_Tropen,8);
          ITEM_XX(BWA3_Uniform2_sleeves_Tropen,2);
          ITEM_XX(BWA3_Uniform2_Ghillie_Tropen,2);
          ITEM_XX(BWA3_Uniform_Crew_Tropen,6);
          ITEM_XX(BWA3_Uniform_Helipilot,2);
          ITEM_XX(V_PlateCarrier1_trp,12);
          ITEM_XX(V_Tacvest_khk,4);
          ITEM_XX(gaf2_vest_Mobast_1_trp,2);
          ITEM_XX(gaf2_vest_Mobast_2_trp,2);
          ITEM_XX(gaf2_vest_Mobast_3_trp,2);
      };
  };

    class GAF2_Box_Gear_mlt: BWA3_Box_Gear_Fleck {
      displayName = "Gear [BW] (Multitarn)";
      ACE_dragging_canCarry = 1;
      ACE_dragging_canDrag = 1;
      editorPreview = "z\gaf2\addons\main\data\gafpreview.jpg";
     scope=2;
     scopecurator=2;
      editorSubcategory = "MySupplies";
      class TransportBackpacks {
          ITEM_XX(gaf2_AssaultPack_mlt,2);
          ITEM_XX(gaf2_Kitbag_mlt,4);
          ITEM_XX(gaf2_TacticalPack_mlt,4);
//        ITEM_XX(BWA3_FieldPack_Fleck,2);
          ITEM_XX(gaf2_Carryall_mlt,2);
//        ITEM_XX(BWA3_PatrolPack_Fleck,2);
      };
      class TransportWeapons {};
      class TransportMagazines {};
      class TransportItems {
          ITEM_XX(rhsusf_opscore_fg_pelt_nsw,18);
          ITEM_XX(rhsusf_opscore_ut_pelt_nsw,4);
          ITEM_XX(gaf2_BaVi_H_HelmetB_Solid_Olive,12);
          ITEM_XX(gaf2_BaVi_H_HelmetSpecB_Solid_Olive,6);
          ITEM_XX(BWA3_CrewmanKSK_Fleck_Headset,2);
          ITEM_XX(BWA3_CrewmanKSK,3);
          ITEM_XX(BWA3_CrewmanKSK_Headset,1);
          ITEM_XX(BWA3_Knighthelm,2);
          ITEM_XX(BWA3_Booniehat_Fleck,6);
          ITEM_XX(BWA3_Beret_PzGren,1);
          ITEM_XX(BWA3_Beret_Pz,1);
          ITEM_XX(BWA3_Beret_PzAufkl,1);
          ITEM_XX(BWA3_Beret_Jaeger,1);
          ITEM_XX(BWA3_Beret_Falli,1);
          ITEM_XX(BWA3_Beret_HFlieger,1);
          ITEM_XX(BWA3_Beret_Wach_green,1);
          ITEM_XX(BWA3_Beret_Wach_blue,1);
          ITEM_XX(BWA3_Uniform2_Fleck,8);
          ITEM_XX(gaf2_Unif_CombatFatigues_mlt,2);
          ITEM_XX(BWA3_Uniform2_Ghillie_Multi,2);
          ITEM_XX(gaf2_Unif_LFatigues_mlt,8);
          ITEM_XX(gaf2_vest_Mobast_2_mlt,12);
          ITEM_XX(gaf2_vest_Mobast_3_mlt,4);
          ITEM_XX(gaf2_vest_Mobast_4_mlt,6);
      };
  };
