_index = lbCurSel 10;
_car = lbData [10, _index];
_spawn = getMarkerPos "carSpawn_1";
_trigger1 = carTrig_1;

//if trigger activated 1 then spawn 2 if 2 then spawn 3 if 3 then no spawn
if (triggerActivated _trigger1) then {
	hint "There is a vehicle blocking the spawn point!";
} else {
hint "Spawning car...";
sleep 0.5;
_veh = createVehicle [_car, _spawn];
hint format ["Spawned your %1", _car];
_veh setDir 275;
closeDialog 9999;
};
/* WORK IN PROGRESS
_spawns1   = getMarkerPos "carSpawn_1";
_spawns2   = getMarkerPos "carSpawn_2";
_spawns3   = getMarkerPos "carSpawn_3";
_trigger1 = carTrig_1;
_trigger2 = carTrig_2;
_trigger3 = carTrig_3;
_spawn1   = false;
_spawn2   = false;
_spawn3   = false;
_nope     = false;

if (triggerActivated _trigger1) then {
	_spawn1 = false;
} else {
	_spawn1 = true;
};
if (triggerActivated _trigger2) then {
	_spawn2 = false;
} else {
	_spawn2 = true;
};
if (triggerActivated _trigger3) then {
	_spawn3 = false;
	_nope = true;
} else {
	_spawn3 = true;
};
if (_spawn1) then {
	_spawn2 = false;
	_spawn3 = false;
	hint "Spawning car...";
	sleep 0.5;
	_veh = createVehicle [_car, _spawns1];
	hint format ["Spawned your %1", _car];
	_veh setDir 275;
	closeDialog 9999;

};
if (_spawn2) then {
	_spawn3 = false;
	hint "Spawning car...";
	sleep 0.5;
	_veh = createVehicle [_car, _spawns2];
	hint format ["Spawned your %1", _car];
	_veh setDir 275;
	closeDialog 9999;

;
};
if (_spawn3) then {
	hint "Spawning car...";
	sleep 0.5;
	_veh = createVehicle [_car, _spawns3];
	hint format ["Spawned your %1", _car];
	_veh setDir 275;
	closeDialog 9999;

};
if (_nope) then {
	hint "There is a vehicle or person blocking one of the spawn points!";
	closeDialog 9999;

};
*/