params["_player"];

_vendor = vehicleVendor;


//disableAI
_vendor disableAI "MOVE";
_vendor disableAI "WEAPONAIM";
_vendor disableAI "PATH";
_vendor disableAI "TARGET";
_vendor disableAI "COVER";
_vendor disableAI "ANIM";
_vendor disableAI "AUTOTARGET";
_vendor allowDamage false;

_vendor addAction ["Spawncar", "[] call LuC_fnc_vehicleDialog", [], 6, false, true, "", "", 10];
_vendor addAction ["Help?", {
	hint "You are able to get vehicles from me, the man with the gun is the gun vendor where you can buy guns. You should explore and see if you can find anymore easter eggs...";
	}];


