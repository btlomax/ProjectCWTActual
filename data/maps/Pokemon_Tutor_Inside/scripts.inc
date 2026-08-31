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
	goto_if_unset FLAG_TEMP_1, Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_5
# 36 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_5, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_4:
# 39 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	release
	end

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_2:
# 11 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	release
	end

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_5:
# 29 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_ge Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_8
# 33 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_4, MSGBOX_DEFAULT
	goto Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_4

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_8:
# 30 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_3, MSGBOX_DEFAULT
# 31 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_GiveTier1Reward
	goto Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_4


Pokemon_Tutor_Inside_Script_GiveTier1Reward::
# 44 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	givemon SPECIES_GROWLITHE, 5, ITEM_NONE
# 45 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_HandleGiftResult
# 46 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_GiveTier1Reward_2
Pokemon_Tutor_Inside_Script_GiveTier1Reward_1:
	return

Pokemon_Tutor_Inside_Script_GiveTier1Reward_2:
# 47 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_TEMP_1
	goto Pokemon_Tutor_Inside_Script_GiveTier1Reward_1


Pokemon_Tutor_Inside_Script_GiveTier2Reward::
# 53 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	givemon SPECIES_EEVEE, 10, ITEM_NONE
# 54 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_HandleGiftResult
# 55 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_GiveTier2Reward_2
Pokemon_Tutor_Inside_Script_GiveTier2Reward_1:
	return

Pokemon_Tutor_Inside_Script_GiveTier2Reward_2:
# 56 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_TEMP_2
	goto Pokemon_Tutor_Inside_Script_GiveTier2Reward_1


Pokemon_Tutor_Inside_Script_GiveTier3Reward::
# 62 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	givemon SPECIES_DRATINI, 15, ITEM_NONE
# 63 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	call Pokemon_Tutor_Inside_Script_HandleGiftResult
# 64 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_ne Pokemon_Tutor_Inside_Script_GiveTier3Reward_2
Pokemon_Tutor_Inside_Script_GiveTier3Reward_1:
	return

Pokemon_Tutor_Inside_Script_GiveTier3Reward_2:
# 65 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	setflag FLAG_TEMP_3
	goto Pokemon_Tutor_Inside_Script_GiveTier3Reward_1


Pokemon_Tutor_Inside_Script_HandleGiftResult::
# 71 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Pokemon_Tutor_Inside_Script_HandleGiftResult_2
# 71 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Pokemon_Tutor_Inside_Script_HandleGiftResult_2
# 76 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_1, MSGBOX_DEFAULT
Pokemon_Tutor_Inside_Script_HandleGiftResult_1:
	return

Pokemon_Tutor_Inside_Script_HandleGiftResult_2:
# 72 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	msgbox Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_0, MSGBOX_DEFAULT
# 74 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	waitfanfare
	goto Pokemon_Tutor_Inside_Script_HandleGiftResult_1


Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_0:
# 8 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Ah hello young trainer! Are you here to see how many Pokémon you've caught so far?$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_1:
# 11 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "No problem! Come back anytime.$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_2:
# 26 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "You've seen {STR_VAR_1} Pokémon and caught {STR_VAR_2} Pokémon!\p$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_3:
# 30 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Wonderful! You've reached 15 caught Pokémon!\nHere is your reward!$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_4:
# 33 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your first goal is to catch 15 Pokémon.\nCome back when you've caught a few more!$"

Pokemon_Tutor_Inside_MapScripts_Check_Pokemon_Caught_Text_5:
# 36 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "You've already claimed all of your rewards!\nKeep up the good work!$"

Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_0:
# 73 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "{PLAYER} received the Pokémon!$"

Pokemon_Tutor_Inside_Script_HandleGiftResult_Text_1:
# 76 "data/maps/Pokemon_Tutor_Inside/scripts.pory"
	.string "Your party and PC are full! Make room and return.$"
