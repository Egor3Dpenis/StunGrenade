class CfgPatches
{
    class stun_grenade_scripts
    {
        units [] = {};
        weapons [] = {};
        requiredVersion = 0.1;
        requiredAddons [] =
        {
            "DZ_Data",
            "DZ_Scripts"
        };

    };
};

class CfgMods
{
    class stun_grenade_scripts_scr
    {
        type = "mod";
        author = "EgorPisun4ik";
        dependencies [] = { "World","Game","Mission" };
        credits = "Discord: @Goosyara";

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files [] = { "StunGrenade/scripts/3_Game" };
            };
            class worldScriptModule
            {
                value = "";
                files [] = { "StunGrenade/scripts/4_World" };
            };
            class missionScriptModule
            {
                value = "";
                files [] = { "StunGrenade/scripts/5_Mission" };
            };
        };
    };
};