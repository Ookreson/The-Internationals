class DefaultEventHandlers;

class CfgFactionClasses
{
	class O_F_MERCS
	{
		displayName = "Trigram";
		author = "Futura Miles";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 8;
		side = 0; // 1 = BLUFOR, 2 = INDFOR, 0 = OPFOR
	};
	class I_F_Mercs
	{
		displayName = "Trigram";
		author = "Futura Miles";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 8;
		side = 2; // 1 = BLUFOR, 2 = INDFOR, 0 = OPFOR
	};
	class B_F_Mercs
	{
		displayName = "Trigram";
		author = "Futura Miles";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 8;
		side = 1; // 1 = BLUFOR, 2 = INDFOR, 0 = OPFOR
	};

	class O_F_SEMC
	{
		displayName = "Granida";
		author = "Futura Miles";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 8;
		side = 0; // 1 = BLUFOR, 2 = INDFOR, 0 = OPFOR
	};
	class I_F_SEMC
	{
		displayName = "Granida";
		author = "Futura Miles";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 8;
		side = 2; // 1 = BLUFOR, 2 = INDFOR, 0 = OPFOR
	};
	class B_F_SEMC
	{
		displayName = "Granida";
		author = "Futura Miles";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 8;
		side = 1; // 1 = BLUFOR, 2 = INDFOR, 0 = OPFOR
	};
};

class CfgVehicleClasses
{
	class O_F_TropMercs
	{
		displayName = "Men - Tropical"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the VehicleClass is different. Makes it work with zeus
	};
	class B_F_TropMercs
	{
		displayName = "Men - Tropical"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the VehicleClass is different. Makes it work with zeus
	};
	class I_F_TropMercs
	{
		displayName = "Men - Tropical";
	};

	class O_F_TropPMC
	{
		displayName = "Men - Tropical"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the VehicleClass is different. Makes it work with zeus
	};
	class O_F_TropPMC
	{
		displayName = "Men - Tropical";
	};
	class O_F_TropPMC
	{
		displayName = "Men - Tropical";
	};
	
};

