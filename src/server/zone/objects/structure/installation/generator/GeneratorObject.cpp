/*
 *	server/zone/objects/structure/installation/generator/GeneratorObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "GeneratorObject.h"

#include "GeneratorObjectImplementation.h"

#include "../../../tangible/deed/installationdeed/InstallationDeed.h"

#include "../harvester/HarvesterObject.h"

/*
 *	GeneratorObjectStub
 */

GeneratorObject::GeneratorObject(unsigned long long objid) : HarvesterObject(DummyConstructorParameter::instance()) {
	_impl = new GeneratorObjectImplementation(objid);
	_impl->_setStub(this);
}

GeneratorObject::GeneratorObject(unsigned long long objid, InstallationDeed* deed) : HarvesterObject(DummyConstructorParameter::instance()) {
	_impl = new GeneratorObjectImplementation(objid, deed);
	_impl->_setStub(this);
}

GeneratorObject::GeneratorObject(DummyConstructorParameter* param) : HarvesterObject(param) {
}

GeneratorObject::~GeneratorObject() {
}

/*
 *	GeneratorObjectAdapter
 */

GeneratorObjectAdapter::GeneratorObjectAdapter(GeneratorObjectImplementation* obj) : HarvesterObjectAdapter(obj) {
}

Packet* GeneratorObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	GeneratorObjectHelper
 */

GeneratorObjectHelper* GeneratorObjectHelper::staticInitializer = GeneratorObjectHelper::instance();

GeneratorObjectHelper::GeneratorObjectHelper() {
	className = "GeneratorObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GeneratorObjectHelper::finalizeHelper() {
	GeneratorObjectHelper::finalize();
}

DistributedObject* GeneratorObjectHelper::instantiateObject() {
	return new GeneratorObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GeneratorObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GeneratorObjectAdapter((GeneratorObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	GeneratorObjectServant
 */

GeneratorObjectServant::GeneratorObjectServant(unsigned long long objid) : HarvesterObjectImplementation(objid) {
	_classHelper = GeneratorObjectHelper::instance();
}

GeneratorObjectServant::GeneratorObjectServant(unsigned long long objid, InstallationDeed* deed) : HarvesterObjectImplementation(objid, deed) {
	_classHelper = GeneratorObjectHelper::instance();
}

GeneratorObjectServant::~GeneratorObjectServant() {
}

void GeneratorObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (GeneratorObject*) stub;
	HarvesterObjectServant::_setStub(stub);
}

DistributedObjectStub* GeneratorObjectServant::_getStub() {
	return _this;
}

