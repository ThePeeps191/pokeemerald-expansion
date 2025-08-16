FloracrestTown_MapScripts::
	.byte 0


FloracrestTown_EventScript_PlayersHouseSign::
# 6 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_RivalsHouseSign::
# 10 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_RivalsHouseSign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_TownSign::
# 14 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_FatMan::
# 18 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_FatMan_Text_0, MSGBOX_NPC
	return


FloracrestTown_EventScript_PlayersHouseSign_Text_0:
# 6 "data/maps/FloracrestTown/scripts.pory"
	.string "{PLAYER}'s House$"

FloracrestTown_EventScript_RivalsHouseSign_Text_0:
# 10 "data/maps/FloracrestTown/scripts.pory"
	.string "Rival's House$"

FloracrestTown_EventScript_TownSign_Text_0:
# 14 "data/maps/FloracrestTown/scripts.pory"
	.string "Floracrest Town\n“Where journeys take root”$"

FloracrestTown_EventScript_FatMan_Text_0:
# 18 "data/maps/FloracrestTown/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Astaria is really cozy!\pI moved here from Kalos and it's so\npeaceful.\pMaybe I should visit the calm seaside\ntoo…$"
