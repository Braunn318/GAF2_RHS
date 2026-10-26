class SpecOps {
    name = "KSK (Special forces)";

    class CLASS_GROUP(KSK_Sniper) {
        name = "Sniper Team";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Sniper_G29);
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Spotter);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
    };

    class CLASS_GROUP(KSK_Sentry) {
        name = "Recon Sentry";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(recon_Marksman);
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Recon_Pioneer);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
    };

    class CLASS_GROUP(KSK_Patrol) {
        name = "Recon Patrol";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(recon_TL);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(recon_Medic);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(Recon_Pioneer);
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(recon_Marksman);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(KSK_DiverTeam) {
        name = "Diver Team";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(DiverTL);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(DiverEXP);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(Diver);
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(Diver);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
    };

    class CLASS_GROUP(KSK_Fireteam) {
        name = "Recon Fireteam";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(recon_TL);
            rank = "SERGEANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(recon_Medic);
            rank = "PRIVATE";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(Recon_Pioneer);
            rank = "CORPORAL";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(recon_Marksman);
            rank = "PRIVATE";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(recon_RGW90);
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
    };
};
