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
# 16 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_GardenNPC::
# 21 "data/maps/Weirford/scripts.pory"
	lock
# 22 "data/maps/Weirford/scripts.pory"
	faceplayer
# 23 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_GardenNPC_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_OutsideGymNPC::
# 30 "data/maps/Weirford/scripts.pory"
	lock
# 31 "data/maps/Weirford/scripts.pory"
	faceplayer
# 32 "data/maps/Weirford/scripts.pory"
	msgbox Weirford_MapScripts_OutsideGymNPC_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/Weirford/scripts.pory"
	release
	end


Weirford_MapScripts_GreetingsSign_Text_0:
# 4 "data/maps/Weirford/scripts.pory"
	.string "Welcome to Weirford!$"

Weirford_MapScripts_GymSign_Text_0:
# 8 "data/maps/Weirford/scripts.pory"
	.string "Down the alley if you're\nlooking for a scrap!$"

Weirford_MapScripts_MartNPC_Text_0:
# 14 "data/maps/Weirford/scripts.pory"
	.string "Have you been inside that scary looking\nbuilding yet?$"

Weirford_MapScripts_GardenNPC_Text_0:
# 23 "data/maps/Weirford/scripts.pory"
	.string "A bit of greenery in a town is\nalways welcome.$"

Weirford_MapScripts_OutsideGymNPC_Text_0:
# 32 "data/maps/Weirford/scripts.pory"
	.string "Are you ready to go inside?$"
