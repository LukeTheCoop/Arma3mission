_index = lbCurSel 10;
_heli = lbData [10, _index];
_heliSpawn = getMarkerPos "helispawn";

if (triggerActivated _trigger1) then {
	hint "There is someone or something blocking the spawn point!";
	closeDialog 9995;
} else {
hint "Spawning your helicopter...";
sleep 0.5;
_heli = createVehicle [_heli, _heliSpawn];
_heli setDir 44;
hint format ["Spawned your %1", _index];
closeDialog 9995;
};
