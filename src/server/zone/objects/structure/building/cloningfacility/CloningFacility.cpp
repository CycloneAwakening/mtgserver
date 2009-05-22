/*
 *	server/zone/objects/structure/building/cloningfacility/CloningFacility.cpp generated by engine3 IDL compiler 0.55
 */

#include "CloningFacility.h"

#include "CloningFacilityImplementation.h"

#include "../BuildingObject.h"

#include "../../../player/Player.h"

#include "../../../scene/SceneObject.h"

#include "CloneSpawnPoint.h"

#include "../../../tangible/terminal/cloning/CloningTerminal.h"

/*
 *	CloningFacilityStub
 */

CloningFacility::CloningFacility(unsigned long long oid, bool staticBuild) : BuildingObject(DummyConstructorParameter::instance()) {
	_impl = new CloningFacilityImplementation(oid, staticBuild);
	_impl->_setStub(this);
}

CloningFacility::CloningFacility(DummyConstructorParameter* param) : BuildingObject(param) {
}

CloningFacility::~CloningFacility() {
}

void CloningFacility::addSpawnPoint(CloneSpawnPoint* spawnPoint) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(spawnPoint);

		method.executeWithVoidReturn();
	} else
		((CloningFacilityImplementation*) _impl)->addSpawnPoint(spawnPoint);
}

void CloningFacility::addCloningTerminal(CloningTerminal* cloningTerminal) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(cloningTerminal);

		method.executeWithVoidReturn();
	} else
		((CloningFacilityImplementation*) _impl)->addCloningTerminal(cloningTerminal);
}

bool CloningFacility::clone(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((CloningFacilityImplementation*) _impl)->clone(player);
}

void CloningFacility::setRegistered(bool reg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addBooleanParameter(reg);

		method.executeWithVoidReturn();
	} else
		((CloningFacilityImplementation*) _impl)->setRegistered(reg);
}

bool CloningFacility::isRegistered() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return ((CloningFacilityImplementation*) _impl)->isRegistered();
}

/*
 *	CloningFacilityAdapter
 */

CloningFacilityAdapter::CloningFacilityAdapter(CloningFacilityImplementation* obj) : BuildingObjectAdapter(obj) {
}

Packet* CloningFacilityAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addSpawnPoint((CloneSpawnPoint*) inv->getObjectParameter());
		break;
	case 7:
		addCloningTerminal((CloningTerminal*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertBoolean(clone((Player*) inv->getObjectParameter()));
		break;
	case 9:
		setRegistered(inv->getBooleanParameter());
		break;
	case 10:
		resp->insertBoolean(isRegistered());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CloningFacilityAdapter::addSpawnPoint(CloneSpawnPoint* spawnPoint) {
	return ((CloningFacilityImplementation*) impl)->addSpawnPoint(spawnPoint);
}

void CloningFacilityAdapter::addCloningTerminal(CloningTerminal* cloningTerminal) {
	return ((CloningFacilityImplementation*) impl)->addCloningTerminal(cloningTerminal);
}

bool CloningFacilityAdapter::clone(Player* player) {
	return ((CloningFacilityImplementation*) impl)->clone(player);
}

void CloningFacilityAdapter::setRegistered(bool reg) {
	return ((CloningFacilityImplementation*) impl)->setRegistered(reg);
}

bool CloningFacilityAdapter::isRegistered() {
	return ((CloningFacilityImplementation*) impl)->isRegistered();
}

/*
 *	CloningFacilityHelper
 */

CloningFacilityHelper* CloningFacilityHelper::staticInitializer = CloningFacilityHelper::instance();

CloningFacilityHelper::CloningFacilityHelper() {
	className = "CloningFacility";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CloningFacilityHelper::finalizeHelper() {
	CloningFacilityHelper::finalize();
}

DistributedObject* CloningFacilityHelper::instantiateObject() {
	return new CloningFacility(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CloningFacilityHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CloningFacilityAdapter((CloningFacilityImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CloningFacilityServant
 */

CloningFacilityServant::CloningFacilityServant(unsigned long long oid, bool staticBuild, int btype) : BuildingObjectImplementation(oid, staticBuild, btype) {
	_classHelper = CloningFacilityHelper::instance();
}

CloningFacilityServant::~CloningFacilityServant() {
}

void CloningFacilityServant::_setStub(DistributedObjectStub* stub) {
	_this = (CloningFacility*) stub;
	BuildingObjectServant::_setStub(stub);
}

DistributedObjectStub* CloningFacilityServant::_getStub() {
	return _this;
}

