_index = lbCurSel 10;
_plane = lbData [10, _index];
_planeSpawn = getMarkerPos "planespawn";
_trigger = planeTrigger;

if (!triggerActivated _trigger) then {
hint "Spawning your helicopter...";
sleep 0.5;
_plane = createVehicle [_plane, _planeSpawn];
_plane setDir 44;
hint format ["Spawned your helicopter!"];
closeDialog 9995;
} else {
	hint "They is something blocking the spawn point!";
};