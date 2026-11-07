Weirford_Jonas_House_MapScripts::
# 3 "data/maps/Weirford_Jonas_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Weirford_Jonas_House_MapScripts_OnTransition
	.byte 0


Weirford_Jonas_House_MapScripts_OnTransition::
# 8 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Weirford_Jonas_House_MapScripts_OnTransition_2
# 13 "data/maps/Weirford_Jonas_House/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_JONAS_INSIDE
# 14 "data/maps/Weirford_Jonas_House/scripts.pory"
	removeobject LOCALID_WEIRFORD_JONAS_INSIDE
Weirford_Jonas_House_MapScripts_OnTransition_1:
# 17 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_TOBY_SAVED, Weirford_Jonas_House_MapScripts_OnTransition_6
# 22 "data/maps/Weirford_Jonas_House/scripts.pory"
	setflag FLAG_HIDE_WEIRFORD_TOBY_INSIDE
# 23 "data/maps/Weirford_Jonas_House/scripts.pory"
	removeobject LOCALID_TOBY_INSIDE
Weirford_Jonas_House_MapScripts_OnTransition_5:
	end

Weirford_Jonas_House_MapScripts_OnTransition_2:
# 9 "data/maps/Weirford_Jonas_House/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_JONAS_INSIDE
# 10 "data/maps/Weirford_Jonas_House/scripts.pory"
	addobject LOCALID_WEIRFORD_JONAS_INSIDE
	goto Weirford_Jonas_House_MapScripts_OnTransition_1

Weirford_Jonas_House_MapScripts_OnTransition_6:
# 18 "data/maps/Weirford_Jonas_House/scripts.pory"
	clearflag FLAG_HIDE_WEIRFORD_TOBY_INSIDE
# 19 "data/maps/Weirford_Jonas_House/scripts.pory"
	addobject LOCALID_TOBY_INSIDE
	goto Weirford_Jonas_House_MapScripts_OnTransition_5


Weirford_Jonas_House_Interact::
# 31 "data/maps/Weirford_Jonas_House/scripts.pory"
	faceplayer
# 33 "data/maps/Weirford_Jonas_House/scripts.pory"
	switch VAR_QUEST_THE_HOUSE_IN_THE_WOODS_STATE
# 35 "data/maps/Weirford_Jonas_House/scripts.pory"
	case QUEST_THE_HOUSE_IN_THE_WOODS_STAGE_TALK_TO_THE_MAN, Weirford_Jonas_House_Interact_2
# 38 "data/maps/Weirford_Jonas_House/scripts.pory"
	case QUEST_THE_HOUSE_IN_THE_WOODS_STAGE_FIND_THE_HOUSE, Weirford_Jonas_House_Interact_3
# 41 "data/maps/Weirford_Jonas_House/scripts.pory"
	case QUEST_THE_HOUSE_IN_THE_WOODS_STAGE_RETURN_TO_THE_MAN, Weirford_Jonas_House_Interact_4
# 44 "data/maps/Weirford_Jonas_House/scripts.pory"
	case QUEST_THE_HOUSE_IN_THE_WOODS_STAGE_COMPLETE, Weirford_Jonas_House_Interact_5
	return

Weirford_Jonas_House_Interact_2:
# 36 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto Weirford_Jonas_House_Interact_StartQuest
	return

Weirford_Jonas_House_Interact_3:
# 39 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_Text_0, MSGBOX_DEFAULT
	return

Weirford_Jonas_House_Interact_4:
# 42 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto Weirford_Jonas_House_Interact_QuestReturn
	return

Weirford_Jonas_House_Interact_5:
# 45 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_TOBY_SAVED, Weirford_Jonas_House_Interact_6
# 49 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_Text_2, MSGBOX_DEFAULT
	return

Weirford_Jonas_House_Interact_6:
# 46 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_Text_1, MSGBOX_DEFAULT
	return


Weirford_Jonas_House_Interact_StartQuest::
# 56 "data/maps/Weirford_Jonas_House/scripts.pory"
	lock
# 57 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_StartQuest_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/Weirford_Jonas_House/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Weirford_Jonas_House/scripts.pory"
	applymovement LOCALID_WEIRFORD_JONAS_INSIDE, Common_Movement_ExclamationMark
