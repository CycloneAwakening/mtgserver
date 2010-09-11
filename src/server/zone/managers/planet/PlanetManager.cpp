/*
 *	server/zone/managers/planet/PlanetManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlanetManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	PlanetManagerStub
 */

PlanetManager::PlanetManager(Zone* planet, ZoneProcessServerImplementation* srv) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new PlanetManagerImplementation(planet, srv);
	_impl->_setStub(this);
}

PlanetManager::PlanetManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

PlanetManager::~PlanetManager() {
}


void PlanetManager::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->initializeTransientMembers();
}

void PlanetManager::initialize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->initialize();
}

void PlanetManager::loadRegions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadRegions();
}

void PlanetManager::loadNoBuildAreas() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadNoBuildAreas();
}

void PlanetManager::loadShuttles() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadShuttles();
}

void PlanetManager::loadBadgeAreas() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadBadgeAreas();
}

void PlanetManager::loadPerformanceLocations() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadPerformanceLocations();
}

void PlanetManager::loadHuntingTargets() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadHuntingTargets();
}

void PlanetManager::loadReconLocations() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadReconLocations();
}

ShuttleCreature* PlanetManager::getShuttle(const String& arrivalPoint) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(arrivalPoint);

		return (ShuttleCreature*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getShuttle(arrivalPoint);
}

void PlanetManager::addShuttle(const String& city, ShuttleCreature* shuttle) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addAsciiParameter(city);
		method.addObjectParameter(shuttle);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addShuttle(city, shuttle);
}

bool PlanetManager::isNoBuildArea(float x, float y, StringId& fullAreaName) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->isNoBuildArea(x, y, fullAreaName);
}

unsigned int PlanetManager::getTravelFare(const String& departurePlanet, const String& arrivalPlanet) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addAsciiParameter(departurePlanet);
		method.addAsciiParameter(arrivalPlanet);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getTravelFare(departurePlanet, arrivalPlanet);
}

void PlanetManager::sendPlanetTravelPointListResponse(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->sendPlanetTravelPointListResponse(player);
}

StructureManager* PlanetManager::getStructureManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return (StructureManager*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getStructureManager();
}

TerrainManager* PlanetManager::getTerrainManager() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getTerrainManager();
}

Region* PlanetManager::getRegion(float x, float y) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return (Region*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getRegion(x, y);
}

int PlanetManager::getRegionCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getRegionCount();
}

Region* PlanetManager::getRegion(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addSignedIntParameter(index);

		return (Region*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getRegion(index);
}

void PlanetManager::addRegion(Region* region) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(region);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addRegion(region);
}

bool PlanetManager::hasRegion(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->hasRegion(name);
}

void PlanetManager::addPerformanceLocation(SceneObject* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addPerformanceLocation(obj);
}

MissionTargetMap* PlanetManager::getPerformanceLocations() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getPerformanceLocations();
}

void PlanetManager::addMissionNpc(SceneObject* npc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(npc);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addMissionNpc(npc);
}

MissionTargetMap* PlanetManager::getMissionNpcs() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getMissionNpcs();
}

void PlanetManager::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addAsciiParameter(temp1);
		method.addAsciiParameter(temp2);
		method.addSignedIntParameter(level);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addHuntingTargetTemplate(temp1, temp2, level);
}

HuntingTargetEntry* PlanetManager::getHuntingTargetTemplate(int level) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getHuntingTargetTemplate(level);
}

void PlanetManager::addReconLoc(SceneObject* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addReconLoc(obj);
}

MissionTargetMap* PlanetManager::getReconLocs() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getReconLocs();
}

void PlanetManager::addInformant(SceneObject* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->addInformant(obj);
}

MissionTargetMap* PlanetManager::getInformants() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getInformants();
}

/*
 *	PlanetManagerImplementation
 */

PlanetManagerImplementation::PlanetManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

PlanetManagerImplementation::~PlanetManagerImplementation() {
	PlanetManagerImplementation::finalize();
}


