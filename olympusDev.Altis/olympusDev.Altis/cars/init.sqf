params["_player"];

_vendor = vehicleVendor;
_heli = heliGuy;
_plane = planeGuy;


//disableAI
_vendor disableAI "MOVE";
_vendor disableAI "WEAPONAIM";
_vendor disableAI "PATH";
_vendor disableAI "TARGET";
_vendor disableAI "COVER";
_vendor disableAI "ANIM";
_vendor disableAI "AUTOTARGET";
_vendor allowDamage false;

_plane disableAI "MOVE";
_plane disableAI "WEAPONAIM";
_plane disableAI "PATH";
_plane disableAI "TARGET";
_plane disableAI "COVER";
_plane disableAI "ANIM";
_plane disableAI "AUTOTARGET";
_plane allowDamage false;

_vendor addAction ["Spawn car", "[] call LuC_fnc_vehicleDialog", [], 6, false, true, "", "", 10];

_heli addAction ["Spawn helicopter", "[] call LuC_fnc_heliDialog", [], 6, false, true, "", "", 10];

_plane addAction ["Spawn plane", "[] call LuC_fnc_planeDialog", [], 6, false, true, "", "", 10];

