FloracrestTown_PlayersHouse_1F_MapScripts::
	.byte 0


FloracrestTown_PlayersHouse_1F_EventScript_DadScript::
# 6 "data/maps/FloracrestTown_PlayersHouse_1F/scripts.pory"
	msgbox FloracrestTown_PlayersHouse_1F_EventScript_DadScript_Text_0, MSGBOX_NPC
	return


FloracrestTown_PlayersHouse_1F_EventScript_BrotherScript::
# 10 "data/maps/FloracrestTown_PlayersHouse_1F/scripts.pory"
	msgbox FloracrestTown_PlayersHouse_1F_EventScript_BrotherScript_Text_0, MSGBOX_NPC
# 11 "data/maps/FloracrestTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERSHOUSE_BROTHER, Common_Movement_FaceDown
	return


FloracrestTown_PlayersHouse_1F_EventScript_MomScript::
# 15 "data/maps/FloracrestTown_PlayersHouse_1F/scripts.pory"
	msgbox FloracrestTown_PlayersHouse_1F_EventScript_MomScript_Text_0, MSGBOX_NPC
	return


FloracrestTown_PlayersHouse_1F_EventScript_DadScript_Text_0:
# 6 "data/maps/FloracrestTown_PlayersHouse_1F/scripts.pory"
	.string "{COLOR BLUE}The Pokémon War is finally over!\pI can stay home with your mom and\nbrother now.$"

FloracrestTown_PlayersHouse_1F_EventScript_BrotherScript_Text_0:
# 10 "data/maps/FloracrestTown_PlayersHouse_1F/scripts.pory"
	.string "{COLOR BLUE}Hey {PLAYER}, quit bothering me!\pI'm playing Kirby on my Gameboy.$"

FloracrestTown_PlayersHouse_1F_EventScript_MomScript_Text_0:
# 15 "data/maps/FloracrestTown_PlayersHouse_1F/scripts.pory"
	.string "{COLOR RED}Go explore Floracrest Town, honey!\nI'll take care of the unpacking.$"
