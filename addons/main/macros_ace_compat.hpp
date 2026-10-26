#define ACE_NoGlasses \
ACE_OverlayCracked = ""
//Standard glasses
#define ACE_GLASSES_AMBER \
ACE_Color[] = {1,0.5,0}; \
ACE_TintAmount  = 6.0; \
ACE_Resistance = 1; \
ACE_Protection = 0

#define ACE_GLASSES_BLACK \
ACE_Color[] = {0,0,0}; \
ACE_TintAmount  = 16.0; \
ACE_Resistance = 1; \
ACE_Protection = 0

#define ACE_GLASSES_CLEAR \
ACE_Color[] = {0,0,-1}; \
ACE_TintAmount  = 4.0; \
ACE_Resistance = 1; \
ACE_Protection = 0

//Combat Goggles
#define ACE_COMBAT_GOGGLES_AMBER \
ACE_Color[] = {1,0.5,0}; \
ACE_TintAmount  = 6.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_Overlay = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa); \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_OverlayCracked = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa)

#define ACE_COMBAT_GOGGLES_BLACK \
ACE_Color[] = {0,0,0}; \
ACE_TintAmount  = 16.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_Overlay = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa); \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_OverlayCracked = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa)

#define ACE_COMBAT_GOGGLES_BLACK_TINT \
ACE_Color[] = {0,0,0}; \
ACE_TintAmount  = 10.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_Overlay = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa); \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_OverlayCracked = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa)

#define ACE_COMBAT_GOGGLES_BLACK_FADED \
ACE_Color[] = {0,0,0}; \
ACE_TintAmount  = 8.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_Overlay = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa); \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_OverlayCracked = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa)

#define ACE_COMBAT_GOGGLES_CLEAR \
ACE_Color[] = {0,0,-1}; \
ACE_TintAmount  = 4.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_Overlay = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa); \
ACE_OverlayCracked = QUOTE(\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa)
//CBRN Masks 1 overlay closer
#define ACE_CBRN_1_BLACK \
ACE_Color[] = {0,0,0}; \
ACE_TintAmount  = 16.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_Overlay = QUOTE(a3\ui_f_enoch\data\objects\data\optics_apr_ca.paa); \
ACE_OverlayCracked = ""; \
ACE_Overlay_Angle = 180

#define ACE_CBRN_1_CLEAR \
ACE_Color[] = {0,0,-1}; \
ACE_TintAmount  = 4.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_Overlay = QUOTE(a3\ui_f_enoch\data\objects\data\optics_apr_ca.paa); \
ACE_OverlayCracked = ""; \
ACE_Overlay_Angle = 180
//CBRN Masks 2 overlay further
#define ACE_CBRN_2_BLACK \
ACE_Color[] = {0,0,0}; \
ACE_TintAmount  = 16.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_Overlay = QUOTE(a3\ui_f_enoch\data\objects\data\optics_APR_02_CA.paa); \
ACE_OverlayCracked = ""; \
ACE_Overlay_Angle = 180

#define ACE_CBRN_2_CLEAR \
ACE_Color[] = {0,0,-1}; \
ACE_TintAmount  = 4.0; \
ACE_Resistance = 2; \
ACE_Protection = 1; \
ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa"; \
ACE_Overlay = QUOTE(a3\ui_f_enoch\data\objects\data\optics_APR_02_CA.paa); \
ACE_OverlayCracked = ""; \
ACE_Overlay_Angle = 180

//Hearing protection
#define ACE_HEARPROTECT_CREWHELM \
ace_hearing_protection = 0.85;  \
ace_hearing_lowerVolume = 0.6; \
ace_hearing_hasEHP = 0

#define ACE_HEARPROTECT_EARMUFF \
ace_hearing_protection = 0.75;  \
ace_hearing_lowerVolume = 0.5; \
ace_hearing_hasEHP = 0

#define ACE_HEARPROTECT_ONEPELT \
ace_hearing_protection = 0.40;  \
ace_hearing_hasEHP = 0

#define ACE_HEARPROTECT_PELTOR \
ace_hearing_protection = 0.75;  \
ace_hearing_lowerVolume = 0.2; \
ace_hearing_hasEHP = 1

