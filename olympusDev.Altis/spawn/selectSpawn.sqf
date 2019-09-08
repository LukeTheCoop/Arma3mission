_player = player;

_index = lbCurSel 3;
_spawn = spawnArray select _index;



if (_spawn == "Kavala") then 
{

	_player setPos (getMarkerPos "kavala");
};
if (_spawn == "Air") then {

	_player setPos (getMarkerPos "air");
};
if (_spawn == "Sofia") then {
	_player setPos (getMarkerPos "sofia");

};

