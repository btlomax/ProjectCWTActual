Pokemon_Tutor_Inside_MapScripts::
	.byte 0


Pokemon_Tutor_Inside_Script_GivePokemonReward::
# 4 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	specialvar VAR_RESULT, PokemonTutorRollStarterPool
# 5 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Pokemon_Tutor_Inside_Script_GivePokemonReward_2
# 11 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_GivePokemonReward_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto Pokemon_Tutor_Inside_Script_SelectPokemonReward
	return

Pokemon_Tutor_Inside_Script_GivePokemonReward_2:
# 6 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_GivePokemonReward_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setvar VAR_RESULT, MON_CANT_GIVE
	return


Pokemon_Tutor_Inside_Script_SelectPokemonReward::
# 16 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	special PokemonTutorShowStarterPoolMenu
# 17 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Pokemon_Tutor_Inside_Script_SelectPokemonReward_2
# 23 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 24 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8007, 0
	goto_if_eq Pokemon_Tutor_Inside_Script_SelectPokemonReward_5
# 27 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Pokemon_Tutor_Inside_Script_SelectPokemonReward_11
# 30 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x800B, VAR_0x8006
Pokemon_Tutor_Inside_Script_SelectPokemonReward_4:
# 34 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x800B
# 35 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_1, MSGBOX_YESNO
# 36 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Pokemon_Tutor_Inside_Script_SelectPokemonReward_9
Pokemon_Tutor_Inside_Script_SelectPokemonReward_8:
# 40 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	specialvar VAR_RESULT, PokemonTutorGiveStarterReward
# 41 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokemon_Tutor_Inside_Script_SelectPokemonReward_15
# 50 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokemon_Tutor_Inside_Script_SelectPokemonReward_18
# 59 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_6, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_SelectPokemonReward_14:
	return

Pokemon_Tutor_Inside_Script_SelectPokemonReward_2:
# 18 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setvar VAR_RESULT, MON_CANT_GIVE
	return

Pokemon_Tutor_Inside_Script_SelectPokemonReward_5:
# 25 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x800B, VAR_0x8004
	goto Pokemon_Tutor_Inside_Script_SelectPokemonReward_4

Pokemon_Tutor_Inside_Script_SelectPokemonReward_9:
# 37 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto Pokemon_Tutor_Inside_Script_SelectPokemonReward
	goto Pokemon_Tutor_Inside_Script_SelectPokemonReward_8

Pokemon_Tutor_Inside_Script_SelectPokemonReward_11:
# 28 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x800B, VAR_0x8005
	goto Pokemon_Tutor_Inside_Script_SelectPokemonReward_4

Pokemon_Tutor_Inside_Script_SelectPokemonReward_15:
# 42 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	waitfanfare
# 45 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_3, MSGBOX_DEFAULT
	goto Pokemon_Tutor_Inside_Script_SelectPokemonReward_14

Pokemon_Tutor_Inside_Script_SelectPokemonReward_18:
# 51 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_4, MSGBOX_DEFAULT
# 53 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	waitfanfare
# 54 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_5, MSGBOX_DEFAULT
	goto Pokemon_Tutor_Inside_Script_SelectPokemonReward_14


Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught::
# 68 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	lock
# 69 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	faceplayer
# 71 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_0, MSGBOX_YESNO
# 73 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_2
# 79 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setvar VAR_0x8004, 0
# 80 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 82 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 83 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 84 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 86 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 87 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 89 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_2, MSGBOX_DEFAULT
# 90 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_CheckRewardTiers
# 92 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	release
	end

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_2:
# 74 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_1, MSGBOX_DEFAULT
# 75 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	release
	end


Pokemon_Tutor_Inside_Script_CheckRewardTiers::
# 97 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_15, Pokemon_Tutor_Inside_Script_CheckRewardTiers_2
# 110 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_35, Pokemon_Tutor_Inside_Script_CheckRewardTiers_5
# 123 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_60, Pokemon_Tutor_Inside_Script_CheckRewardTiers_12
# 136 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_95, Pokemon_Tutor_Inside_Script_CheckRewardTiers_21
# 149 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_140, Pokemon_Tutor_Inside_Script_CheckRewardTiers_30
# 162 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_190, Pokemon_Tutor_Inside_Script_CheckRewardTiers_39
# 175 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_12, MSGBOX_DEFAULT
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_2:
# 98 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_8
# 105 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_1, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_7:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_5:
# 111 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 35
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_15
# 118 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_3, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_14:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_8:
# 99 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_0, MSGBOX_DEFAULT
# 100 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GivePokemonReward
# 101 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_CheckRewardTiers_18
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_7

