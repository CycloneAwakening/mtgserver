lim_paddu = Creature:new {
	objectName = "@mob/creature_names:gungan_priest",
	customName = "Lim Paddu",
	socialGroup = "gungan",
	faction = "gungan",
	level = 16,
	chanceHit = 0.31,
	damageMin = 170,
	damageMax = 180,
	baseXp = 1102,
	baseHAM = 2900,
	baseHAMmax = 3500,
	armor = 0,
	resists = {15,15,15,15,15,15,15,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	optionsBitmask = AIENABLED + CONVERSABLE,
	diet = HERBIVORE,

	templates = {"object/mobile/gungan_s02_male.iff"},
	conversationTemplate = "pooja_naberrie_mission_target_convotemplate",
	weapons = {"rebel_weapons_medium"},
  	attacks = merge(brawlernovice,marksmannovice)
}

CreatureTemplates:addCreatureTemplate(lim_paddu, "lim_paddu")
