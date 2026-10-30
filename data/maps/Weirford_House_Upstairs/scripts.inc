Weirford_House_Upstairs_MapScripts::
	.byte 0


Weirford_House_Upstairs_Downstairs::
# 4 "data/maps/Weirford_House_Upstairs/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 0
	goto_if_eq Weirford_House_Upstairs_Downstairs_2
# 8 "data/maps/Weirford_House_Upstairs/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_2, 8, 2
Weirford_House_Upstairs_Downstairs_1:
# 10 "data/maps/Weirford_House_Upstairs/scripts.pory"
	waitstate
	end

Weirford_House_Upstairs_Downstairs_2:
# 5 "data/maps/Weirford_House_Upstairs/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE, 8, 2
	goto Weirford_House_Upstairs_Downstairs_1