class CfgVehicles {
	class I_Soldier_base_F;
	class I_Soldier_base_F_2 : I_Soldier_base_F
	{
		class EventHandlers;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
//OPFOR MERCS
    class O_SEA_Base_Camo : I_Soldier_base_F_2
	{
		_generalMacro = "O_SEA_Base_Camo"
        author = "Futura Miles";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;  		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		faction = "O_F_MERCS";
		side = 0;
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
		genericNames = "ChineseMen";
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        cost = 70000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.4;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.0;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.5};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_Camo_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
        canDeactivateMines = false;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
        backpack = "";        // Which backpack the character is wearing
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_SEA_Base_C_od : O_SEA_Base_Camo
	{
		_generalMacro = "O_SEA_Base_C_od"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_C_od_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_od_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		
		};
	class O_SEA_Base_Ctan : O_SEA_Base_Camo
	{
		_generalMacro = "O_SEA_Base_Ctan"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_Ctan_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_tan_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		};
	class O_SEA_Base_lite : O_SEA_Base_Camo
	{
		_generalMacro = "I_Soldier_base_F"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_lite_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\MOH_TSHIRT.paa","VSM_M81\Data\VSM_M81_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		allowedHeadgear[] = {"VSM_Bowman","VSM_Bowman_cap_Black","VSM_Bowman_cap_Green","H_Bandanna_camo","H_Shemag_olive_hs","H_HeadSet_black_F"};
		headgearList[] = {"VSM_Bowman",0.20,"VSM_Bowman_cap_Black",0.20,"VSM_Bowman_cap_Green",0.20,"H_Bandanna_camo",0.20,"H_Shemag_olive_hs",0.20,"H_HeadSet_black_F",0.20,};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
//OPFOR PMC
	class O_PMC_Base_Camo : O_SEA_Base_Camo
	{
		_generalMacro = "I_PMC_Base_Camo"
        author = "Futura Miles";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;  		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		faction = "O_F_SEMC";
		side = 0;
        identityTypes[] =  {"male05eng","Head_White","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
		genericNames = "NATOMen";
        displayName = "Contractor (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        cost = 100000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.4;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.0;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.5};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_MulticamTropic_Crye_Uniform_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo","Insignia"};                    // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_MulticamTropic\Data\VSM_ARD_MulticamTropic_1.paa"};		 // The textures for the selections defined above. If empty, no texture is used.
		hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD.RVMAT"};
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Black_OPS","VSM_MulticamTropic_OPS","VSM_OD_spray_OPS","VSM_OGA_OD_OPS","VSM_Black_OPS_2","VSM_MulticamTropic_OPS_2","VSM_OD_spray_OPS_2","VSM_OGA_OD_OPS_2"};
		headgearList[] = {"VSM_Black_OPS",0.20,"VSM_MulticamTropic_OPS",0.20,"VSM_OD_spray_OPS",0.20,"VSM_OGA_OD_OPS",0.20,"VSM_Black_OPS_2",0.20,"VSM_MulticamTropic_OPS_2",0.20,"VSM_OD_spray_OPS_2",0.20,"VSM_OGA_OD_OPS_2"0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
        canDeactivateMines = false;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
        backpack = "";        // Which backpack the character is wearing
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
		linkedItems[] = {"VSM_RAV_operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		RespawnLinkedItems[] = {"VSM_RAV_operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class O_PMC_Base_C_od_p : O_PMC_Base_Camo
	{
		_generalMacro = "O_PMC_Base_C_od"
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        uniformClass = "VSM_M81_BDU_C_od_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelectionsTextures[] = {"VSM_MulticamTropic\Data\VSM_ARD_MulticamTropic_od_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class O_PMC_Base_C_od_s : O_PMC_Base_Camo
	{
		_generalMacro = "O_PMC_Base_C_od"
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        uniformClass = "VSM_M81_BDU_C_od_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelectionsTextures[] = {"VSM_MulticamTropic\Data\VSM_ARD_MulticamTropic_od_shirt_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class O_PMC_Base_C_gy_p : O_PMC_Base_Camo
	{
		_generalMacro = "O_PMC_Base_C_od"
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        uniformClass = "VSM_M81_BDU_C_od_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelectionsTextures[] = {"VSM_MulticamTropic\Data\VSM_ARD_MulticamTropic_grey_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class O_PMC_Base_C_gy_s : O_PMC_Base_Camo
	{
		_generalMacro = "O_PMC_Base_C_od"
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        uniformClass = "VSM_M81_BDU_C_od_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelectionsTextures[] = {"VSM_MulticamTropic\Data\VSM_ARD_MulticamTropic_grey_shirt_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
	class O_PMC_Base_lite : O_PMC_Base_Camo
	{
		_generalMacro = "O_PMC_Base_C_od"
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        uniformClass = "VSM_M81_BDU_C_od_OPFOR";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelectionsTextures[] = {"VSM_MulticamTropic\Data\MOH_TSHIRT.paa","VSM_MulticamTropic\Data\VSM_MulticamTropic_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Bowman_cap_Black","VSM_Bowman_cap_Tan","VSM_Bowman_cap_Green","Peltor_OD","VSM_Beanie_OD","VSM_Beanie_Black"};
		headgearList[] = {"VSM_Bowman_cap_Black",0.20,"VSM_Bowman_cap_Tan",0.20,"VSM_Bowman_cap_Green",0.20,"Peltor_OD",0.20,"VSM_Beanie_OD",0.20,"VSM_Beanie_Black",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};
//BLUFOR MERCS

    class B_SEA_Base_Camo : I_Soldier_base_F_2
	{
		_generalMacro = "I_Soldier_base_F"
        author = "Futura Miles";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;  		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		faction = "B_F_MERCS";
		side = 1;
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
		genericNames = "ChineseMen";
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        cost = 70000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.4;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.0;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.5};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_Camo_BLUFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
        canDeactivateMines = false;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
        backpack = "";        // Which backpack the character is wearing
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_SEA_Base_C_od : B_SEA_Base_Camo
	{
		_generalMacro = "I_Soldier_base_F"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_C_od_BLUFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_od_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		};
	class B_SEA_Base_Ctan : B_SEA_Base_Camo
	{
		_generalMacro = "I_Soldier_base_F"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_Ctan_BLUFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_tan_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		};
	class B_SEA_Base_lite : B_SEA_Base_Camo
	{
		_generalMacro = "I_Soldier_base_F"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_lite_BLUFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\MOH_TSHIRT.paa","VSM_M81\Data\VSM_M81_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		allowedHeadgear[] = {"VSM_Bowman","VSM_Bowman_cap_Black","VSM_Bowman_cap_Green","H_Bandanna_camo","H_Shemag_olive_hs","H_HeadSet_black_F"};
		headgearList[] = {"VSM_Bowman",0.20,"VSM_Bowman_cap_Black",0.20,"VSM_Bowman_cap_Green",0.20,"H_Bandanna_camo",0.20,"H_Shemag_olive_hs",0.20,"H_HeadSet_black_F",0.20,};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};

//INDFOR MERCS

    class I_SEA_Base_Camo : I_Soldier_base_F_2
	{
		_generalMacro = "I_Soldier_base_F"
        author = "Futura Miles";         // The name of the author of the asset, which is displayed in the editor.
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;  		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		faction = "I_F_MERCS";
		side = 2;
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
		genericNames = "ChineseMen";
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        cost = 70000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.4;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.0;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.5};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_Camo_INDFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
        canDeactivateMines = false;              // Can this character deactivate mines?
        engineer = false;                        // Can this character repair vehicles?
        attendant = 0;                          // Can this character heal soldiers?
        icon = "iconMan";               // If a character has a special role, a special icon shall be used.
        picture = "";              // The same as above, but for the squad picture.
        backpack = "";        // Which backpack the character is wearing
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_SEA_Base_C_od : I_SEA_Base_Camo
	{
		_generalMacro = "I_Soldier_base_F"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_C_od_INDFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_od_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		};
	class I_SEA_Base_Ctan : I_SEA_Base_Camo
	{
		_generalMacro = "I_Soldier_base_F"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_Ctan_INDFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\VSM_M81_BDU.paa","VSM_M81\Data\VSM_M81_tan_pants_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		headgearProbability = 100;
		allowedHeadgear[] = {"VSM_Mich2000_CamoSprayOD","VSM_Mich2000_OGA_OD","VSM_Mich2000_M81","VSM_Mich2000_2_CamoSprayOD","VSM_Mich2000_2_OGA_OD","VSM_Mich2000_2_M81"};
		headgearList[] = {"VSM_Mich2000_CamoSprayOD",0.20,"VSM_Mich2000_OGA_OD",0.20,"VSM_Mich2000_M81",0.20,"VSM_Mich2000_2_CamoSprayOD",0.20,"VSM_Mich2000_2_OGA_OD",0.20,"VSM_Mich2000_2_M81",0.20};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		};
	class I_SEA_Base_lite : I_SEA_Base_Camo
	{
		_generalMacro = "I_Soldier_base_F"
        identityTypes[] =  {"languagechi_f","Head_Asian","G_GUERIL_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "Mercenary (Unarmed)";        // The name of the soldier, which is displayed in the editor.
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";        // The path to the model this character uses.
        uniformClass = "VSM_M81_BDU_lite_INDFOR";                          // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"Camo1","camo2"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"VSM_M81\Data\MOH_TSHIRT.paa","VSM_M81\Data\VSM_M81_1.paa"};        // The textures for the selections defined above. If empty, no texture is used.
		allowedHeadgear[] = {"VSM_Bowman","VSM_Bowman_cap_Black","VSM_Bowman_cap_Green","H_Bandanna_camo","H_Shemag_olive_hs","H_HeadSet_black_F"};
		headgearList[] = {"VSM_Bowman",0.20,"VSM_Bowman_cap_Black",0.20,"VSM_Bowman_cap_Green",0.20,"H_Bandanna_camo",0.20,"H_Shemag_olive_hs",0.20,"H_HeadSet_black_F",0.20,};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
	};

//Main Mercs Start here.  ^^^^unarmed Base Mercs Above

	class O_SEA_AAR : O_SEA_Base_C_od //Opfor Asst. Autorifleman
	{
		displayName = "Asst. Autorifleman";
		cost = 250000;
		camouflage = 1.5;
		sensitivity = 1.9;
		uniform = "VSM_M81_BDU_C_od_OPFOR";
		backpack = "VSM_OGA_OD_Backpack_Kitbag_AAR";
		role = "Assistant";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_AAR : O_SEA_AAR //Blufor Asst. Autorifleman
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_C_od_BLUFOR";
	};
	class I_SEA_AAR : O_SEA_AAR //Indfor Asst. Autorifleman
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_C_od_INDFOR";

	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_AR : O_SEA_Base_Camo //Opfor Autorifleman
	{
		displayName = "Autorifleman";
		cost = 200000;
		camouflage = 1.5;
		sensitivity = 1.9;
		icon = "iconManMG";
		role = "MachineGunner";
		uniform = "VSM_M81_BDU_Camo_OPFOR";
		backpack = "";
		weapons[] = {"hlc_rifle_g3ka4_LMG","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_LMG","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_M_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_AR : O_SEA_AR //Blufor Autorifleman
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Camo_BLUFOR";
	};
	class I_SEA_AR : O_SEA_AR //Indfor Autorifleman
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Camo_INDFOR";
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_CE : O_SEA_Base_Ctan //Opfor Combat Engineer
	{
		displayName = "Combat Engineer";
		cost = 250000;
		camouflage = 1.5;
		sensitivity = 1.9;
		canDeactivateMines = true;
		engineer = true;          
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		uniform = "VSM_M81_BDU_Ctan_OPFOR";
		backpack = "VSM_OGA_OD_Backpack_Kitbag_ENG";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class B_SEA_CE : O_SEA_CE //Blufor Combat Engineer
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Ctan_BLUFOR";
	};
	class I_SEA_CE : O_SEA_CE //Indfor Combat Engineer
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Ctan_INDFOR";
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_CLS : O_SEA_Base_C_od //Opfor Combat Medic
	{
		displayName = "Combat Medic";
		cost = 300000;
		camouflage = 1.5;
		sensitivity = 1.9;
		attendant = 1;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		uniform = "VSM_M81_BDU_C_od_OPFOR";
		backpack = "VSM_OGA_OD_Backpack_Compact_CLS";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_RAV_operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_RAV_operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_CLS : O_SEA_CLS //Blufor Combat Medic
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_C_od_BLUFOR";
	};
	class I_SEA_CLS : O_SEA_CLS //Indfor Combat Medic
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_C_od_INDFOR";	
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_DEMO : O_SEA_Base_Ctan //Opfor Demo Specialist
	{
		displayName = "Demo Specialist";
		cost = 250000;
		camouflage = 1.5;
		sensitivity = 1.9;
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		canDeactivateMines = true;
		engineer = false;
		uniform = "VSM_M81_BDU_Ctan_OPFOR";
		backpack = "VSM_OGA_OD_Backpack_Kitbag_DMO";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_DEMO : O_SEA_DEMO //Blufor Demo Specialist
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Ctan_BLUFOR";
	};
	class I_SEA_DEMO : O_SEA_DEMO //Indfor Demo Specialist
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Ctan_INDFOR";
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_GREN : O_SEA_Base_Camo //Opfor Grenadier
	{
		displayName = "Grenadier";
		cost = 200000;
		camouflage = 1.5;
		sensitivity = 1.9;
		role = "Grenadier";
		uniform = "VSM_M81_BDU_Camo_OPFOR";
		backpack = "";
		weapons[] = {"HLC_Rifle_g3ka4_GL_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Chemlight_blue","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareGreen_F","1Rnd_SmokeBlue_Grenade_shell","1Rnd_HE_Grenade_shell","hlc_20rnd_762x51_T_G3","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","Chemlight_blue","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareGreen_F","1Rnd_SmokeBlue_Grenade_shell","1Rnd_HE_Grenade_shell","hlc_20rnd_762x51_T_G3","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_RAV_operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_RAV_operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_GREN : O_SEA_GREN //Opfor Grenadier
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Camo_BLUFOR";
	};
	class I_SEA_GREN : O_SEA_GREN //Opfor Grenadier
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Camo_BLUFOR";	
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_HG : O_SEA_Base_C_od //Opfor Heavy Gunner
	{
		displayName = "Heavy Gunner";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		icon = "iconManMG";
		role = "MachineGunner";
		uniform = "VSM_M81_BDU_C_od_OPFOR";
		backpack = "";
		weapons[] = {"hlc_lmg_MG3KWS_g_SEA","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"hlc_lmg_MG3KWS_g_SEA","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_250Rnd_762x51_T_MG3","hlc_250Rnd_762x51_M_MG3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_250Rnd_762x51_T_MG3","hlc_250Rnd_762x51_M_MG3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_MG_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_MG_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};	
	class B_SEA_HG : O_SEA_HG //Opfor Heavy Gunner
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_C_od_BLUFOR";
	};		
	class I_SEA_HG : O_SEA_HG //Opfor Heavy Gunner
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_C_od_INDFOR";
	};			
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_MARK : O_SEA_Base_Camo //Opfor Marksman
	{
		displayName = "Marksman";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		role = "Marksman";
		allowedHeadgear[] = {"VSM_Bowman","VSM_Bowman_cap_Black","VSM_Bowman_cap_Green","H_Bandanna_camo","H_Shemag_olive_hs","H_HeadSet_black_F"};
		headgearList[] = {"VSM_Bowman",0.20,"VSM_Bowman_cap_Black",0.20,"VSM_Bowman_cap_Green",0.20,"H_Bandanna_camo",0.20,"H_Shemag_olive_hs",0.20,"H_HeadSet_black_F",0.20,};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		uniform = "O_SEA_Base_Camo";
		backpack = "";
		weapons[] = {"hlc_rifle_g3sg1ris_Kahlia","hgun_Pistol_01_F","Binocular","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3sg1ris_Kahlia","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_MDim_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_MARK : O_SEA_MARK //Blufor Marksman
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Camo_BLUFOR";	
	};
	class I_SEA_MARK : O_SEA_MARK //Indfor Marksman
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Camo_INDFOR";
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_MERC : O_SEA_Base_C_od //Opfor Mercenary
	{
		displayName = "Mercenary";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		role = "Rifleman";
		uniform = "VSM_M81_BDU_C_od_OPFOR";
		backpack = "";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"SmokeShellRed","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","MiniGrenade","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","MiniGrenade","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"SmokeShellRed","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","MiniGrenade","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","MiniGrenade","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};	
	class B_SEA_MERC : O_SEA_MERC //Blufor Mercenary
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_C_od_BLUFOR";
	};	
	class I_SEA_MERC : O_SEA_MERC //Indfor Mercenary
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_C_od_INDFOR";
	};	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_AT : O_SEA_Base_Camo //Opfor Mercenary AT
	{
		displayName = "Mercenary(AT)";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		icon = "iconManAT";
		role = "MissileSpecialist";
		uniform = "VSM_M81_BDU_Camo_OPFOR";
		backpack = "VSM_OGA_OD_Backpack_Kitbag_AT";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","launch_RPG7_F","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_SightLight","launch_RPG7_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3","RPG7_F"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3","RPG7_F"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_RAV_operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_RAV_operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_AT : O_SEA_AT //Blufor Mercenary AT
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Camo_BLUFOR";	
	};
	class I_SEA_AT : O_SEA_AT //Indfor Mercenary AT
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Camo_INDFOR";	
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_MINE : O_SEA_Base_Ctan //Opfor Mine Specialist
	{
		displayName = "Mine Specialist";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		canDeactivateMines = true;
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureRepair";
		uniform = "VSM_M81_BDU_Ctan_OPFOR";
		backpack = "VSM_OGA_OD_Backpack_Kitbag_MNE";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_MINE : O_SEA_MINE //Blufor Mine Specialist
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Ctan_BLUFOR";
	};
	class I_SEA_MINE : O_SEA_MINE //Indfor Mine Specialist
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Ctan_INDFOR";
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_MECH : O_SEA_Base_Ctan //Opfor Repair Specialist
	{
		displayName = "Field Mechanic";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		engineer = true;
		canDeactivateMines = false;
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		uniform = "VSM_M81_BDU_Ctan_OPFOR";
		backpack = "VSM_OGA_OD_Backpack_Compact_REP";
		weapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_SightLight","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};	
	class B_SEA_MECH : O_SEA_MECH //Blufor Repair Specialist
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Ctan_BLUFOR";	
	};	
	class I_SEA_MECH : O_SEA_MECH //Indfor Repair Specialist
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_C_tan_INDFOR";	
	};	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_RECN : O_SEA_Base_lite //Opfor Scout
	{
		displayName = "Scout";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		uniform = "VSM_M81_BDU_lite_OPFOR";
		backpack = "";
		weapons[] = {"hlc_rifle_g3ka4_SightLightSnds","hgun_Pistol_01_F","Binocular","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_SightLightSnds","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","HandGrenade","MiniGrenade","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","HandGrenade","MiniGrenade","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};		
	};
	class B_SEA_RECN : O_SEA_RECN //Blufor Scout
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_lite_BLUFOR";	
	};
	class I_SEA_RECN : O_SEA_RECN //Indfor Scout
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_lite_INDFOR";		
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_SS : O_SEA_Base_Camo //Opfor Sharpshooter
	{
		displayName = "Sharpshooter";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		allowedHeadgear[] = {"VSM_Bowman","VSM_Bowman_cap_Black","VSM_Bowman_cap_Green","H_Bandanna_camo","H_Shemag_olive_hs","H_HeadSet_black_F"};
		headgearList[] = {"VSM_Bowman",0.20,"VSM_Bowman_cap_Black",0.20,"VSM_Bowman_cap_Green",0.20,"H_Bandanna_camo",0.20,"H_Shemag_olive_hs",0.20,"H_HeadSet_black_F",0.20,};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		uniform = "VSM_M81_BDU_Camo_OPFOR";
		backpack = "";
		weapons[] = {"hlc_rifle_PSG1A1_RIS_Kahlia","hgun_Rook40_F","Binocular","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_PSG1A1_RIS_Kahlia","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","SmokeShell","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","SmokeShell","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		
	};
	class B_SEA_SS : O_SEA_SS //Blufor Sharpshooter
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_Camo_BLUFOR";	
	};
	class I_SEA_SS : O_SEA_SS //Indfor Sharpshooter
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_Camo_INDFOR";
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_SL : O_SEA_Base_C_od //Opfor Squad Leader
	{
		displayName = "Squad Leader";
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		icon = "iconManLeader";
		role = "Grenadier";
		uniform = "VSM_M81_BDU_C_od_OPFOR";
		backpack = "";
		weapons[] = {"hlc_rifle_g3ka4_3XSightLight","hgun_Pistol_01_F","Laserdesignator","Throw","Put"};
		respawnweapons[] = {"hlc_rifle_g3ka4_3XSightLight","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","SmokeShellPurple","SmokeShellOrange","Laserbatteries","Laserbatteries"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","SmokeShellPurple","SmokeShellOrange","Laserbatteries","Laserbatteries"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_FAPC_Operator_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_FAPC_Operator_M81","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_SL : O_SEA_SL //Blufor Squad Leader
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_C_od_BLUFOR";	
	};
	class I_SEA_SL : O_SEA_SL //Indfor Squad Leader
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_C_od_INDFOR";
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class O_SEA_TL : O_SEA_Base_C_od //Opfor Team Leader
	{
		displayName = "Team Leader"
		cost = 75000;
		camouflage = 1.5;
		sensitivity = 1.9;
		icon = "iconManLeader"
		role = "Grenadier";
		uniform = "VSM_M81_BDU_C_od_OPFOR";
		backpack = "";
		weapons[] = {"HLC_Rifle_g3ka4_GL_3XSightLight","hgun_Pistol_01_F","Binocular","Throw","Put"};
		respawnweapons[] = {"HLC_Rifle_g3ka4_GL_3XSightLight","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareGreen_F","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","1Rnd_SmokeRed_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","hlc_20rnd_762x51_T_G3"};
		respawnmagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellRed","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","UGL_FlareGreen_F","MiniGrenade","MiniGrenade","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","1Rnd_SmokeRed_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","hlc_20rnd_762x51_T_G3"};
		items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_RAV_operator_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_RAV_operator_M81","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class B_SEA_TL : O_SEA_TL //Blufor Team Leader
	{
		faction = "B_F_MERCS";
		side = 1;
		uniformClass = "VSM_M81_BDU_C_od_BLUFOR";
	};	
	class I_SEA_TL : O_SEA_TL //Indfor Team Leader
	{
		faction = "I_F_MERCS";
		side = 2;
		uniformClass = "VSM_M81_BDU_C_od_INDFOR";	
	};


	//backpacks here
	class VSM_OGA_OD_Backpack_Kitbag;
	class VSM_OGA_OD_Backpack_Compact;
	class VSM_M81_Backpack_Compact;
	class VSM_OGA_OD_Backpack_Compact;
	
	//Asst Autorifleman Backpack
	class VSM_OGA_OD_Backpack_Kitbag_AAR : VSM_OGA_OD_Backpack_Kitbag
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(hlc_50rnd_762x51_M_G3,2);
			mag_xx(hlc_50rnd_762x51_MDIM_G3,2);
			mag_xx(hlc_100Rnd_762x51_M_MG3,2);
		};
		class TransportItems
		{
			item_xx(optic_MRCO,1);
			item_xx(sma_gemtech_one_blk,1);
			item_xx(muzzle_snds_B,1);
			item_xx(bipod_02_F_blk,1);
		};
	};
	//Combat Engineer Backpack
	class VSM_OGA_OD_Backpack_Kitbag_ENG : VSM_OGA_OD_Backpack_Kitbag
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
			mag_xx(SLAMDirectionalMine_Wire_Mag,1);
			mag_xx(DemoCharge_Remote_Mag,4);
		};
		class TransportItems
		{
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
		};
	};
	//Combat Medic Backpack
	class VSM_OGA_OD_Backpack_Compact_CLS : VSM_OGA_OD_Backpack_Compact
	{
		scope = 1;
		class TransportItems
		{
			item_xx(Medikit,1);
		};
	};
	//Demo Specialist Backpack
	class VSM_OGA_OD_Backpack_Kitbag_DMO : VSM_OGA_OD_Backpack_Kitbag
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
			mag_xx(DemoCharge_Remote_Mag,3);
			mag_xx(SatchelCharge_Remote_Mag,1);
		};
		class TransportItems
		{
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
		};
	};
	//AT Mercenary Backpack	
	class VSM_OGA_OD_Backpack_Kitbag_AT : VSM_OGA_OD_Backpack_Kitbag
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(RPG7_F,3);
		};
	};
	//Mine Specialist/Saboteur Backpack
	class VSM_OGA_OD_Backpack_Kitbag_MNE : VSM_OGA_OD_Backpack_Kitbag
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(APERSMineDispenser_Mag,2);
			mag_xx(APERSTripMine_Wire_Mag,2);
			mag_xx(SLAMDirectionalMine_Wire_Mag,2);
			mag_xx(APERSMine_Range_Mag,4);
		};
		class TransportItems
		{
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
		};
	};
	//Repair Specialist Backpack
	class VSM_OGA_OD_Backpack_Compact_REP : VSM_OGA_OD_Backpack_Compact
	{
		scope = 1;
		class TransportItems
		{
			item_xx(ToolKit,1);
		};
	};
};

class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;

class CfgWeapons{
	class ItemCore;
	class ItemInfo;
	class UniformItem;
	class InventoryItem_Base_F;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	//OPFOR Uniforms
	class VSM_M81_BDU_Camo_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Battle Dress Uniform (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_SEA_Base_Camo";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_M81_BDU_C_od_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Battle Dress Uniform + OD Pants (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_SEA_Base_C_od";
			containerClass = "Supply40";
			mass = 40;
		};
	}

