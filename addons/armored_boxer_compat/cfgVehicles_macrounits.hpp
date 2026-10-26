// One line per vehicle. Each line is expanded for every side (macroveh_define_*.hpp) and camo (flk/mlt/trp).
// VEHICULOFIX  (classKey, displayName, crewRole, cargoRole, editorSubcategory, baseClass, magazines, items, weapons)
// VEHICULOBWA3 (same, baseClass is a prefix: flk uses <prefix>Fleck, mlt/trp use <prefix>Tropen)
// VEHICULOFIXX / VEHICULOCAMOX (... same ..., GAF2_EXTRA_<Key>)  - gunners / Eden category, see macros_local.hpp
// editorSubcategory: EdSubcat_Planes, EdSubcat_Helicopters, HelisVanilla, PlanesVanilla ...

VEHICULOCAMOX(Boxer_HMG,GTK Boxer (HMG),Crew,Crew,EdSubcat_APCs,B_GAF2_Boxer_HMG_base_,MAGS_PUMA,ITMS_PUMA,WEAPS_PUMA,GAF2_EXTRA_Boxer_HMG);
VEHICULOCAMOX(Boxer_GMG,GTK Boxer (GMG),Crew,Crew,EdSubcat_APCs,B_GAF2_Boxer_GMG_base_,MAGS_PUMA,ITMS_PUMA,WEAPS_PUMA,GAF2_EXTRA_Boxer_GMG);
VEHICULOCAMOX(Boxer_IFV,GTK Boxer (IFV),Crew,Crew,EdSubcat_APCs,B_GAF2_Boxer_IFV_base_,MAGS_PUMA,ITMS_PUMA,WEAPS_PUMA,GAF2_EXTRA_Boxer_IFV);
VEHICULOCAMOX(Boxer_Medical,GTK Boxer (Medical),Crew,Crew,EdSubcat_APCs,B_GAF2_Boxer_Medical_base_,MAGS_PUMA,ITMS_PUMA,WEAPS_PUMA,GAF2_EXTRA_Boxer_Medical);
VEHICULOCAMOX(Boxer_RCH155,GTK Boxer (RCH 155),Crew,Crew,EdSubcat_Artillery,B_GAF2_Boxer_RCH155_base_,MAGS_PUMA,ITMS_PUMA,WEAPS_PUMA,GAF2_EXTRA_Boxer_RCH155);
