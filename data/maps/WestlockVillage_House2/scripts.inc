WestlockVillage_House2_MapScripts::
	.byte 0


WestlockVillage_House2_NPC::
# 5 "data/maps/WestlockVillage_House2/scripts.pory"
	lock
# 6 "data/maps/WestlockVillage_House2/scripts.pory"
	faceplayer
# 8 "data/maps/WestlockVillage_House2/scripts.pory"
	goto_if_set FLAG_TALKED_TO_WESTLOCK_NPC2, WestlockVillage_House2_NPC_2
# 16 "data/maps/WestlockVillage_House2/scripts.pory"
	msgbox WestlockVillage_House2_NPC_Text_1, MSGBOX_YESNO
# 18 "data/maps/WestlockVillage_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WestlockVillage_House2_NPC_5
# 35 "data/maps/WestlockVillage_House2/scripts.pory"
	msgbox WestlockVillage_House2_NPC_Text_4, MSGBOX_DEFAULT
WestlockVillage_House2_NPC_1:
# 39 "data/maps/WestlockVillage_House2/scripts.pory"
	release
	end

WestlockVillage_House2_NPC_2:
# 10 "data/maps/WestlockVillage_House2/scripts.pory"
	msgbox WestlockVillage_House2_NPC_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/WestlockVillage_House2/scripts.pory"
	release
	end

WestlockVillage_House2_NPC_5:
# 20 "data/maps/WestlockVillage_House2/scripts.pory"
	msgbox WestlockVillage_House2_NPC_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/WestlockVillage_House2/scripts.pory"
	setflag FLAG_TALKED_TO_WESTLOCK_NPC2
# 23 "data/maps/WestlockVillage_House2/scripts.pory"
	setvar VAR_0x8000, ITEM_ANTIDOTE
# 24 "data/maps/WestlockVillage_House2/scripts.pory"
	setvar VAR_0x8001, 3
# 25 "data/maps/WestlockVillage_House2/scripts.pory"
	call Std_ObtainItem
# 27 "data/maps/WestlockVillage_House2/scripts.pory"
	setvar VAR_0x8000, ITEM_PARALYZE_HEAL
# 28 "data/maps/WestlockVillage_House2/scripts.pory"
	setvar VAR_0x8001, 3
# 29 "data/maps/WestlockVillage_House2/scripts.pory"
	call Std_ObtainItem
# 31 "data/maps/WestlockVillage_House2/scripts.pory"
	msgbox WestlockVillage_House2_NPC_Text_3
	goto WestlockVillage_House2_NPC_1


WestlockVillage_House2_NPC_Text_0:
# 10 "data/maps/WestlockVillage_House2/scripts.pory"
	.string "We've already talked, so I guess I'll\n"
	.string "just keep standing here.$"

WestlockVillage_House2_NPC_Text_1:
# 16 "data/maps/WestlockVillage_House2/scripts.pory"
	.string "So, I'm supposed to just stand here the\n"
	.string "whole time and wait for you to come into\l"
	.string "my house and talk to me?$"

WestlockVillage_House2_NPC_Text_2:
# 20 "data/maps/WestlockVillage_House2/scripts.pory"
	.string "Well, at least you're honest.$"

WestlockVillage_House2_NPC_Text_3:
# 31 "data/maps/WestlockVillage_House2/scripts.pory"
	.string "Ahhhh, I feel like a weight has been\n"
	.string "lifted off my shoulders. Or perhaps it\l"
	.string "was just those items...$"

WestlockVillage_House2_NPC_Text_4:
# 35 "data/maps/WestlockVillage_House2/scripts.pory"
	.string "Huh, I guess I'll just keep standing\n"
	.string "here then.$"