	class VSM_M81_BDU_Ctan_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Battle Dress Uniform + Tan Pants (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_SEA_Base_Ctan";
			containerClass = "Supply40";
			mass = 40;
		};
	}
	
	class VSM_M81_BDU_lite_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Massif Combat Uniform T-Shirt (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_SEA_Base_lite";
			containerClass = "Supply30";
			mass = 30;
		};
	}	
	
	//OPFOR PMC Uniforms
	class VSM_MulticamTropic_Camo_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Crye G3 (Multicam Tropic)";
		author = "VanSchmoozin";
		picture = "\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_PMC_Base_Camo";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_MulticamTropic_C_od_p_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Crye G3 + OD Pants (Multicam Tropic)";
		author = "VanSchmoozin";
		picture = "\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_PMC_Base_C_od_p";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_MulticamTropic_C_od_s_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Crye G3 + OD Shirt (Multicam Tropic)";
		author = "VanSchmoozin";
		picture = "\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_PMC_Base_C_od_s";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_MulticamTropic_C_gy_p_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Crye G3 + Grey Pants (Multicam Tropic)";
		author = "VanSchmoozin";
		picture = "\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_PMC_Base_C_gy_p";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_MulticamTropic_C_gy_s_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Crye G3 + Grey Shirt (Multicam Tropic)";
		author = "VanSchmoozin";
		picture = "\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_PMC_Base_C_gy_s";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_MulticamTropic_lite_OPFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-O] Crye G3 (Multicam Tropic)";
		author = "VanSchmoozin";
		picture = "\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "O_PMC_Base_lite";
			containerClass = "Supply30";
			mass = 30;
		};
		
	}
	
	

	//INDFOR Uniforms
	class VSM_M81_BDU_Camo_INDFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-I] Battle Dress Uniform (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "I_SEA_Base_Camo";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_M81_BDU_C_od_INDFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-I] Battle Dress Uniform + OD Pants (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "I_SEA_Base_C_od";
			containerClass = "Supply40";
			mass = 40;
		};
	}

	class VSM_M81_BDU_Ctan_INDFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-I] Battle Dress Uniform + Tan Pants (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "I_SEA_Base_Ctan";
			containerClass = "Supply40";
			mass = 40;
		};
	}
	
	class VSM_M81_BDU_lite_INDFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-I] Massif Combat Uniform T-Shirt (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "I_SEA_Base_lite";
			containerClass = "Supply30";
			mass = 30;
		};
	}
	//BLUFOR Uniforms
	class VSM_M81_BDU_Camo_BLUFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-B] Battle Dress Uniform (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "B_SEA_Base_Camo";
			containerClass = "Supply40";
			mass = 40;
		};
		
	}
	
	class VSM_M81_BDU_C_od_BLUFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-B] Battle Dress Uniform + OD Pants (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "B_SEA_Base_C_od";
			containerClass = "Supply40";
			mass = 40;
		};
	}

	class VSM_M81_BDU_Ctan_BLUFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-B] Battle Dress Uniform + Tan Pants (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "B_SEA_Base_Ctan";
			containerClass = "Supply40";
			mass = 40;
		};
	}
	
	class VSM_M81_BDU_lite_BLUFOR: Uniform_Base
	{
		scope = 1;
		displayName = "[VSM-B] Massif Combat Uniform T-Shirt (M81)";
		author = "VanSchmoozin";
		picture = "\VSM_M81\Data\Icons\VSM_M81.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "B_SEA_Base_lite";
			containerClass = "Supply30";
			mass = 30;
		};
	}	
	class hlc_rifle_g3ka4;
	class hlc_rifle_g3ka4_XMAG;
	class HLC_Rifle_g3ka4_GL;
	class hlc_rifle_g3sg1ris;
	class hlc_rifle_PSG1A1_RIS;
	class hlc_lmg_MG3KWS_g;
	//main rifle, EOtech 552 with SMA flashlight
	class hlc_rifle_g3ka4_SightLight: hlc_rifle_g3ka4 
	{
		author = "NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3ka4";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	//Squad Leader Rifle
	class hlc_rifle_g3ka4_3XSightLight: hlc_rifle_g3ka4
	{
		author = "NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3ka4";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552_3XDOWN";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	//Scout Rifle with silencer
	class hlc_rifle_g3ka4_SightLightSnds: hlc_rifle_g3ka4
	{
		author = "$NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3ka4";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
			class LinkedItemMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
		};
	};
	//Autorifleman rifle
	class hlc_rifle_g3ka4_LMG : hlc_rifle_g3ka4_XMAG
	{
		author = "$NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3ka4_XMAG";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552_3XDOWN";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	//Heavy Gunner MMG
	class hlc_lmg_MG3KWS_g_SEA : hlc_lmg_MG3KWS_g
	{
		author = "$NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3ka4_XMAG";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	//Standard GL Rifle
	class HLC_Rifle_g3ka4_GL_SightLight : HLC_Rifle_g3ka4_GL
	{
		author = "NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3ka4_GL";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	//Team leader GL Rifle, 3X Magnifier on EOtech.
	class HLC_Rifle_g3ka4_GL_3XSightLight : HLC_Rifle_g3ka4_GL
	{
		author = "NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3ka4_GL";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552_3XDOWN";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	//Marksman rifle, Kahlia Scope.
	class hlc_rifle_g3sg1ris_Kahlia : hlc_rifle_g3sg1ris
	{
		author = "NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_g3sg1ris";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
		};
	};
	//sharpshooter rifle
	class hlc_rifle_PSG1A1_RIS_Kahlia : hlc_rifle_PSG1A1_RIS
	{
		author = "NIArms and Specialist Military Arms";
		_generalMacro = "hlc_rifle_PSG1A1_RIS";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "bipod_02_F_blk";
			};
		};
	};

}

/*Fuck me, this will take forever to setup...
class CfgGroups
{
	class West
	{
		name = "$STR_A3_CfgGroups_West0";
		side = 1;
		class BLU_T_F
		{
			name = "$STR_A3_CfgGroups_West_BLU_T_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class B_T_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class B_T_InfSquad_Weapons
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class B_T_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_InfTeam_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class B_T_ReconTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_recon_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class B_T_ReconPatrol
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_ReconSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class B_T_SniperTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit1
					{
						side = 1;
						vehicle = "B_T_sniper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_spotter_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class SpecOps
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class B_T_DiverTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_DiverTeam_Boat
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam_Boat0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_Boat_Transport_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class B_T_DiverTeam_SDV
				{
					name = "$STR_A3_cfggroups_West_BLU_F_SpecOps_BUS_DiverTeam_SDV0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_SDV_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_SDV_01_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class B_T_SmallTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_smallUAV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UAV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_ReconTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUGV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UGV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_AttackTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUGV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UGV_01_rcws_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_ReconTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUAV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UAV_02_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_AttackTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUAV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UAV_02_CAS_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			class Support
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
				class B_T_Support_CLS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_Support_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_Support_ENG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_repair_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class B_T_Recon_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_Support_MG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_Support_GMG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_Support_Mort
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class B_T_MotInf_Team
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_gmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_MotInf_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_MGTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_GMGTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_MortTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_Reinforcements
				{
					name = "$STR_A3_CFGGROUPS_WEST_BLU_F_MOTORIZED_BUS_MOTINF_REINFORCE0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_Truck_01_transport_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-4,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {5,-6,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-8,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {5,-12,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {5,-14,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-2,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-4,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-5,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-8,0};
					};
					class Unit14
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-10,0};
					};
					class Unit15
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-5,-12,0};
					};
					class Unit16
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-14,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
				class B_T_MechInfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Wheeled_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_T_MechInf_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_rcws_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_T_MechInf_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_T_MechInf_Support
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Wheeled_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_repair_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
				class B_T_TankPlatoon
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_T_TankPlatoon_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_T_TankSection
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class B_T_SPGPlatoon_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_T_SPGSection_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class B_T_SPGSection_MLRS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_MLRS0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_mlrs_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_mlrs_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
			};
		};
		class BLU_CTRG_F
		{
			name = "$STR_A3_CfgGroups_West_CTRG_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class CTRG_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_TL_tna_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Exp_tna_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class CTRG_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_TL_tna_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class CTRG_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class CTRG_MotInf_ReconTeam
				{
					name = "$STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_ReconTeam0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_LSV_01_unarmed_CTRG_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Exp_tna_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class CTRG_MotInf_AssaultTeam
				{
					name = "$STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_AssaultTeam0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_LSV_01_armed_CTRG_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
				};
			};
		};
};
	class East
	{
		name = "$STR_A3_CfgGroups_East0";
		side = 0;
		class OPF_T_F
		{
			name = "$STR_A3_CfgGroups_East_OPF_T_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class O_T_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class O_T_InfSquad_Weapons
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class O_T_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_InfTeam_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class O_T_reconTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_recon_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class O_T_reconPatrol
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_reconSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class O_T_SniperTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_sniper_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_spotter_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class SpecOps
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class O_T_diverTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_diverTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_diverTeam_Boat
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_diverTeam_Boat0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_Boat_Transport_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class O_T_diverTeam_SDV
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_diverTeam_SDV0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_SDV_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_SDV_01_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class O_T_SmallTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_smallUAV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UAV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_ReconTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUGV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UGV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_AttackTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUGV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UGV_01_rcws_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_ReconTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUAV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UAV_02_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_AttackTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUAV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UAV_02_CAS_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_ViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_SpecOps_OI_ViperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
			};
			class Support
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
				class O_T_support_CLS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_CLS0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_support_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_EOD0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_support_ENG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_ENG0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_repair_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_recon_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_recon_EOD0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_support_MG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_MG0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_support_GMG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_GMG0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_support_Mort
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_Mort0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			class Motorized_MTP
			{
				name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
				class O_T_MotInf_Team
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInfTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_gmg_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_MotInf_AT
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AT0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_AA
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_MGTeam
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MGTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_GMGTeam
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_GMGTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_MortTeam
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MortTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_ReconViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_ReconViperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_LSV_02_unarmed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class O_T_MotInf_AssaultViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_AssaultViperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_LSV_02_armed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class O_T_MotInf_Reinforcements
				{
					name = "$STR_A3_CFGGROUPS_WEST_BLU_F_MOTORIZED_BUS_MOTINF_REINFORCE0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_Truck_03_transport_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-4,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {5,-6,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-8,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-10,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-5,-8,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-10,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-2,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-4,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-6,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
				class O_T_MechInfSquad
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class O_T_MechInf_AT
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class O_T_MechInf_AA
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {10,-20,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-20,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class O_T_MechInf_Support
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_repair_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-20,-2,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
				class O_T_TankPlatoon
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class O_T_TankPlatoon_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class O_T_TankSection
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class O_T_SPGPlatoon_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class O_T_SPGSection_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
			};
		};
		class OPF_F
		{
			class SpecOps
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class OI_ViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_SpecOps_OI_ViperTeam0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
			};
			class Motorized_MTP
			{
				name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
				class O_MotInf_ReconViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_ReconViperTeam0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_LSV_02_unarmed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class O_MotInf_AssaultViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_AssaultViperTeam0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_LSV_02_armed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			};
		};
	};
	class Indep
	{
		class IND_C_F
		{
			name = "$STR_A3_CfgGroups_Indep_IND_C_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class ParaFireTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaFireTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_2_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_4_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_1_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_3_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class ParaShockTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaShockTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_6_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_5_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_7_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_8_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class ParaCombatGroup
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaCombatGroup0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_2_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_4_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_6_F";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_1_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_7_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_5_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_8_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_3_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class BanditFireTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_BanditFireTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_4_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_3_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_5_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_1_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BanditShockTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_BanditShockTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_6_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_2_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_7_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_8_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BanditCombatGroup
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_BanditCombatGroup0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_4_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_3_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_7_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_5_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_6_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_2_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_8_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_1_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			};
		};
	};
};
*/