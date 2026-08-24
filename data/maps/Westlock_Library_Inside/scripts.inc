Westlock_Library_Inside_MapScripts::
	.byte 0


Westlock_Library_Inside_EventScripts_MeetProfLarch::
# 5 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0, MSGBOX_DEFAULT
# 6 "data/maps/Westlock_Library_Inside/scripts.pory"
	msgbox Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1, MSGBOX_DEFAULT
# 8 "data/maps/Westlock_Library_Inside/scripts.pory"
	playse SE_PIN
# 9 "data/maps/Westlock_Library_Inside/scripts.pory"
	applymovement LOCALID_PROF_LARCH, Common_Movement_ExclamationMark
# 10 "data/maps/Westlock_Library_Inside/scripts.pory"
	waitmovement LOCALID_PROF_LARCH
# 11 "data/maps/Westlock_Library_Inside/scripts.pory"
	delay 30
# 12 "data/maps/Westlock_Library_Inside/scripts.pory"
	faceplayer
	return


Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_0:
# 5 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "This room is far too humid for these books.\nI can barely make out the text...$"

Westlock_Library_Inside_EventScripts_MeetProfLarch_Text_1:
# 6 "data/maps/Westlock_Library_Inside/scripts.pory"
	.string "... 'And when the great storm broke...\nthe amber force grew so intense that th-$"
