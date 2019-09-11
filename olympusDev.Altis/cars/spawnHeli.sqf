_index = lbCurSel 10;
_heli = lbData [10, _index];
_heliSpawn = getMarkerPos "helispawn";
_trigger = heliTrigger;

if (!triggerActivated _trigger) then {
hint "Spawning your helicopter...";
sleep 0.5;
_heli = createVehicle [_heli, _heliSpawn];
_heli setDir 44;
hint format ["Spawned your helicopter!"];
closeDialog 9995;
} else {
	hint "There is something blocking the spawn point!";
};
