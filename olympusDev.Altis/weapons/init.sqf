params["_player"];
_vendor = weopenVendor;

//disableAI
	_vendor disableAI "MOVE";
	_vendor disableAI "WEAPONAIM";
	_vendor disableAI "PATH";
	_vendor disableAI "TARGET";
	_vendor disableAI "COVER";
	_vendor disableAI "ANIM";
	_vendor disableAI "AUTOTARGET";
	_vendor allowDamage false;
	_vendor disableAI "AUTOCOMBAT";
	_vendor disableAI "SUPPRESSION";
	_vendor disableAI "ANIM";
	_vendor disableAi "NVG";

_vendor addAction ["Get Weapon", "[] call LuC_fnc_gunDialog", [], 6, false, true, "", "", 10];
