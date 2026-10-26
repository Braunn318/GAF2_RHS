class Motorized_MTP {
    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";

    class CLASS_GROUP(MotInf_Team) {
        name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Eagle_IV_FLW100);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG4);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_RGW90);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };

    class CLASS_GROUP(MotInf_AT) {
        name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Dingo_M2);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_MRAWS);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_MRAWS);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_MRAWS);
            rank = "PRIVATE";
            position[] = {0,-10,0};
        };
    };

    class CLASS_GROUP(MotInf_AA) {
        name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Dingo_M2);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAA_Fliegerfaust);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAA_Fliegerfaust);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAA_Ass);
            rank = "PRIVATE";
            position[] = {0,-10,0};
        };
    };

    class CLASS_GROUP(MotInf_Reinforce) {
        name = "Motorized Reinforcements";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(HEMMT_TROpen);
            rank = "PRIVATE";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Squadleader);
            rank = "LIEUTENANT";
            position[] = {-5,0,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {5,-2,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {5,-4,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(Grenadier);
            rank = "CORPORAL";
            position[] = {5,-6,0};
        };
        class Unit5 {
            side = SIDE_TAG;
            vehicle = VEH(Rifleman);
            rank = "PRIVATE";
            position[] = {5,-8,0};
        };
        class Unit6 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG5);
            rank = "PRIVATE";
            position[] = {5,-10,0};
        };
        class Unit7 {
            side = SIDE_TAG;
            vehicle = VEH(Ammobearer);
            rank = "PRIVATE";
            position[] = {5,-12,0};
        };
        class Unit8 {
            side = SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {5,-14,0};
        };
        class Unit9 {
            side = SIDE_TAG;
            vehicle = VEH(Squadleader);
            rank = "LIEUTENANT";
            position[] = {-5,0,0};
        };
        class Unit10 {
            side = SIDE_TAG;
            vehicle = VEH(Rifleman);
            rank = "PRIVATE";
            position[] = {-5,-2,0};
        };
        class Unit11 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_PzF3);
            rank = "PRIVATE";
            position[] = {-5,-4,0};
        };
        class Unit12 {
            side = SIDE_TAG;
            vehicle = VEH(Marksman);
            rank = "PRIVATE";
            position[] = {-5,-6,0};
        };
        class Unit13 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "CORPORAL";
            position[] = {-5,-8,0};
        };
        class Unit14 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG3);
            rank = "PRIVATE";
            position[] = {-5,-10,0};
        };
        class Unit15 {
            side = SIDE_TAG;
            vehicle = VEH(Ammobearer);
            rank = "PRIVATE";
            position[] = {-5,-12,0};
        };
        class Unit16 {
            side = SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {-5,-14,0};
        };
    };
};
