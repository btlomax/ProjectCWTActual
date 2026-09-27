Weirford_MapScripts::
	.byte 0


Weirford_MapScripts_GreetingsSign::
# 4 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GreetingsSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_GymSign::
# 8 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GymSign_Text_0, MSGBOX_SIGN
	return


Weirford_MapScripts_MartNPC::
# 12 "data/maps/Weirford/scripts.pory"
	lock
# 13 "data/maps/Weirford/scripts.pory"
	faceplayer
# 14 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_MartNPC_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_GardenNPC::
# 20 "data/maps/Weirford/scripts.pory"
	lock
# 21 "data/maps/Weirford/scripts.pory"
	faceplayer
# 22 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GardenNPC_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_GreetingsSign_Text_0:
# 4 "data/maps/Weirford/scripts.pory"
	.string "Welcome to Weirford!$"

Weirford_MapScripts_GymSign_Text_0:
# 8 "data/maps/Weirford/scripts.pory"
	.string "The text has faded away...$"

Weirford_MapScripts_MartNPC_Text_0:
# 14 "data/maps/Weirford/scripts.pory"
	.string "Have you been inside that scary looking\nbuilding yet?$"

Weirford_MapScripts_GardenNPC_Text_0:
# 22 "data/maps/Weirford/scripts.pory"
	.string "A bit of greenery in a town is\nalways welcome."
	.string "It makes everything feel fresher.\p$"
