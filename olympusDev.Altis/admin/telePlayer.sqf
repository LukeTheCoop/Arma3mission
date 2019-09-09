_index = lbCurSel 4;
_unit = playerArray select _index;
_player = player;

_player setPosASL [getPosASL _unit select 0, getPosASL _unit select 1,getPosASL _unit select 2];