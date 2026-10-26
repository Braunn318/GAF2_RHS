class NVGoggles_OPFOR;

class NVGoggles_GAF2_INV_OPF: NVGoggles_OPFOR
{
  author="braun";
  displayName="NVG Goggles (Invisible)";
  class ItemInfo
  {
    uniformModel="A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
    modelOff="\A3\Weapons_F\DummyBinoc.p3d";
    type = 616;
    hmdType = 0;
  };
};
class optic_Arco_AK_arid_F;

    class gaf2_optic_Elcan: optic_Arco_AK_arid_F {
        displayName = "G95A1 Elcan Optic";
        author = "braun";
        scope = 2;
        // CBA Joint Rails compatibility (references the asdg_OpticRail slot)
        class asdg_offset {
            offset[] = {0, 0, 0}; // Default zero offset; adjust if your model needs positioning tweaks (e.g., {0.1, 0.05, 0})
            // No compatibleItems needed here—it's for the attachment declaring slot support
        };
    };
