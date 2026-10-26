class Infantry {
    name = "Infantry";

    class CLASS_GROUP(InfSquad) {
        name = "Rifle Squad";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Squadleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Rifleman);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_PzF3);
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(Marksman);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit5 {
            side = SIDE_TAG;
            vehicle = VEH(Ammobearer);
            rank = "CORPORAL";
            position[] = {15,-15,0};
        };
        class Unit6 {
            side = SIDE_TAG;
            vehicle = VEH(Machinegunner_MG4);
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
        class Unit7 {
            side = SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
    };

    class CLASS_GROUP(Inf_Ass_Squad) {
        name = "Assault Squad";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Squadleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Marksman);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_PzF3);
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(Marksman);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG3);
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit5 {
            side = SIDE_TAG;
            vehicle = VEH(MG5_ass);
            rank = "CORPORAL";
            position[] = {15,-15,0};
        };
        class Unit6 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG5);
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
        class Unit7 {
            side = SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
    };

    class CLASS_GROUP(Inf_WPS_Squad) {
        name = "Weapons Squad";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Squadleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Marksman);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_MRAWS);
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(Ammobearer);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG3);
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit5 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanMRAWS_Ass);
            rank = "CORPORAL";
            position[] = {15,-15,0};
        };
        class Unit6 {
            side = SIDE_TAG;
            vehicle = VEH(Grenadier_G27);
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
        class Unit7 {
            side = SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {20,-20,0};
        };
    };

    class CLASS_GROUP(InfTeam) {
        name = "Fireteam";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
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
            vehicle = VEH(Grenadier);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_RGW90);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(InfTeam_AT) {
        name = "Fireteam (AT)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
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
            vehicle = VEH(RiflemanMRAWS_Ass);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(InfTeam_AA) {
        name = "AntiAir Team";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
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
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(InfSentry) {
        name = "Sentry";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Grenadier);
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Rifleman);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
    };
};
