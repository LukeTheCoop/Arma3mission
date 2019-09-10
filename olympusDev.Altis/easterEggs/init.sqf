/*
params ["_player"];

//lonely rock 
_rock = rock;
_rock addaction ["Rocky", {
	hint "Oh hi! I am not use to visitors! How are you? My name is rocky I been up here since... the incident";
	}];
_rock allowDamage false;
//Weird house 1
_weirdHouse_1 = weirdHouse_1;
_weirdHouse_1 addaction ["Weird", {
	hint "I dont think I am suppose to be here... all I remeber is the, incident";
}];

//Coffee
_coffee = coffee;
_coffee disableAI "MOVE";
_coffee disableAI "WEAPONAIM";
_coffee disableAI "PATH";
_coffee disableAI "TARGET";
_coffee disableAI "COVER";
_coffee disableAI "ANIM";
_coffee disableAI "AUTOTARGET";
_coffee allowDamage false;

	//_coffee playMove "AinjPfalMstpSnonWnonDf_carried_fallwc";
	sleep 1;
	//hint "Coffee: Help I have fallen!";
*/