# 60 "data/maps/Weirford_Jonas_House/scripts.pory"
	waitmovement LOCALID_WEIRFORD_JONAS_INSIDE
# 61 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_StartQuest_Text_1, MSGBOX_YESNO
# 63 "data/maps/Weirford_Jonas_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Weirford_Jonas_House_Interact_StartQuest_2
# 84 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_StartQuest_Text_4, MSGBOX_DEFAULT
Weirford_Jonas_House_Interact_StartQuest_1:
# 87 "data/maps/Weirford_Jonas_House/scripts.pory"
	release
	end

Weirford_Jonas_House_Interact_StartQuest_2:
# 65 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_StartQuest_Text_2, MSGBOX_DEFAULT
# 66 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_StartQuest_Text_3, MSGBOX_DEFAULT
# 78 "data/maps/Weirford_Jonas_House/scripts.pory"
	setvar VAR_0x8004, QUEST_THE_HOUSE_IN_THE_WOODS
# 79 "data/maps/Weirford_Jonas_House/scripts.pory"
	setvar VAR_0x8005, QUEST_THE_HOUSE_IN_THE_WOODS_STAGE_FIND_THE_HOUSE
# 80 "data/maps/Weirford_Jonas_House/scripts.pory"
	special Quest_SetStage
	goto Weirford_Jonas_House_Interact_StartQuest_1


Weirford_Jonas_House_Interact_QuestReturn::
# 93 "data/maps/Weirford_Jonas_House/scripts.pory"
	lock
# 94 "data/maps/Weirford_Jonas_House/scripts.pory"
	faceplayer
# 96 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto_if_set FLAG_WEIRFORD_HOUSE_TOBY_SAVED, Weirford_Jonas_House_Interact_QuestReturn_2
Weirford_Jonas_House_Interact_QuestReturn_1:
# 100 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto Weirford_Jonas_House_Interact_QuestReturn_TobyLost
	return

Weirford_Jonas_House_Interact_QuestReturn_2:
# 97 "data/maps/Weirford_Jonas_House/scripts.pory"
	goto Weirford_Jonas_House_Interact_QuestReturn_TobySaved
	goto Weirford_Jonas_House_Interact_QuestReturn_1


Weirford_Jonas_House_Interact_QuestReturn_TobySaved::
# 105 "data/maps/Weirford_Jonas_House/scripts.pory"
	lock
# 106 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_QuestReturn_TobySaved_Text_0
# 110 "data/maps/Weirford_Jonas_House/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 111 "data/maps/Weirford_Jonas_House/scripts.pory"
	release
# 113 "data/maps/Weirford_Jonas_House/scripts.pory"
	setvar VAR_0x8004, QUEST_THE_HOUSE_IN_THE_WOODS
# 114 "data/maps/Weirford_Jonas_House/scripts.pory"
	special Quest_Complete
	end


Weirford_Jonas_House_Interact_QuestReturn_TobyLost::
# 121 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_QuestReturn_TobyLost_Text_0
# 130 "data/maps/Weirford_Jonas_House/scripts.pory"
	release
# 132 "data/maps/Weirford_Jonas_House/scripts.pory"
	setvar VAR_0x8004, QUEST_THE_HOUSE_IN_THE_WOODS
# 133 "data/maps/Weirford_Jonas_House/scripts.pory"
	special Quest_Complete
	end


Weirford_Jonas_House_Interact_Toby::
# 140 "data/maps/Weirford_Jonas_House/scripts.pory"
	lock
# 141 "data/maps/Weirford_Jonas_House/scripts.pory"
	faceplayer
# 142 "data/maps/Weirford_Jonas_House/scripts.pory"
	msgbox Weirford_Jonas_House_Interact_Toby_Text_0, MSGBOX_DEFAULT
# 144 "data/maps/Weirford_Jonas_House/scripts.pory"
	release
	end


Weirford_Jonas_House_Interact_Text_0:
# 39 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "Have you found any clues about my\n"
	.string "brother yet?$"

Weirford_Jonas_House_Interact_Text_1:
# 46 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "Thank you for saving TOBY, he's next\n"
	.string "door if you want to go and see him, I'm\l"
	.string "sure he would like that.$"

Weirford_Jonas_House_Interact_Text_2:
# 49 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "Get out.$"

Weirford_Jonas_House_Interact_StartQuest_Text_0:
# 57 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "AH! It's you again! Is that, a gym\n"
	.string "badge? I didn't know it was still active.$"