void PlanetManagerImplementation::_initializeImplementation() {
	_setClassHelper(PlanetManagerHelper::instance());

	_serializationHelperMethod();
}

void PlanetManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PlanetManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PlanetManagerImplementation::_getStub() {
	return _this;
}

PlanetManagerImplementation::operator const PlanetManager*() {
	return _this;
}

void PlanetManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlanetManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlanetManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlanetManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlanetManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlanetManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlanetManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlanetManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("PlanetManager");

	addSerializableVariable("zone", &zone);
	addSerializableVariable("regionMap", &regionMap);
	addSerializableVariable("structureManager", &structureManager);
}

PlanetManagerImplementation::PlanetManagerImplementation(Zone* planet, ZoneProcessServerImplementation* srv) {
	_initializeImplementation();
	// server/zone/managers/planet/PlanetManager.idl(106):  		zone = planet;
	zone = planet;
	// server/zone/managers/planet/PlanetManager.idl(107):  		server = srv;
	server = srv;
	// server/zone/managers/planet/PlanetManager.idl(109):  		Logger.setLoggingName("PlanetManager");
	Logger::setLoggingName("PlanetManager");
	// server/zone/managers/planet/PlanetManager.idl(110):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/planet/PlanetManager.idl(111):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/planet/PlanetManager.idl(113):  		terrainManager = null;
	terrainManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl(115):  		structureManager = null;
	structureManager = NULL;
}

ShuttleCreature* PlanetManagerImplementation::getShuttle(const String& arrivalPoint) {
	Locker _locker(_this);
	// server/zone/managers/planet/PlanetManager.idl(132):  		return shuttleMap.get(arrivalPoint);
	return (&shuttleMap)->get(arrivalPoint);
}

void PlanetManagerImplementation::addShuttle(const String& city, ShuttleCreature* shuttle) {
	Locker _locker(_this);
	// server/zone/managers/planet/PlanetManager.idl(136):  		shuttleMap.put(city, shuttle);
	(&shuttleMap)->put(city, shuttle);
}

StructureManager* PlanetManagerImplementation::getStructureManager() {
	// server/zone/managers/planet/PlanetManager.idl(152):  		return structureManager;
	return structureManager;
}

TerrainManager* PlanetManagerImplementation::getTerrainManager() {
	// server/zone/managers/planet/PlanetManager.idl(157):  		return terrainManager;
	return terrainManager;
}

Region* PlanetManagerImplementation::getRegion(float x, float y) {
	// server/zone/managers/planet/PlanetManager.idl(161):  		return regionMap.getRegion(x, y);
	return (&regionMap)->getRegion(x, y);
}

int PlanetManagerImplementation::getRegionCount() {
	// server/zone/managers/planet/PlanetManager.idl(165):  		return regionMap.size();
	return (&regionMap)->size();
}

Region* PlanetManagerImplementation::getRegion(int index) {
	// server/zone/managers/planet/PlanetManager.idl(169):  		return regionMap.getRegion(index);
	return (&regionMap)->getRegion(index);
}

void PlanetManagerImplementation::addRegion(Region* region) {
	// server/zone/managers/planet/PlanetManager.idl(173):  		regionMap.addRegion(region);
	(&regionMap)->addRegion(region);
}

bool PlanetManagerImplementation::hasRegion(const String& name) {
	// server/zone/managers/planet/PlanetManager.idl(177):  		return regionMap.containsRegion(name);
	return (&regionMap)->containsRegion(name);
}

