
class rhsusf_shemagh_base;
class rhsusf_shemagh2_base;
class rhsusf_shemagh_gogg_base;
class rhsusf_oakley_goggles_base;
class rhsusf_shemagh2_gogg_base;


//WDL
    class rhsusf_shemagh_od: rhsusf_shemagh_base
    {
        identityTypes[] += {"GAF2_Wdl",20};
    };

        class rhsusf_shemagh2_od: rhsusf_shemagh2_base
    {
        identityTypes[] += {"GAF2_Wdl",20};
    };

    class rhsusf_shemagh_gogg_od: rhsusf_shemagh_gogg_base
    {
        identityTypes[] += {"GAF2_Wdl",20};
    };
    class rhsusf_shemagh2_gogg_od: rhsusf_shemagh2_gogg_base
    {
        identityTypes[] += {"GAF2_Wdl",20};
    };

//TAN

    class rhsusf_shemagh_tan: rhsusf_shemagh_base
    {
        identityTypes[] += {"GAF2_Des",20};
    };

        class rhsusf_shemagh2_tan: rhsusf_shemagh2_base
    {
        identityTypes[] += {"GAF2_Des",20};
    };

    class rhsusf_shemagh_gogg_tan: rhsusf_shemagh_gogg_base
    {
        identityTypes[] += {"GAF2_Des",20};
    };

        class rhsusf_shemagh2_gogg_tan: rhsusf_shemagh2_gogg_base
    {
        identityTypes[] += {"GAF2_Des",20};
    };
//BOTH
    class rhsusf_oakley_goggles_clr: rhsusf_oakley_goggles_base 
    {
      identityTypes[] += {"GAF2_Wdl",20,"GAF2_Des",20};
    };

    class rhsusf_oakley_goggles_blk: rhsusf_oakley_goggles_base 
    {
      identityTypes[] += {"GAF2_Wdl",20,"GAF2_Des",20};
    };