Weirford_Jonas_House_Interact_StartQuest_Text_1:
# 61 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "That means you can use CUT! In that\n"
	.string "case, will you hear me out?$"

Weirford_Jonas_House_Interact_StartQuest_Text_2:
# 65 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "Thank you! You've a kind heart. OK, here\n"
	.string "we go...$"

Weirford_Jonas_House_Interact_StartQuest_Text_3:
# 66 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "My little brother, Toby, vanished two\n"
	.string "years ago after going into Weirford\l"
	.string "Forest. The whole town joined the\l"
	.string "search, but after weeks of nothing...\l"
	.string "everyone just gave up.\p"
	.string "Then came the storm last night. I don't\n"
	.string "know where it came from, but Toby's\l"
	.string "journal was on the floor outside when I\l"
	.string "got home today...\p"
	.string "Toby wrote about losing his favorite\n"
	.string "doll, he dropped it in the old stone\l"
	.string "basin and it was washed away... and how\l"
	.string "right after, something began stalking\l"
	.string "him..\p"
	.string "A Pokémon. He said it was watching him\n"
	.string "every night through the window...\p"
	.string "The last entry just says,\n"
	.string "'Itsinthehouseitsinthehouseitsinthehouse'\p"
	.string "{FONT_NARROW}choked sobs{FONT_NORMAL}\p"
	.string "I went into the forest to try and get\n"
	.string "into Weirford House but I couldn't get\l"
	.string "past the trees that were blocking the\l"
	.string "path...\p"
	.string "If you could help me find him, I would be\n"
	.string "forever grateful, I'm not a brave man\l"
	.string "but if there's any chance...\p"
	.string "...\p"
	.string "You'll need to find the house first and\n"
	.string "then go inside and look for clues...\p"
	.string "Please come back with any information\n"
	.string "you find...\p"
	.string "$"

Weirford_Jonas_House_Interact_StartQuest_Text_4:
# 84 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "I understand. Please come back if you\n"
	.string "change your mind.$"

Weirford_Jonas_House_Interact_QuestReturn_TobySaved_Text_0:
# 106 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "You found him! He's safe! He just\n"
	.string "appeared out of thin air, I...I thought I\l"
	.string "was seeing things! Please, tell me what\l"
	.string "happened.\p"
	.string "...\p"
	.string "A SHUPPET? It was keeping TOBY trapped\n"
	.string "in there? What for? No, never mind\l"
	.string "that...my brother is safe, thanks to\l"
	.string "you.\p"
	.string "Please, take this, it was hidden in the\n"
	.string "back of TOBY's journal.\p"
	.string "$"

Weirford_Jonas_House_Interact_QuestReturn_TobyLost_Text_0:
# 121 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "{FONT_NARROW}Jonas stares at the new Poké Ball on\n"
	.string "your belt, his eyes widening in\l"
	.string "recognition...{FONT_NORMAL}\p"
	.string "That...is that the thing from Toby's\n"
	.string "journal?\p"
	.string "He looks past you toward the doorway,\n"
	.string "his voice barely above a whisper.\p"
	.string "Where is he? Where's my brother?\p"
	.string "...\p"
	.string "{FONT_NARROW}Jonas's hands drop to his sides. Tears\n"
	.string "spill down his face, but his expression\l"
	.string "turns entirely blank as recognition\l"
	.string "dawns on him.{FONT_NORMAL}\p"
	.string "You captured it... You caught the thing\n"
	.string "that took him...but he died, and you're\l"
	.string "keeping it?\p"
	.string "{FONT_NARROW}He backs away slowly, wiping his eyes\n"
	.string "with a trembling hand.{FONT_NORMAL}\p"
	.string "Just...get out. Please. I never want to\n"
	.string "see you or that monster again.\p"
	.string "$"

Weirford_Jonas_House_Interact_Toby_Text_0:
# 142 "data/maps/Weirford_Jonas_House/scripts.pory"
	.string "Hello, I never got the chance to\n"
	.string "properly thank you for saving me. I\l"
	.string "don't remember much of what happened,\l"
	.string "Jonas says I've been gone for two\l"
	.string "years!\p"
	.string "I've got lots to catch up on, but first,\n"
	.string "I'm STARVING!\p"
	.string "$"
