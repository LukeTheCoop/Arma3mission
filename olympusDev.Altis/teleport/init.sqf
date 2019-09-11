_guy = teleportGuy;
_player = player;

_guy disableAI "MOVE";
_guy disableAI "WEAPONAIM";
_guy disableAI "PATH";
_guy disableAI "TARGET";
_guy disableAI "COVER";
_guy disableAI "ANIM";
_guy disableAI "AUTOTARGET";
_guy allowDamage false;
_guy disableAI "AUTOCOMBAT";
_guy disableAI "SUPPRESSION";
_guy disableAI "ANIM";
_guy disableAi "NVG";


_guy addAction ["<t color='#FF0000'>Teleport to warzone </t>", {
	hint "Get ready for battle!";
	sleep 1;
	player setPos (getMarkerPos "warzoneSpawn");
	player setDir 5;
	sleep 1;
	hint "You are surrounded by enemies grab a weapon and fight!";
	sleep 2;
	hint "If you are not getting shot look around. There might be enemies hiding!";
	sleep 5;
	hint "";
}, [], 6, false, true, "", "", 10];

