class Support {
    name = "Support";

    class CLASS_GROUP(SUP_HMG) {
        name = "M2 HMG Team";
        side=SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side=SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=SIDE_TAG;
            vehicle = VEH(M2Gunner);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=SIDE_TAG;
            vehicle = VEH(M2Gunner_Ass);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };

    class CLASS_GROUP(SUP_Mk6) {
        name = "Mortar Team";
        side=SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side=SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=SIDE_TAG;
            vehicle =VEH(Mk6);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=SIDE_TAG;
            vehicle = VEH(Mk6_Ass);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
    };

    class CLASS_GROUP(SUP_CLS) {
        name = "CLS (Medic) Team";
        side=SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side=SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=SIDE_TAG;
            vehicle = VEH(Machinegunner_MG3);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };

        class Unit3 {
            side=SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(SUP_EOD) {
        name = "Support Team (Explosives)";
        side=SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side=SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=SIDE_TAG;
            vehicle = VEH(Engineer);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=SIDE_TAG;
            vehicle = VEH(Explosives);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };

        class Unit3 {
            side=SIDE_TAG;
            vehicle = VEH(Explosives);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(SUP_ENG) {
        name = "Support Team (Engineer)";
        side=SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

        class Unit0 {
            side=SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side=SIDE_TAG;
            vehicle = VEH(Engineer);
            rank = "CORPORAL";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side=SIDE_TAG;
            vehicle = VEH(Engineer);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };

        class Unit3 {
            side=SIDE_TAG;
            vehicle = VEH(Engineer);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(SmallTeam_UAV) {
        name = "Small UAV Team";
        side=SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side=SIDE_TAG;
            vehicle = VEH(Teamleader);
        };
        class Unit1 {
            position[] = {5,-5,0};
            rank = "CORPORAL";
            side=SIDE_TAG;
            vehicle = VEH(UAV);
        };
        class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side=SIDE_TAG;
            vehicle = VEH(AR2_Darter);
        };
    };

    class CLASS_GROUP(AttackTeam_UAV) {
        name = "Attack UAV Team";
        side=SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side=SIDE_TAG;
            vehicle = VEH(Teamleader);
        };
        class Unit1 {
            position[] = {5,-5,0};
            rank = "CORPORAL";
            side=SIDE_TAG;
            vehicle =VEH(UAV);
        };
        class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side=SIDE_TAG;
            vehicle =VEH(Eurohawk);
        };
    };

};