void PlanetManagerImplementation::addPerformanceLocation(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl(181):  		performanceLocations.add(obj);
	(&performanceLocations)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getPerformanceLocations() {
	// server/zone/managers/planet/PlanetManager.idl(186):  		return performanceLocations;
	return (&performanceLocations);
}

void PlanetManagerImplementation::addMissionNpc(SceneObject* npc) {
	// server/zone/managers/planet/PlanetManager.idl(190):  		missionNpcs.add(npc);
	(&missionNpcs)->add(npc);
}

MissionTargetMap* PlanetManagerImplementation::getMissionNpcs() {
	// server/zone/managers/planet/PlanetManager.idl(195):  		return missionNpcs;
	return (&missionNpcs);
}

void PlanetManagerImplementation::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	// server/zone/managers/planet/PlanetManager.idl(199):  		huntingTargets.addTarget(temp1, temp2, level);
	(&huntingTargets)->addTarget(temp1, temp2, level);
}

HuntingTargetEntry* PlanetManagerImplementation::getHuntingTargetTemplate(int level) {
	// server/zone/managers/planet/PlanetManager.idl(204):  		return huntingTargets.getRandomTarget(level);
	return (&huntingTargets)->getRandomTarget(level);
}

void PlanetManagerImplementation::addReconLoc(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl(208):  		reconLocs.add(obj);
	(&reconLocs)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getReconLocs() {
	// server/zone/managers/planet/PlanetManager.idl(213):  		return reconLocs;
	return (&reconLocs);
}

void PlanetManagerImplementation::addInformant(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl(217):  		informants.add(obj);
	(&informants)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getInformants() {
	// server/zone/managers/planet/PlanetManager.idl(222):  		return informants;
	return (&informants);
}

/*
 *	PlanetManagerAdapter
 */

PlanetManagerAdapter::PlanetManagerAdapter(PlanetManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* PlanetManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		finalize();
		break;
	case 8:
		initialize();
		break;
	case 9:
		loadRegions();
		break;
	case 10:
		loadNoBuildAreas();
		break;
	case 11:
		loadShuttles();
		break;
	case 12:
		loadBadgeAreas();
		break;
	case 13:
		loadPerformanceLocations();
		break;
	case 14:
		loadHuntingTargets();
		break;
	case 15:
		loadReconLocations();
		break;
	case 16:
		resp->insertLong(getShuttle(inv->getAsciiParameter(_param0_getShuttle__String_))->_getObjectID());
		break;
	case 17:
		addShuttle(inv->getAsciiParameter(_param0_addShuttle__String_ShuttleCreature_), (ShuttleCreature*) inv->getObjectParameter());
		break;
	case 18:
		resp->insertInt(getTravelFare(inv->getAsciiParameter(_param0_getTravelFare__String_String_), inv->getAsciiParameter(_param1_getTravelFare__String_String_)));
		break;
	case 19:
		sendPlanetTravelPointListResponse((PlayerCreature*) inv->getObjectParameter());
		break;
	case 20:
		resp->insertLong(getStructureManager()->_getObjectID());
		break;
	case 21:
		resp->insertLong(getRegion(inv->getFloatParameter(), inv->getFloatParameter())->_getObjectID());
		break;
	case 22:
		resp->insertSignedInt(getRegionCount());
		break;
	case 23:
		resp->insertLong(getRegion(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 24:
		addRegion((Region*) inv->getObjectParameter());
		break;
	case 25:
		resp->insertBoolean(hasRegion(inv->getAsciiParameter(_param0_hasRegion__String_)));
		break;
	case 26:
		addPerformanceLocation((SceneObject*) inv->getObjectParameter());
		break;
	case 27:
		addMissionNpc((SceneObject*) inv->getObjectParameter());
		break;
	case 28:
		addHuntingTargetTemplate(inv->getAsciiParameter(_param0_addHuntingTargetTemplate__String_String_int_), inv->getAsciiParameter(_param1_addHuntingTargetTemplate__String_String_int_), inv->getSignedIntParameter());
		break;
	case 29:
		addReconLoc((SceneObject*) inv->getObjectParameter());
		break;
	case 30:
		addInformant((SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlanetManagerAdapter::initializeTransientMembers() {
	((PlanetManagerImplementation*) impl)->initializeTransientMembers();
}

void PlanetManagerAdapter::finalize() {
	((PlanetManagerImplementation*) impl)->finalize();
}

void PlanetManagerAdapter::initialize() {
	((PlanetManagerImplementation*) impl)->initialize();
}

void PlanetManagerAdapter::loadRegions() {
	((PlanetManagerImplementation*) impl)->loadRegions();
}

void PlanetManagerAdapter::loadNoBuildAreas() {
	((PlanetManagerImplementation*) impl)->loadNoBuildAreas();
}

void PlanetManagerAdapter::loadShuttles() {
	((PlanetManagerImplementation*) impl)->loadShuttles();
}

void PlanetManagerAdapter::loadBadgeAreas() {
	((PlanetManagerImplementation*) impl)->loadBadgeAreas();
}

void PlanetManagerAdapter::loadPerformanceLocations() {
	((PlanetManagerImplementation*) impl)->loadPerformanceLocations();
}

void PlanetManagerAdapter::loadHuntingTargets() {
	((PlanetManagerImplementation*) impl)->loadHuntingTargets();
}

void PlanetManagerAdapter::loadReconLocations() {
	((PlanetManagerImplementation*) impl)->loadReconLocations();
}

ShuttleCreature* PlanetManagerAdapter::getShuttle(const String& arrivalPoint) {
	return ((PlanetManagerImplementation*) impl)->getShuttle(arrivalPoint);
}

void PlanetManagerAdapter::addShuttle(const String& city, ShuttleCreature* shuttle) {
	((PlanetManagerImplementation*) impl)->addShuttle(city, shuttle);
}

unsigned int PlanetManagerAdapter::getTravelFare(const String& departurePlanet, const String& arrivalPlanet) {
	return ((PlanetManagerImplementation*) impl)->getTravelFare(departurePlanet, arrivalPlanet);
}

void PlanetManagerAdapter::sendPlanetTravelPointListResponse(PlayerCreature* player) {
	((PlanetManagerImplementation*) impl)->sendPlanetTravelPointListResponse(player);
}

StructureManager* PlanetManagerAdapter::getStructureManager() {
	return ((PlanetManagerImplementation*) impl)->getStructureManager();
}

Region* PlanetManagerAdapter::getRegion(float x, float y) {
	return ((PlanetManagerImplementation*) impl)->getRegion(x, y);
}

int PlanetManagerAdapter::getRegionCount() {
	return ((PlanetManagerImplementation*) impl)->getRegionCount();
}

Region* PlanetManagerAdapter::getRegion(int index) {
	return ((PlanetManagerImplementation*) impl)->getRegion(index);
}

void PlanetManagerAdapter::addRegion(Region* region) {
	((PlanetManagerImplementation*) impl)->addRegion(region);
}

bool PlanetManagerAdapter::hasRegion(const String& name) {
	return ((PlanetManagerImplementation*) impl)->hasRegion(name);
}

void PlanetManagerAdapter::addPerformanceLocation(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addPerformanceLocation(obj);
}

void PlanetManagerAdapter::addMissionNpc(SceneObject* npc) {
	((PlanetManagerImplementation*) impl)->addMissionNpc(npc);
}

void PlanetManagerAdapter::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	((PlanetManagerImplementation*) impl)->addHuntingTargetTemplate(temp1, temp2, level);
}

void PlanetManagerAdapter::addReconLoc(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addReconLoc(obj);
}

void PlanetManagerAdapter::addInformant(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addInformant(obj);
}

/*
 *	PlanetManagerHelper
 */

PlanetManagerHelper* PlanetManagerHelper::staticInitializer = PlanetManagerHelper::instance();

PlanetManagerHelper::PlanetManagerHelper() {
	className = "PlanetManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlanetManagerHelper::finalizeHelper() {
	PlanetManagerHelper::finalize();
}

DistributedObject* PlanetManagerHelper::instantiateObject() {
	return new PlanetManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlanetManagerHelper::instantiateServant() {
	return new PlanetManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlanetManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlanetManagerAdapter((PlanetManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

