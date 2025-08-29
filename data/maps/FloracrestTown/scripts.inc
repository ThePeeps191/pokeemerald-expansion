FloracrestTown_MapScripts::
	.byte 0


FloracrestTown_EventScript_PlayersHouseSign::
# 6 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_PlayersHouseSign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_BaySign::
# 10 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_BaySign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_RivalsHouseSign::
# 14 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_RivalsHouseSign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_ProfessorLabSign::
# 18 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_ProfessorLabSign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_TownSign::
# 22 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


FloracrestTown_EventScript_FatMan::
# 26 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_FatMan_Text_0, MSGBOX_NPC
	return


FloracrestTown_EventScript_SailorInteract::
# 30 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_SailorInteract_Text_0, MSGBOX_NPC
	return


FloracrestTown_EventScript_DockFisherman::
# 34 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_DockFisherman_Text_0, MSGBOX_NPC
# 35 "data/maps/FloracrestTown/scripts.pory"
	applymovement LOCALID_FLORACREST_FISHERMAN, Common_Movement_FaceDown
	return


FloracrestTown_EventScript_GuardKid::
# 39 "data/maps/FloracrestTown/scripts.pory"
	msgbox FloracrestTown_EventScript_GuardKid_Text_0, MSGBOX_NPC
# 40 "data/maps/FloracrestTown/scripts.pory"
	applymovement LOCALID_FLORACREST_GUARDKID, Common_Movement_FaceDown
	return


FloracrestTown_EventScript_PlayersHouseSign_Text_0:
# 6 "data/maps/FloracrestTown/scripts.pory"
	.string "{PLAYER}'s House$"

FloracrestTown_EventScript_BaySign_Text_0:
# 10 "data/maps/FloracrestTown/scripts.pory"
	.string "Floracrest Bay$"

FloracrestTown_EventScript_RivalsHouseSign_Text_0:
# 14 "data/maps/FloracrestTown/scripts.pory"
	.string "Rival Elena's House$"

FloracrestTown_EventScript_ProfessorLabSign_Text_0:
# 18 "data/maps/FloracrestTown/scripts.pory"
	.string "Prof. Calla's Pokémon Lab$"

FloracrestTown_EventScript_TownSign_Text_0:
# 22 "data/maps/FloracrestTown/scripts.pory"
	.string "Floracrest Town\n“Where journeys take root”$"

FloracrestTown_EventScript_FatMan_Text_0:
# 26 "data/maps/FloracrestTown/scripts.pory"
	.string "{COLOR BLUE}Astaria is really cozy!\pI moved here from Kalos and it's so\nmuch more peaceful.\pMaybe I should visit the calm seaside\ntoo…$"

FloracrestTown_EventScript_SailorInteract_Text_0:
# 30 "data/maps/FloracrestTown/scripts.pory"
	.string "{COLOR BLUE}You're not cut out for the sea, kid.\pGet off the dock!$"

FloracrestTown_EventScript_DockFisherman_Text_0:
# 34 "data/maps/FloracrestTown/scripts.pory"
	.string "{COLOR BLUE}The sea is a great place to relax.\pI come here to fish whenever I can!$"

FloracrestTown_EventScript_GuardKid_Text_0:
# 39 "data/maps/FloracrestTown/scripts.pory"
	.string "{COLOR BLUE}My dad's a guard at the\nFloracrest Bay Lighthouse!\pHe says it's his job to protect\nthe town from sea monsters!$"
