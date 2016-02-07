#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings
{
    /* Persistent Settings */
    save_civ_weapons = true; //Allow civilians to save weapons on them?
    save_virtualItems = true; //Save Virtual items (all sides)?

    /* Clothing Stuff */
    clothing_masks[] = { "H_Shemag_olive", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_lowprofile", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "U_O_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F" };

    /* Revive system settings */
    revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_fee = 1500; //Revive fee that players have to pay and medics / EMS are rewarded

    /* House related settings */
    enable_ATMS = false; // Allow usage at any ATM.
    house_limit = 5; //Maximum amount of houses a player can own.

    /* Gang related settings */
    gang_price = 75000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
    gang_upgradeMultiplier = 1.25; //Not sure if in use?

    /* Player-related systems */
    enable_fatigue = true; //Set to false to disable the ARMA 3 false system.
    total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
    paycheck_period = 5; //Scaled in minutes
    rahim_singleshot = true; //Set the rahim to always be single fire

    /* Impound Variables */
    impound_car = 350; //Price for impounding cars
    impound_boat = 250; //Price for impounding boats
    impound_air = 850; //Price for impounding helicopters / planes

    /* Paycheck Amount */
    paycheck_cop = 0; //Base payment for cops
    paycheck_civ = 500; //Payment for civillians
    paycheck_med = 1500; //Payment for medics

    /* Cop Paycheck Bonuses */
    cadet_add = 2000;
    constable_add = 3500;
    corporal_add = 5000;
    sergeant_add = 7500;
    lieutenant_add = 9000;
    captain_add = 11000;

    /* Federal Reserve settings */
    noatm_timer = 10; //Time in minutes that players won't be able to deposit his money after selling stolen gold
    cops_online_min = 5; //minimum cops online for robbing the fed

    /* Spyglass settings */
    spyglass_init = false; //Enable or disable spyglass

    /* Skins settings */
    civ_skins = false; //Enable or disable civilian skins. Before enabling, you must add all the SEVEN files to textures folder.

    /* Job-related stuff */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };
};

#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_Weapons.hpp"
#include "Config_IntersectionModel.hpp"