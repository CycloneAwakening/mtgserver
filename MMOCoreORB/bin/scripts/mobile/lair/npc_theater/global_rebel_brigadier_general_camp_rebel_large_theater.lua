global_rebel_brigadier_general_camp_rebel_large_theater = Lair:new {
	mobiles = {
		{"rebel_brigadier_general",1},
		{"rebel_major",1},
		{"rebel_first_lieutenant",2}
	},
	spawnLimit = 15,
	buildingsVeryEasy = {"object/building/poi/anywhere_rebel_camp_large_1.iff"},
	buildingsEasy = {"object/building/poi/anywhere_rebel_camp_large_1.iff"},
	buildingsMedium = {"object/building/poi/anywhere_rebel_camp_large_1.iff"},
	buildingsHard = {"object/building/poi/anywhere_rebel_camp_large_1.iff"},
	buildingsVeryHard = {"object/building/poi/anywhere_rebel_camp_large_1.iff"},
	missionBuilding = "object/tangible/lair/base/objective_banner_rebel.iff",
	mobType = "npc",
	buildingType = "theater",
	faction = "rebel"
}

addLairTemplate("global_rebel_brigadier_general_camp_rebel_large_theater", global_rebel_brigadier_general_camp_rebel_large_theater)
