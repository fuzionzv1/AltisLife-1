/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops
{
    //Virtual Shops
    class market
    {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "repairKit", "apple", "redgull", "tbacon", "pickaxe", "fuelFull", "peach", "storagesmall", "storagebig", "cement" };
    };

    class rebel
    {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge", "goldbar", "bankbond", "repairKit" };
    };

    class gang
    {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs
    {
        name = "STR_Shops_Wongs";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee
    {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee
    {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "fuelFull", "repairKit"};
    };

    class drugdealer
    {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil
    {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket
    {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass
    {
        name = "STR_Shops_Glass";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass" };
    };

    class iron
    {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond
    {
        name = "STR_Shops_Diamond";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt
    {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined" };
    };

    class cop
    {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "fuelFull", "defusekit", "repairKit"};
    };

    class medical
    {
        name = "STR_Shops_medical";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "defibrillator","bloodbag" };
    };

    class hunting
    {
        name = "Hunting";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {"waterBottle", "apple", "tbacon", "redgull","repairKit","campfire"};
    };

    class moonshineQual
    {
        name = "Moonshine Quality";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "moonshineQual" };
    };

    class moonshine
    {
        name = "Moonshine";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "moonshine" };
    };

    class butcher
    {
        name = "Butcher";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {"goat_raw","goat","sheep_raw","sheep","rooster_raw","rooster","hen_raw","hen"};
    };

    class brewsupplies
    {
        name = "Brew Supplies";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {"grape","sugar"};
    };

    class downtown
    {
        name = "STR_Shops_downtown";
        items[] = {"fermwine","mash","wine","moonshineQual","moonshine"};
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*/

class VirtualItems
{
    class debitcard
    {
        variable = "debitcard";
        displayName = "STR_Item_debitCard";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class repairKit
    {
        variable = "repairKit";
        displayName = "STR_Item_RepairKit";
        weight = 4;
        buyPrice = 75;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_repairKit.paa";
    };

    class mash
    {
        variable = "mash";
        displayName = "STR_Item_Mash";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_moonshine.paa";
    };

    class moonshine
    {   variable = "moonshine";
        displayName = "STR_Item_Moonshine";
        weight = 2;
        buyPrice = 1500;
        sellPrice = 1350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_moonshine.paa";
    };

    class bankbond
    {
        variable = "bankbond";
        displayName = "STR_Item_Bankbond";
        weight = 3;
        buyPrice = -1;
        sellPrice = 350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_bankbonds.paa";
    };

    class moonshineQual
    {
        variable = "moonshineQual";
        displayName = "STR_Item_MoonshineQual";
        weight = 2;
        buyPrice = 1100;
        sellPrice = 950;
        illegal = true;
        edible = -1;
        icon = "icons\ico_moonshine.paa";
    };

    class fermwine
    {
        variable = "fermwine";
        displayName = "STR_Item_FermWine";
        weight = 2;
        buyPrice = 450;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wine.paa";
    };

    class wine
    {
        variable = "wine";
        displayName = "STR_Item_Wine";
        weight = 2;
        buyPrice = 650;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wine.paa";
    };

    class pickaxe
    {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 75;
        sellPrice = 35;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator
    {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class bloodbag
    {
        variable = "bloodbag";
        displayName = "STR_Item_Bloodbag";
        weight = 2;
        buyPrice = 300;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_bloodBag.paa";
    };

    class corn
    {
        variable = "corn";
        displayName = "STR_Item_Corn";
        weight = 1;
        buyPrice = 200;
        sellPrice = 175;
        illegal = true;
        edible = -1;
        icon = "icons\ico_corn.paa";
    };

    class grape
    {
        variable = "grape";
        displayName = "STR_Item_Grape";
        weight = 1;
        buyPrice = 55;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_grape.paa";
    };

    class sugar
    {
        variable = "sugar";
        displayName = "STR_Item_Sugar";
        weight = 1;
        buyPrice = 50;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sugar.paa";
    };

    class fuelEmpty
    {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelempty.paa";
    };

    class fuelFull
    {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 85;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip
    {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 250;
        sellPrice = 120;
        illegal = false;
        edible = -1;
        icon = "icons\ico_spikestrip.paa";
    };

    class lockpick
    {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 50;
        sellPrice = 75;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar
    {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 22500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_goldbar.paa";
    };

    class blastingcharge
    {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 9000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter
    {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltcutters.paa";
    };

    class defusekit
    {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defusekit.paa";
    };

    class storagesmall
    {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 7500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig
    {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 15000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    class oil_unprocessed
    {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed
    {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 320;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined
    {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class copper_refined
    {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class iron_unrefined
    {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class iron_refined
    {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class salt_unrefined
    {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined
    {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand
    {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class glass
    {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 110;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class diamond_uncut
    {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 90;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut
    {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock
    {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rockUnprocessed.paa";
    };

    class cement
    {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 210;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class heroin_unprocessed
    {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
    };

    class heroin_processed
    {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 550;
        sellPrice = 460;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis
    {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
    };

    class marijuana
    {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 400;
        sellPrice = 325;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed
    {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 12;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
    };

    class cocaine_processed
    {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 8;
        buyPrice = 750;
        sellPrice = 600;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    class redgull
    {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 45;
        sellPrice = 20;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee
    {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle
    {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    class apple
    {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 22;
        sellPrice = 14;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach
    {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 24;
        sellPrice = 18;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon
    {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tbacon.paa";
    };

    class donuts
    {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw
    {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class rabbit
    {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 1050;
        sellPrice = 955;
        illegal = false;
        edible = 20;
        icon = "icons\ico_cookedMeat.paa";
    };

    class salema_raw
    {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class salema
    {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedMeat.paa";
    };

    class ornate_raw
    {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class ornate
    {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 75;
        sellPrice = 50;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedMeat.paa";
    };

    class mackerel_raw
    {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 75;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class mackerel
    {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 125;
        sellPrice = 110;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedMeat.paa";
    };

    class tuna_raw
    {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class tuna
    {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 400;
        sellPrice = 250;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    class mullet_raw
    {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class mullet
    {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedMeat.paa";
    };

    class catshark_raw
    {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class catshark
    {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    class turtle_raw
    {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = 4000;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class turtle_soup
    {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtlesoup.paa";
    };

    class hen_raw
    {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 35;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class hen
    {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_cookedMeat.paa";
    };

    class rooster_raw
    {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 35;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class rooster
    {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 1;
        buyPrice = 85;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_cookedMeat.paa";
    };

    class sheep_raw
    {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class sheep
    {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };

    class goat_raw
    {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1050;
        illegal = false;
        edible = -1;
        icon = "icons\ico_meat.paa";
    };

    class goat
    {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 1750;
        sellPrice = 1350;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedMeat.paa";
    };
	
	 class campfire
    {
        variable = "campfire";
        displayName = "STR_Item_Campfire";
        weight = 2;
        buyPrice = 600;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_campfire.paa";
    };
};