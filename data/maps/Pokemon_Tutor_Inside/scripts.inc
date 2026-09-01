Pokemon_Tutor_Inside_MapScripts::
	.byte 0


Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught::
# 5 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	lock
# 6 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	faceplayer
# 8 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_0, MSGBOX_YESNO
# 10 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_2
# 16 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setvar VAR_0x8004, 0
# 17 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 19 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 20 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 21 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 23 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 24 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 26 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_2, MSGBOX_DEFAULT
# 28 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_CheckRewardTiers
# 30 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	release
	end

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_2:
# 11 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	release
	end


Pokemon_Tutor_Inside_Script_CheckRewardTiers::
# 35 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_15, Pokemon_Tutor_Inside_Script_CheckRewardTiers_2
# 45 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_35, Pokemon_Tutor_Inside_Script_CheckRewardTiers_5
# 55 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_60, Pokemon_Tutor_Inside_Script_CheckRewardTiers_12
# 65 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_95, Pokemon_Tutor_Inside_Script_CheckRewardTiers_19
# 75 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_140, Pokemon_Tutor_Inside_Script_CheckRewardTiers_26
# 85 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TUTOR_REWARD_190, Pokemon_Tutor_Inside_Script_CheckRewardTiers_33
# 95 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_12, MSGBOX_DEFAULT
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_2:
# 36 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_8
# 40 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_1, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_7:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_5:
# 46 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 35
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_15
# 50 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_3, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_14:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_8:
# 37 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GiveTier1Reward
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_7

Pokemon_Tutor_Inside_Script_CheckRewardTiers_12:
# 56 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 60
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_22
# 60 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_5, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_21:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_15:
# 47 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_2, MSGBOX_DEFAULT
# 48 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GiveTier2Reward
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_14

Pokemon_Tutor_Inside_Script_CheckRewardTiers_19:
# 66 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 95
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_29
# 70 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_7, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_28:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_22:
# 57 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_4, MSGBOX_DEFAULT
# 58 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GiveTier3Reward
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_21

Pokemon_Tutor_Inside_Script_CheckRewardTiers_26:
# 76 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 140
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_36
# 80 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_9, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_35:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_29:
# 67 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_6, MSGBOX_DEFAULT
# 68 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GiveTier4Reward
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_28

Pokemon_Tutor_Inside_Script_CheckRewardTiers_33:
# 86 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 190
	goto_if_ge Pokemon_Tutor_Inside_Script_CheckRewardTiers_40
# 90 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_11, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_CheckRewardTiers_39:
	return

Pokemon_Tutor_Inside_Script_CheckRewardTiers_36:
# 77 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_8, MSGBOX_DEFAULT
# 78 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GiveTier5Reward
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_35

Pokemon_Tutor_Inside_Script_CheckRewardTiers_40:
# 87 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_10, MSGBOX_DEFAULT
# 88 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GiveTier6Reward
	goto Pokemon_Tutor_Inside_Script_CheckRewardTiers_39


Pokemon_Tutor_Inside_Script_GiveTier1Reward::
# 100 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	givemon SPECIES_GROWLITHE, 5, ITEM_NONE
# 101 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_HandleGiftResult
# 102 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_GiveTier1Reward_2
Pokemon_Tutor_Inside_Script_GiveTier1Reward_1:
	return

Pokemon_Tutor_Inside_Script_GiveTier1Reward_2:
# 103 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_15
	goto Pokemon_Tutor_Inside_Script_GiveTier1Reward_1


Pokemon_Tutor_Inside_Script_GiveTier2Reward::
# 109 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_NONE
# 110 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_HandleGiftResult
# 111 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_GiveTier2Reward_2
Pokemon_Tutor_Inside_Script_GiveTier2Reward_1:
	return

Pokemon_Tutor_Inside_Script_GiveTier2Reward_2:
# 112 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_35
	goto Pokemon_Tutor_Inside_Script_GiveTier2Reward_1


Pokemon_Tutor_Inside_Script_GiveTier3Reward::
# 118 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	givemon SPECIES_DRATINI, 15, ITEM_NONE
# 119 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_HandleGiftResult
# 120 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_GiveTier3Reward_2
Pokemon_Tutor_Inside_Script_GiveTier3Reward_1:
	return

Pokemon_Tutor_Inside_Script_GiveTier3Reward_2:
# 121 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_RECEIVED_TUTOR_REWARD_60
	goto Pokemon_Tutor_Inside_Script_GiveTier3Reward_1


Pokemon_Tutor_Inside_Script_GiveTier4Reward::
# 127 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_GiveTier4Reward_Text_0, MSGBOX_DEFAULT
	return


Pokemon_Tutor_Inside_Script_GiveTier5Reward::
# 132 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_GiveTier4Reward_Text_0, MSGBOX_DEFAULT
	return


Pokemon_Tutor_Inside_Script_GiveTier6Reward::
# 137 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_GiveTier4Reward_Text_0, MSGBOX_DEFAULT
	return


Pokemon_Tutor_Inside_Script_HandleGiftResult::
# 142 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokemon_Tutor_Inside_Script_HandleGiftResult_2
# 142 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokemon_Tutor_Inside_Script_HandleGiftResult_2
# 147 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_1, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_HandleGiftResult_1:
	return

Pokemon_Tutor_Inside_Script_HandleGiftResult_2:
# 143 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_0, MSGBOX_DEFAULT
# 145 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	waitfanfare
	goto Pokemon_Tutor_Inside_Script_HandleGiftResult_1


Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_0:
# 8 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Ah hello young trainer! Are you here to\nsee how many Pokémon you've caught so far?$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_1:
# 11 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "No problem! Come back anytime.$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_2:
# 26 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon and\ncaught {STR_VAR_2} Pokémon!\p$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_0:
# 37 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 15 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_1:
# 40 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your first goal is to catch 15 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_2:
# 47 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 35 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_3:
# 50 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 35 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_4:
# 57 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 60 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_5:
# 60 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 60 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_6:
# 67 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 95 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_7:
# 70 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 95 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_8:
# 77 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 140 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_9:
# 80 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 140 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_10:
# 87 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 190 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_11:
# 90 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your next goal is to catch 190 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_Script_CheckRewardTiers_Text_12:
# 95 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "You've claimed all currently available rewards!\nKeep up the good work!$"

Pokemon_Tutor_Inside_Script_GiveTier4Reward_Text_0:
# 127 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "This reward has not been configured yet.$"

Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_0:
# 144 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "{PLAYER} received the Pokémon!$"

Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_1:
# 147 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your party and PC are full! Make room and return.$"
