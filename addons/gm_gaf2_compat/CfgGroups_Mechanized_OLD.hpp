class Mechanized {
    name = "Mechanized";

      class B_GAF2_FLK_MechInf_AT_GM {
        name = "Mechanized Anti Armor (GM Marder)";
        side=1;
        faction = "B_GAF2_FLK";
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0 {
            side=1;
            vehicle =  "B_GAF2_Marder_1A2_Fleck";
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=1;
            vehicle = "B_GAF2_Teamleader_Fleck";
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=1;
            vehicle = "B_GAF2_MachineGunner_MG3_Fleck";
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side=1;
            vehicle = "B_GAF2_RiflemanAT_PzF3_Fleck";
            rank = "CORPORAL";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side=1;
            vehicle = "B_GAF2_RiflemanAT_PzF3_Fleck";
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5 {
            side=1;
            vehicle = "B_GAF2_RiflemanAT_PzF3_Fleck";
            rank = "CORPORAL";
            position[] = {15,-15,0};
        };
        class Unit6 {
            side=1;
            vehicle = "B_GAF2_RiflemanAT_PzF3_Fleck";
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
    };

  /*  class B_GAF2_FLK_MechInf_AA_GM {
        name = "Mechanized Anti Air (GM FlakPz 1A1)";
        side=1;
        faction = "B_GAF2_FLK";
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0 {
            side=1;
            vehicle = B_GAF2_FlakPz_1A1_Fleck;
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=1;
            vehicle = B_GAF2_Teamleader_Fleck;
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=1;
            vehicle = B_GAF2_MachineGunner_MG4_Fleck;
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side=1;
            vehicle = B_GAF2_RiflemanAA_Fliegerfaust_Fleck;
            rank = "CORPORAL";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side=1;
            vehicle = B_GAF2_RiflemanAA_Fliegerfaust_Fleck;
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5 {
            side=1;
            vehicle = B_GAF2_RiflemanAA_Fliegerfaust_Fleck;
            rank = "CORPORAL";
            position[] = {15,-15,0};
        };
        class Unit6 {
            side=1;
            vehicle = B_GAF2_RiflemanAA_Ass_Fleck;
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
    };
*/
    class B_GAF2_FLK_MechInf_Support_GM {
        name = "Mechanized Support (GM Fuchs)";
        side=1;
        faction = "B_GAF2_FLK";
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0 {
            side=1;
            vehicle = "B_GAF2_Fuchs_CMD_Fleck";
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=1;
            vehicle = "B_GAF2_Squadleader_Fleck";
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=1;
            vehicle = "B_GAF2_Engineer_Fleck";
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side=1;
            vehicle = "B_GAF2_Explosives_Fleck";
            rank = "CORPORAL";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side=1;
            vehicle = "B_GAF2_CLS_Fleck";
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };

    };

};
