/*
Copyright (C) 2007 <SWGEmu>
 
This File is part of Core3.
 
This program is free software; you can redistribute 
it and/or modify it under the terms of the GNU Lesser 
General Public License as published by the Free Software
Foundation; either version 2 of the License, 
or (at your option) any later version.
 
This program is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
See the GNU Lesser General Public License for
more details.
 
You should have received a copy of the GNU Lesser General 
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
Linking Engine3 statically or dynamically with other modules 
is making a combined work based on Engine3. 
Thus, the terms and conditions of the GNU Lesser General Public License 
cover the whole combination.
 
In addition, as a special exception, the copyright holders of Engine3 
give you permission to combine Engine3 program with free software 
programs or libraries that are released under the GNU LGPL and with 
code included in the standard release of Core3 under the GNU LGPL 
license (or modified versions of such code, with unchanged license). 
You may copy and distribute such a system following the terms of the 
GNU LGPL for Engine3 and the licenses of the other code concerned, 
provided that you include the source code of that other code when 
and as the GNU LGPL requires distribution of source code.
 
Note that people who make modified versions of Engine3 are not obligated 
to grant this special exception for their modified versions; 
it is their choice whether to do so. The GNU Lesser General Public License 
gives permission to release a modified version without this exception; 
this exception also makes it possible to release a modified version 
which carries forward this exception.
*/

#ifndef TANGIBLEOBJECTIMPLEMENTATION_H_
#define TANGIBLEOBJECTIMPLEMENTATION_H_

#include "engine/engine.h"

#include "../../../db/ServerDatabase.h"

#include "../scene/SceneObject.h"

#include "TangibleObject.h"

class Zone;
class CreatureObject;
class Player;
class BuildingObject;

class TangibleObjectImplementation : public TangibleObjectServant {
protected:
	Zone* zone;
	
	int conditionDamage;
	int maxCondition;

	bool persistent, updated;

	uint32 templateID;
	int objectSubType;

	SceneObject* container;
	
	BuildingObject* building;

	unicode name;
	string templateTypeName;
	string templateName;
	
	string customizationString;

	int objectCount;

	bool equipped;
	
	uint32 pvpStatusBitmask;

public:
	static const int ROBE = 1;
	//static const int WEAPON = 2;
	static const int CLOTH = 3;
	//static const int ARMOR = 4;
	static const int HAIR = 5;
	static const int TICKET = 6;
	static const int TERMINAL = 7;
	static const int TICKETCOLLECTOR = 8;
	static const int INSTRUMENT = 9;
	static const int LAIR = 10;
	static const int HOLOCRON = 11;
	static const int FIREWORK = 12;
	static const int SHIPCOMPONENT = 13;
	
	static const int RESOURCECONTAINER = 4194304;
	static const int ENERGYGAS = 4194305;
	static const int ENERGYLIQUID = 4194306;
	static const int ENERGYRADIOACTIVE = 4194307;
	static const int ENERGYSOLID = 4194308;
	static const int INORGANICCHEMICAL = 4194309;
	static const int INORGANICGAS = 4194310;
	static const int INORGANICMINERAL = 4194311;
	static const int WATER = 4194312;
	static const int ORGANICFOOD = 4194313;
	static const int ORGANICHIDE = 4194314;
	static const int ORGANICSTRUCTURAL = 4194315;
	// static const int RESOURCECONTAINER = 4194316;
	
	static const int SURVEYTOOL = 32770;
	
	static const int ARMOR = 256;
	static const int BODYARMOR = 257;
	static const int HEADARMOR = 258;
	static const int MISCARMOR = 259;
	static const int LEGARMOR = 260;
	static const int ARMARMOR = 261;
	static const int HANDARMOR = 262;
	static const int FOOTARMOR = 263;
	static const int SHIELDGENERATOR = 264;
	
