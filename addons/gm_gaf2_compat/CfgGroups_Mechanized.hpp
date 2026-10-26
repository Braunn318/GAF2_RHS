class Mechanized {
    name = "Mechanized";

    class CLASS_GROUP(MechMarderSquad) {
        name = "Mechanized Squad (1xMarder)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Marder);
            rank = "LIEUTENANT";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(Squadleader);
            rank = "SERGEANT";
            position[] = {5,-5,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(Grenadier_G27);
            rank = "PRIVATE";
            position[] = {-5,-5,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_PzF3);
            rank = "CORPORAL";
            position[] = {10,-10,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(Marksman);
            rank = "PRIVATE";
            position[] = {-10,-10,0};
        };
        class Unit5 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG4);
            rank = "CORPORAL";
            position[] = {15,-15,0};
        };
        class Unit6 {
            side = SIDE_TAG;
            vehicle = VEH(CLS);
            rank = "PRIVATE";
            position[] = {-15,-15,0};
        };
    };


};
