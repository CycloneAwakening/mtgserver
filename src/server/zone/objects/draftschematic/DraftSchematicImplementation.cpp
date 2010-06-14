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

#include "DraftSchematic.h"
#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectMessage3.h"
#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectMessage6.h"
//#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectMessage7.h"
#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectMessage8.h"
#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectMessage9.h"
/*#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectDeltaMessage3.h"
#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectDeltaMessage6.h"
#include "server/zone/packets/manufactureschematic/ManufactureSchematicObjectDeltaMessage7.h"*/


void DraftSchematicImplementation::fillAttributeList(AttributeListMessage* alm, PlayerCreature* object) {


}

void DraftSchematicImplementation::sendBaselinesTo(SceneObject* player) {
	if (!player->isPlayerCreature())
		return;

	error("Trying to send DraftSchematic baselines, should not be sending");
}

void DraftSchematicImplementation::sendDraftSlotsTo(PlayerCreature* player) {

	PlayerCreature* playerCreature = (PlayerCreature*) player;

	ObjectControllerMessage* msg = new ObjectControllerMessage(player->getObjectID(), 0x0B, 0x01BF);

	msg->insertInt(schematicID);
	msg->insertInt(clientObjectCRC);

	msg->insertInt(complexity); // ex: 3
	msg->insertInt(size); // ex: 1
	msg->insertByte(2);

	insertIngredients(msg);

	player->sendMessage(msg);

}

void DraftSchematicImplementation::insertIngredients(ObjectControllerMessage* msg) {

	msg->insertInt(draftSlots.size());

	for(int i = 0; i < draftSlots.size(); ++i) {
		draftSlots.get(i)->insertToMessage(msg);
	}

	msg->insertShort(0);
}

void DraftSchematicImplementation::sendResourceWeightsTo(PlayerCreature* player) {
	ObjectControllerMessage* msg = new ObjectControllerMessage(player->getObjectID(), 0x1B, 0x0207);

	msg->insertInt(schematicID);
	msg->insertInt(clientObjectCRC);

	msg->insertByte(resourceWeights.size());

	//Send all the resource batch property data
	for (int i = 0; i < resourceWeights.size(); i++)
		resourceWeights.get(i)->insertBatchToMessage(msg);

	msg->insertByte(resourceWeights.size());

	//Send all the resource property data
	for (int i = 0; i < resourceWeights.size(); i++)
		resourceWeights.get(i)->insertToMessage(msg);

	player->sendMessage(msg);
}

void DraftSchematicImplementation::setObjectName(StringId& stringId) {
	objectName = stringId;
}