	static const int WEAPON = 131072;
	static const int MELEEWEAPON = 131073;
	static const int RANGEDWEAPON = 131074;
	static const int THROWNWEAPON = 131075;
	static const int HEAVYWEAPON = 131076;
	static const int MINE = 131077;
	static const int SPECIALHEAVYWEAPON = 131078;
	static const int ONEHANDMELEEWEAPON = 131079;
	static const int TWOHANDMELEEWEAPON = 131080;
	static const int POLEARM = 131081;
	static const int PISTOL = 131082;
	static const int CARBINE = 131083;
	static const int RIFLE = 131084;
	
public:
	TangibleObjectImplementation(uint64 oid, int tp = 0);
	TangibleObjectImplementation(uint64 oid, const unicode& name, const string& tempname, uint32 tempCRC, int tp = 0);
	TangibleObjectImplementation(CreatureObject* creature, const unicode& name, const string& tempname, uint32 tempCRC, int tp = 0);

	void initialize();
	
	void insertToZone(Zone* zone);
	void removeFromZone();

	void sendTo(Player* player, bool doClose = true);

	void sendDestroyTo(Player* player);

	void close(Player* player);
	
	void repairItem(Player* player);
	
	virtual void decay(int decayRate);

	inline TangibleObject* deploy() {
		return (TangibleObject*) SceneObjectImplementation::deploy();
	}
	
	// setters and getters
	inline void setContainer(SceneObject* cont, uint32 type = 0x04) {
		container = cont;
		linkType = type;
	}

	inline void setPersistent(bool pers) {
		persistent = pers;
	}

	inline void setUpdated(bool upd) {
		updated = upd;
	}

	inline void setEquipped(bool eqp) {
		equipped = eqp;
	}

	inline void setCustomizationString(string& cust) {
		customizationString = cust;
	}
	
	inline void setMaxCondition(int condition) {
		maxCondition = condition;
	}

	inline void setConditionDamage(int damage) {
		conditionDamage = damage;
	}

	inline bool isPersistent() {
		return persistent;
	}
	
	inline bool isUpdated() {
		return updated;
	}
	
	inline SceneObject* getContainer() {
		return container;
	}
	
	inline unicode& getName() {
		return name;
	}

	inline uint32 getTemplateID() {
		return templateID;
	}

	inline string& getTemplateName() {
		return templateName;
	}

	inline string& getCustomizationString() {
		return customizationString;
	}

	inline string& getTemplateTypeName() {
		return templateTypeName;
	}
	
	inline int getObjectCount() {
		return objectCount;
	}
	
	bool isEquipped() {
		return equipped;
	}
	
	inline int getObjectSubType() { 
		return objectSubType;
	}
	
	inline bool isWeapon() {
		return (objectSubType == WEAPON);
	}
	
	inline bool isArmor() {
		return (objectSubType == ARMOR);
	}
	
	inline bool isResource() {
		return objectSubType == RESOURCECONTAINER || objectSubType == ENERGYGAS || 
			objectSubType == ENERGYLIQUID || objectSubType == ENERGYRADIOACTIVE || 
			objectSubType == ENERGYSOLID || objectSubType == INORGANICCHEMICAL || 
			objectSubType == INORGANICGAS || objectSubType == INORGANICMINERAL || 
			objectSubType == WATER || objectSubType == ORGANICFOOD || 
			objectSubType == ORGANICHIDE || objectSubType == ORGANICSTRUCTURAL;
	}
	
	inline bool isSurveyTool() {
		return objectSubType == SURVEYTOOL;
	}
	
	inline bool isTicket() {
		return objectSubType == TICKET;
	}
	
	inline bool isHolocron() {
		return objectSubType == HOLOCRON;
	}
	
	inline bool isFirework() {
		return objectSubType == FIREWORK;
	}

	inline int getConditionDamage() {
		return conditionDamage;
	}
	
	inline int getMaxCondition() {
		return maxCondition;
	}
	
	inline int getCondition() {
		return maxCondition - conditionDamage;
	}
};

#endif /*TANGIBLEOBJECTIMPLEMENTATION_H_*/
