class Motorized {
    name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";


    class CLASS_GROUP(MotInf_GM_Fuchs) {
        name = "Motorized Squad Fuchs";
        side = SIDE_TAG;
        faction = FACTION_ID;
        icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

        class Unit0 {
            side = SIDE_TAG;
            vehicle = VEH(Fuchs_recon);
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
            vehicle = VEH(Grenadier);
            rank = "CORPORAL";
            position[] = {5,-4,0};
        };
        class Unit4 {
            side = SIDE_TAG;
            vehicle = VEH(RiflemanAT_RGW90);
            rank = "PRIVATE";
            position[] = {5,-6,0};
        };
        class Unit5 {
            side = SIDE_TAG;
            vehicle = VEH(CLS);
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
    };
};
