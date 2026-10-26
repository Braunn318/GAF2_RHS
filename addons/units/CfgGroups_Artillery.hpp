class Artillery {
    name = "Artillery";

    class CLASS_GROUP(SPGPlatoon_Scorcher) {
        name = "Sholef Platoon";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "LIEUTENANT";
            side = SIDE_TAG;
            vehicle = VEH(Scorcher);
        };
        class Unit1 {
            position[] = {10,-10,0};
            rank = "SERGEANT";
            side = SIDE_TAG;
            vehicle = VEH(Scorcher);
        };
        class Unit2 {
            position[] = {-10,-10,0};
            rank = "SERGEANT";
            side = SIDE_TAG;
            vehicle = VEH(Scorcher);
        };
        class Unit3 {
            position[] = {20,-20,0};
            rank = "CORPORAL";
            side = SIDE_TAG;
            vehicle = VEH(Scorcher);
        };
    };

    class CLASS_GROUP(SPGSection_Scorcher) {
        name = "Sholef Section";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "LIEUTENANT";
            side = SIDE_TAG;
            vehicle = VEH(Scorcher);
        };
        class Unit1 {
            position[] = {10,-10,0};
            rank = "SERGEANT";
            side = SIDE_TAG;
            vehicle = VEH(Scorcher);
        };
    };

    class CLASS_GROUP(SPGSection_MLRS) {
        name = "MLRS Section";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "LIEUTENANT";
            side = SIDE_TAG;
            vehicle = VEH(MBT_01);
        };
        class Unit1 {
            position[] = {10,-10,0};
            rank = "SERGEANT";
            side = SIDE_TAG;
            vehicle = VEH(MBT_01);
        };
    };

    class CLASS_GROUP(artillery_pzh2000_section) {
        name = "PzH2000 Section";
        side = 1;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = 1;
            vehicle = VEH(PzH2000);
        };
        class Unit1 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = 1;
            vehicle = VEH(PzH2000);
        };
    };
};
