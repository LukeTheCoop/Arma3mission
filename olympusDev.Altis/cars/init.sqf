params["_player"];

_vendor = vehicleVendor;
_heli = heliGuy;


//disableAI
_vendor disableAI "MOVE";
_vendor disableAI "WEAPONAIM";
_vendor disableAI "PATH";
_vendor disableAI "TARGET";
_vendor disableAI "COVER";
_vendor disableAI "ANIM";
_vendor disableAI "AUTOTARGET";
_vendor allowDamage false;

_heli disableAI "MOVE";
_heli disableAI "WEAPONAIM";
_heli disableAI "PATH";
_heli disableAI "TARGET";
_heli disableAI "COVER";
_heli disableAI "ANIM";
_heli disableAI "AUTOTARGET";
_heli allowDamage false;

_vendor addAction ["Spawncar", "[] call LuC_fnc_vehicleDialog", [], 6, false, true, "", "", 10];

_heli addAction ["Spawn Heli", "[] call LuC_fnc_heliDialog", [], 6, false, true, "", "", 10];


