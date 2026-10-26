class Naval {
    name = "Naval";

    class CLASS_GROUP(Naval_SpeedBoat) {
        name = "Sentry Team (Speed Boat)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            side = SIDE_TAG;
            rank = "SERGEANT";
            vehicle = VEH(Teamleader);
        };
        class Unit1 {
            position[] = {-32,-57,0};
            side = SIDE_TAG;
            rank = "PRIVATE";
            vehicle = VEH(Speedboat_Minigun);
        };
    };

    class CLASS_GROUP(DiverTeam) {
        name = "Diver Team";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = SIDE_TAG;
            vehicle = VEH(DiverTL);
        };
        class Unit1 {
            position[] = {5,-5,0};
            rank = "CORPORAL";
            side = SIDE_TAG;
            vehicle = VEH(DiverEXP);
        };
        class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(Diver);
        };
        class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(Diver);
        };
    };

    class CLASS_GROUP(DiverTeam_Boat) {
        name = "Diver Team (Assault Boat)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = SIDE_TAG;
            vehicle = VEH(DiverTL);
        };
        class Unit1 {
            position[] = {5,-5,0};
            rank = "CORPORAL";
            side = SIDE_TAG;
            vehicle = VEH(DiverEXP);
        };
        class Unit2 {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(Diver);
        };
        class Unit3 {
            position[] = {10,-10,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(Diver);
        };
        class Unit4 {
            position[] = {-32,-57,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(Assault_Boat);
        };
    };

    class CLASS_GROUP(DiverTeam_SDV) {
        name = "Diver Team (SDV)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
        rarityGroup = 0.5;

        class Unit0 {
            position[] = {0,0,0};
            rank = "SERGEANT";
            side = SIDE_TAG;
            vehicle = VEH(DiverTL);
        };
        class Unit1 {
            position[] = {5,-5,0};
            rank = "CORPORAL";
            side = SIDE_TAG;
            vehicle = VEH(DiverEXP);
        };
        class Unit2 {
            position[] = {-6,-6,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(Diver);
        };
        class Unit3 {
            position[] = {11,-11,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(Diver);
        };
        class Unit4 {
            position[] = {-16,-16,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(SDV);
        };
        class Unit5 {
            position[] = {21,-21,0};
            rank = "PRIVATE";
            side = SIDE_TAG;
            vehicle = VEH(SDV);
        };
    };
};
