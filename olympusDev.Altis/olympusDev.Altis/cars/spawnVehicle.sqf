_index = lbCurSel 10;
_car = lbData [10, _index];
_spawn = getMarkerPos "carSpawn_1";
_trigger1 = carTrig_1;
_player   = player;
//if trigger activated 1 then spawn 2 if 2 then spawn 3 if 3 then no spawn

/*I
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
*/


_spawns1   = getMarkerPos "carSpawn_1";
_spawns2   = getMarkerPos "carSpawn_2";
_spawns3   = getMarkerPos "carSpawn_3";
_trigger1 = carTrig_1;
_trigger2 = carTrig_2;
_trigger3 = carTrig_3;

if (!triggerActivated _trigger1) then {
	hint "Spawning car...";
	sleep 0.5;
	_veh = createVehicle [_car, _spawns1];
	hint format ["Spawned your %1", _car];
	_veh setDir 275;
	closeDialog 9999;
} else {
	if (!triggerActivated _trigger2) then {
		hint "Spawning car...";
		sleep 0.5;
		_veh = createVehicle [_car, _spawns2];
		hint format ["Spawned your %1", _car];
		_veh setDir 275;
		closeDialog 9999;
	} else {
		if (!triggerActivated _trigger3) then {
			hint "Spawning car...";
			sleep 0.5;
			_veh = createVehicle [_car, _spawns3];
			hint format ["Spawned your %1", _car];
			_veh setDir 275;
			closeDialog 9999;
		} else {
			hint "All garage points are currently being blocked!";
		};
	};
};
sleep 5;
hint "";
