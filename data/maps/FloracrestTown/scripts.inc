FloracrestTown_MapScripts::
	.byte 0


FloracrestTown_EventScript_PlayersHouseSign::
# 6 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_PlayersHouseSign_Text_0, MSGBOX_SIGN
	end


FloracrestTown_EventScript_FatMan::
# 11 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


FloracrestTown_EventScript_PlayersHouseSign_Text_0:
# 6 "data/maps/FloracrestTown/scripts.pory"
	.string "{PLAYER}'s HOUSE sigma$"

FloracrestTown_EventScript_FatMan_Text_0:
# 11 "data/maps/FloracrestTown/scripts.pory"
	.string "Astaria is really cozy! I moved here\n"
	.string "from Kalos and it's so nice here.$"