Pokemon_Tutor_Inside_Script_CheckRewardTiers_12:
# 124 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 60
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_24
# 131 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_5, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_23:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_15:
# 112 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_2, MSGBOX_DEFAULT
# 113 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GivePokemonReward
# 114 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_CheckRewardTiers_27
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_14

Pokemon_Tutor_Inside_Script_CheckRewardTiers_18:
# 102 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_15
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_7

Pokemon_Tutor_Inside_Script_CheckRewardTiers_21:
# 137 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 95
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_33
# 144 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_7, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_32:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_24:
# 125 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_4, MSGBOX_DEFAULT
# 126 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GivePokemonReward
# 127 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_CheckRewardTiers_36
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_23

Pokemon_Tutor_Inside_Script_CheckRewardTiers_27:
# 115 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_35
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_14

Pokemon_Tutor_Inside_Script_CheckRewardTiers_30:
# 150 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 140
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_42
# 157 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_9, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_41:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_33:
# 138 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_6, MSGBOX_DEFAULT
# 139 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GivePokemonReward
# 140 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_CheckRewardTiers_45
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_32

Pokemon_Tutor_Inside_Script_CheckRewardTiers_36:
# 128 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_60
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_23

Pokemon_Tutor_Inside_Script_CheckRewardTiers_39:
# 163 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 190
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_48
# 170 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_11, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_47:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_42:
# 151 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_8, MSGBOX_DEFAULT
# 152 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GivePokemonReward
# 153 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_CheckRewardTiers_51
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_41

Pokemon_Tutor_Inside_Script_CheckRewardTiers_45:
# 141 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_95
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_32

Pokemon_Tutor_Inside_Script_CheckRewardTiers_48:
# 164 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_10, MSGBOX_DEFAULT
# 165 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GivePokemonReward
# 166 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_CheckRewardTiers_53
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_47

Pokemon_Tutor_Inside_Script_CheckRewardTiers_51:
# 154 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_140
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_41

Pokemon_Tutor_Inside_Script_CheckRewardTiers_53:
# 167 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_190
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_47


Pokemon_Tutor_Inside_Script_GivePokemonReward_Text_0:
# 6 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "I'm afraid I have no eligible partners\nfor you right now.$"

Pokemon_Tutor_Inside_Script_GivePokemonReward_Text_1:
# 11 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Take your pick!$"

Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_0:
# 18 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "No problem. I'll draw new choices when\nyou return.$"

Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_1:
# 35 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Would you like {STR_VAR_1}?$"

Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_2:
# 43 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_3:
# 45 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "I know you'll take great care of {STR_VAR_1}!\p"
	.string "Come back anytime you want to see how many\n"
	.string "Pokémon you've caught!\p$"

Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_4:
# 52 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "{STR_VAR_1} was sent to the PC!$"

Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_5:
# 54 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "I know you'll take great care of {STR_VAR_1}!\p"
	.string "Come back anytime you want to see how\n"
	.string "many Pokémon you've caught!\p$"

Pokemon_Tutor_Inside_Script_SelectPokemonReward_Text_6:
# 59 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your party and PC are full! Make room\nand come back!$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_0:
# 71 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Ah hello young trainer! Are you here to\nsee how many Pokémon you've caught?$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_1:
# 74 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "No problem! Come back anytime.$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_2:
# 89 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon and caught\n{STR_VAR_2} Pokémon!\p$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_0:
# 99 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've caught 15 Pokémon!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_1:
# 105 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your first goal is to catch 15 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_2:
# 112 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wow! You've caught 35 Pokémon!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_3:
# 118 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 35 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_4:
# 125 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Incredible! You've caught 60 Pokémon!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_5:
# 131 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 60 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_6:
# 138 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 95 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_7:
# 144 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 95 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_8:
# 151 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 140 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_9:
# 157 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 140 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_10:
# 164 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 190 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_11:
# 170 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 190 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_12:
# 175 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "You've claimed all currently available rewards!\nKeep up the good work!$"
