Weirford_House_Upstairs_2_MapScripts::
	.byte 0


Weirford_House_Upstairs_2_GoDownstairs::
# 5 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	playse SE_EXIT
# 7 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	warpsilent MAP_WEIRFORD_HOUSE_2, 8, 2
# 8 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	waitstate
	end


Weirford_House_Upstairs_2_First_Clue::
# 15 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	lock
# 16 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	msgbox Weirford_House_Upstairs_2_First_Clue_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_ALTERED_CLUE_1
# 19 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	call Weirford_House_Upstairs_2_Check_Clues
# 20 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	release
	return


Weirford_House_Upstairs_2_Second_Clue::
# 25 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	lock
# 27 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	msgbox Weirford_House_Upstairs_2_Second_Clue_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	msgbox Weirford_House_Upstairs_2_Second_Clue_Text_1, MSGBOX_DEFAULT
# 29 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	setflag FLAG_WEIRFORD_HOUSE_ALTERED_CLUE_2
# 31 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	call Weirford_House_Upstairs_2_Check_Clues
# 32 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	release
	return


Weirford_House_Upstairs_2_Check_Clues::
# 37 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	compare VAR_WEIRFORD_HOUSE_STATE, 1
	goto_if_ne Weirford_House_Upstairs_2_Check_Clues_2
# 41 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_ALTERED_CLUE_1, Weirford_House_Upstairs_2_Check_Clues_5
	return

Weirford_House_Upstairs_2_Check_Clues_2:
	return

Weirford_House_Upstairs_2_Check_Clues_4:
# 44 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	msgbox Weirford_House_Upstairs_2_Check_Clues_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	setvar VAR_WEIRFORD_HOUSE_STATE, 2
	return

Weirford_House_Upstairs_2_Check_Clues_5:
# 42 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_ALTERED_CLUE_2, Weirford_House_Upstairs_2_Check_Clues_4
	return


Weirford_House_Upstairs_2_First_Clue_Text_0:
# 16 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	.string "Dust covers the nightstand, but the\n"
	.string "wood beneath is scarred with hundreds\l"
	.string "of tally marks...\p"
	.string "And then they stop...$"

Weirford_House_Upstairs_2_Second_Clue_Text_0:
# 27 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	.string "Ghostly writing spreads across the\n"
	.string "pages before your eyes.\p"
	.string "H E - I S - M I N E.$"

Weirford_House_Upstairs_2_Second_Clue_Text_1:
# 28 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	.string "The book suddenly snaps shut.$"

Weirford_House_Upstairs_2_Check_Clues_Text_0:
# 44 "data/maps/Weirford_House_Upstairs_2/scripts.pory"
	.string "The hairs on your neck stand on end.\n"
	.string "Suddenly, you realise that you're not\l"
	.string "alone. Floorboards creak downstairs...$"
