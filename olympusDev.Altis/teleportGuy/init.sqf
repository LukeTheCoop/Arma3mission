params ["_player"];
_teli = teleportGuy;


//Disable AI stuff here
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
	_vednor disableAi "NVG";


//addAction
//_teli addaction ["<t color='#FF0000'> teleport </t>", "teleportGuy\teli.sqf", [], 6, false, true, "", "", 10];
_teli addaction ["teleport", {
	hint "Please stay still while I teleport you!";
	sleep 3;
	hint "Hold on tight!";
	sleep 2.5;
	_player setPosASL (getMarkerPos "sofia");
	sleep 0.5;
	hint "You have arrived!";
	sleep 2.5;
	hint "Over here by the gas station. We need to talk";

}];