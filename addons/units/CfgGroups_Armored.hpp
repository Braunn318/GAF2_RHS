class Armored {
    name = "Armored";

    class CLASS_GROUP(TankPlatoon) {
        name = "Tank Platoon";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "CORPORAL";
            position[] = {20,-20,0};
        };
    };

    class CLASS_GROUP(MixPlatoon) {
        name = "Tank Platoon (Combined)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(AA);
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "SERGEANT";
            position[] = {-10,-10,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(AA);
            rank = "CORPORAL";
            position[] = {20,-20,0};
        };
    };


    class CLASS_GROUP(TankSection) {
        name = "Tank Section";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(MixSection) {
        name = "Tank Section (Combined)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(MBT_Leopard_2);
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(AA);
            rank = "SERGEANT";
            position[] = {10,-10,0};
        };
    };

};
