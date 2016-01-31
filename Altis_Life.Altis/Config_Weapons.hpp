/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*/
class WeaponShops
{
    class hunting {
        name = "Hunting Outpost";
        side = "civ";
        license = "hunting";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_Mk20C_F", "", 3000 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "optic_ACO_grn", "", 150  },
            { "optic_Holosight", "", 200  },
            { "optic_Holosight_smg", "", 200 },
            { "optic_Hamr", "", 300 },
            { "optic_MRCO", "", 300 },
            { "optic_Arco", "", 300 }
        };
    };

    class gun {
        name = "Altis Armory";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "arifle_SDAR_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 },
            { "16Rnd_9x21_Mag", "", 25, -1 },
            { "9Rnd_45ACP_Mag", "", 45, -1 },
            { "6Rnd_45ACP_Cylinder", "", 50, -1 },
            { "30Rnd_9x21_Mag", "", 75, -1 },
            { "20Rnd_556x45_UW_mag", "", 20000, -1 },
        };
    };

    class rebel {
        name = "Han's Rebel Supplies";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "arifle_Katiba_C_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "srifle_DMR_03_khaki_F", "", 50000, -1 },
            { "srifle_DMR_03_tan_F", "", 50000, -1 },
            { "srifle_DMR_03_multicam_F", "", 50000, -1 },
            { "srifle_DMR_03_woodland_F", "", 50000, -1 },
            { "srifle_DMR_06_camo_F", "", 50000, -1 },
            { "srifle_DMR_06_olive_F", "", 50000, -1 },
            { "srifle_EBR_F", "", 50000, -1 },
            { "LMG_Mk200_F", "", 50000, -1 },
            { "hgun_Rook40_F", "", 50000, -1 },
            { "hgun_ACPC2_F", "", 275, -1 },
            { "hgun_Pistol_heavy_02_F", "", 50000, -1 },
            { "SMG_01_F", "", 50000, -1 },
            { "hgun_PDW2000_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
            { "optic_Holosight_smg", "", 7500, -1 },
            { "acc_flashlight", "", 1000, 100 },
            { "optic_Hamr", "", 7500, -1 },
            { "optic_Arco", "", 7500, -1 },
            { "optic_MRCO", "", 7500, -1 },
            { "200Rnd_65x39_cased_Box", "", 125, -1 },
            { "30Rnd_9x21_Mag", "", 200, -1 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "30Rnd_556x45_Stanag", "", 300, -1 },
            { "10Rnd_762x54_Mag", "", 500, -1 },
            { "30Rnd_65x39_caseless_green", "", 275, -1 },
            { "20Rnd_762x51_Mag", "", 275, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 275, -1 },
            { "6Rnd_45ACP_Cylinder", "", 275, -1 },
            { "9Rnd_45ACP_Mag", "", 275, -1 },
            { "SmokeShellRed", "", 275, -1 },
            { "SmokeShellGreen", "", 275, -1 },
            { "SmokeShellYellow", "", 275, -1 },
            { "SmokeShellPurple", "", 275, -1 },
            { "SmokeShellBlue", "", 275, -1 },
            { "SmokeShellOrange", "", 275, -1 },
            { "SmokeShell", "", 275, -1 },
        };
    };


    class rebelSupplies {
        name = "Rebel Supplies";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemWatch", "", 15, 500 },
            { "ItemCompass", "", 25, -1 },
            { "ItemGPS", "", 45, -1 },
            { "ItemMap", "", 95, -1 },
            { "Binocular", "", 95, 250 },
            { "NVGoggles", "", 19, -1 },
            { "NVGoggles_INDEP", "", 25, -1 },
            { "FirstAidKit", "", 45, -1 },
            { "ToolKit", "", 50, -1 },
        };
    };

    class gang {
        name = "Arms Dealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "V_Rangemaster_belt", "", 1900, -1 },
            { "16Rnd_9x21_Mag", "", 25, -1 },
            { "9Rnd_45ACP_Mag", "", 45, -1 },
            { "6Rnd_45ACP_Cylinder", "", 50, -1 },
            { "30Rnd_9x21_Mag", "", 75, -1 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
        };
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
        };
    };

    //copgen
    class copstore {
        name = "store";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You are not a cop!" };
        items[] = {
            { "ItemWatch", "", 10, 45 },
            { "Binocular", "", 15, -1 },
            { "ToolKit", "", 25, 75 },
            { "FirstAidKit", "", 15, 65 },
            { "ItemCompass", "", 50, 450 },
            { "ItemGPS", "", 12, 980 },
            { "ItemMap", "", 30, -1 },
            { "NVGoggles_OPFOR", "", 30, -1 },
        };
    };

    //Cop Shops
    class cop_cadet {
        name = "Cadet Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You are not a Cadet!" };
        items[] = {
            { "arifle_TRG20_F", "", 20000, 7500 },
            { "hgun_P07_F", "", 2000, 650 },
            { "16Rnd_9x21_Mag", "", 50, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 125, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };

    class cop_constable {
        name = "Constable Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Constable!" };
        items[] = {
            { "hgun_P07_F", "", 2000, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 20000, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 35000, 7500 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_MRCO", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 350, -1 },
			{ "optic_Hamr", "", 250, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };

    class cop_corporal {
        name = "Corporal Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Corporal!" };
        items[] = {
            { "hgun_P07_F", "", 2000, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 20000, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 35000, 7500 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "arifle_MXM_Black_F", "", 35000, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_MRCO", "", 750, 100 },
            { "optic_Arco", "", 350, -1 },
            { "optic_Hamr", "", 250, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };

	 class cop_sergeant {
        name = "Sergeant Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_P07_F", "", 2000, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 20000, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 35000, 7500 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "arifle_MXM_Black_F", "", 35000, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "SmokeShellRed", "Smoke Red", 17, -1 },
            { "SmokeShellGreen", "Smoke Green", 17, -1 },
            { "SmokeShellYellow", "Smoke Yellow", 17, -1 },
            { "SmokeShellPurple", "Somke Purple", 17, -1 },
            { "SmokeShellBlue", "Smoke Blue", 17, -1 },
            { "SmokeShellOrange", "Smoke Orange", 17, -1 },
            { "Chemlight_green", "", 17, -1 },
            { "Chemlight_red", "", 17, -1 },
            { "Chemlight_yellow", "", 17, -1 },
            { "Chemlight_blue", "", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 350, -1 },
            { "optic_Hamr", "", 250, -1 },
            { "optic_MRCO", "", 750, 100 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
			{ "arifle_MX_GL_Black_F", "", 35000, 7500 },
            { "3Rnd_Smoke_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 1700, -1 },
			{ "B_UAV_01_backpack_F", "", 5000, -1 },
            { "B_UavTerminal", "", 5000, -1 },
        };
    };

	 class cop_lieutenant {
        name = "Lieutenant Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Lieutenant!" };
        items[] = {
            { "hgun_P07_F", "", 2000, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "hgun_Pistol_heavy_01_F", "", 2000, 650 },
            { "11Rnd_45ACP_Mag", "", 50, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 20000, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 35000, 7500 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "arifle_MXM_Black_F", "", 35000, 7500 },
            { "arifle_MX_GL_Black_F", "", 35000, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "arifle_MX_SW_Black_F", "", 35000, 7500 },
            { "100Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "srifle_DMR_03_F", "", 35000, 7500 },
            { "20Rnd_762x51_Mag", "Lethal unless IR is equipped", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "SmokeShellRed", "Smoke Red", 17, -1 },
            { "SmokeShellGreen", "Smoke Green", 17, -1 },
            { "SmokeShellYellow", "Smoke Yellow", 17, -1 },
            { "SmokeShellPurple", "Somke Purple", 17, -1 },
            { "SmokeShellBlue", "Smoke Blue", 17, -1 },
            { "SmokeShellOrange", "Smoke Orange", 17, -1 },
            { "Chemlight_green", "", 17, -1 },
            { "Chemlight_red", "", 17, -1 },
            { "Chemlight_yellow", "", 17, -1 },
            { "Chemlight_blue", "", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "3Rnd_Smoke_Grenade_shell", "", 1700, -1 },
            { "3Rnd_SmokeRed_Grenade_shell", "", 1700, -1 },
            { "3Rnd_SmokeGreen_Grenade_shell", "", 1700, -1 },
            { "3Rnd_SmokeYellow_Grenade_shell", "", 1700, -1 },
            { "3Rnd_SmokePurple_Grenade_shell", "", 1700, -1 },
            { "3Rnd_SmokeBlue_Grenade_shell", "", 1700, -1 },
            { "3Rnd_SmokeOrange_Grenade_shell", "", 1700, -1 },
            { "B_UAV_01_backpack_F", "", 5000, -1 },
            { "B_UavTerminal", "", 5000, -1 },
            { "acc_pointer_IR", "", 750, 100 },
            { "optic_MRCO", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 350, -1 },
			{ "optic_Hamr", "", 250, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };


    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 },
            { "B_FieldPack_ocamo", "", 3000, -1 }
        };
    };
};
