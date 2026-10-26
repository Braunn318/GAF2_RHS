class Mechanized {
    name = "Mechanized";

    class CLASS_GROUP(MechInfSquad) {
        name = "Mechanized Squad (1xPuma)";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(IFV_Puma);
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

    class CLASS_GROUP(MechInfSection) {
        name = "Mechanized Section";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(IFV_Puma);
            rank = "CORPORAL";
            position[] = {0,0,0};
        };
        class Unit1 {
            side = SIDE_TAG;
            vehicle = VEH(IFV_Puma);
            rank = "CORPORAL";
            position[] = {16,-14,0};
        };
        class Unit2 {
            side = SIDE_TAG;
            vehicle = VEH(Squadleader);
            rank = "LIEUTENANT";
            position[] = {-16,-16,0};
        };
        class Unit3 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {27,-27,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(Grenadier);
            rank = "CORPORAL";
            position[] = {-27,-27,0};
        };
        class Unit5 {
            side = SIDE_TAG;
            vehicle = VEH(Rifleman);
            rank = "PRIVATE";
            position[] = {31,-31,0};
        };
        class Unit6 {
            side = SIDE_TAG;
            vehicle = VEH(Teamleader);
            rank = "SERGEANT";
            position[] = {-31,-31,0};
        };
        class Unit7 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG3);
            rank = "CORPORAL";
            position[] = {37,-37,0};
        };
        class Unit8 {
            side = SIDE_TAG;
            vehicle = VEH(MachineGunner_MG5);
            rank = "CORPORAL";
            position[] = {-37,-37,0};
        };
        class Unit9 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_MRAWS);
            rank = "PRIVATE";
            position[] = {40,-40,0};
        };
        class Unit10 {
            side = SIDE_TAG;
            vehicle = VEH(Rifleman2);
            rank = "PRIVATE";
            position[] = {-40,-40,0};
        };
    };

};
