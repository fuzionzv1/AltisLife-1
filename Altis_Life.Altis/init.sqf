StartProgress = false;
enableSaving[false,false];

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "outlw_magRepack\MagRepack_init_sv.sqf"; //MagRepack Script

StartProgress = true;