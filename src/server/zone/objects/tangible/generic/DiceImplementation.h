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

#ifndef DICEIMPLEMENTATION_H_
#define DICEIMPLEMENTATION_H_

#include "Dice.h"

#include "../../player/Player.h"
#include "../../../Zone.h"
#include "../../../managers/item/ItemManager.h"

class DiceImplementation : public DiceServant {
protected:
	uint32 diceType;
	int diceSides;

public:
	static const uint32 CHANCECUBE 	= 0x221F0907;
	static const uint32 CONFIGURABLE 	= 0x484AC6A6;
	static const uint32 CENTIHEDRON	= 0x821DB6E8;
	static const uint32 HEXAHEDRON	= 0xBF64B1E4;
	static const uint32 DECAHEDRON	= 0xB5E34222;
	static const uint32 DODECAHEDRON	= 0x81B6977D;
	static const uint32 ICOSAHEDRON	= 0xD474E5E7;

public:

	DiceImplementation(uint64 oid, uint32 tempCRC, const UnicodeString& n, const String& tempn);
	DiceImplementation(CreatureObject* creature, uint64 oid, uint32 tempCRC, const UnicodeString& n, const String& tempn);
	DiceImplementation(CreatureObject* creature, uint32 tempCRC, const UnicodeString& n, const String& tempn);

	~DiceImplementation();

	virtual void sendDeltas(Player* player);

	void generateAttributes(SceneObject* obj);

	virtual void parseItemAttributes();
	virtual void addAttributes(AttributeListMessage* alm);
	void addHeaderAttributes(AttributeListMessage* alm);
	void addFooterAttributes(AttributeListMessage* alm);

    void init();
    void sendRadialResponseTo(Player* player, ObjectMenuResponse* omr);
    void rollDice(Player* player, int dnum);
	void setConfigurableDice(int dsides);
};

#endif /* DICEIMPLEMENTATION_H_ */
