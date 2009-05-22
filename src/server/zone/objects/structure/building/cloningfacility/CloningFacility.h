/*
 *	server/zone/objects/structure/building/cloningfacility/CloningFacility.h generated by engine3 IDL compiler 0.55
 */

#ifndef CLONINGFACILITY_H_
#define CLONINGFACILITY_H_

#include "engine/orb/DistributedObjectBroker.h"

class BuildingObject;

class Player;

class SceneObject;

class CloneSpawnPoint;

class CloningTerminal;

#include "../BuildingObject.h"

class CloningFacility : public BuildingObject {
public:
	CloningFacility(unsigned long long oid, bool staticBuild);

	void addSpawnPoint(CloneSpawnPoint* spawnPoint);

	void addCloningTerminal(CloningTerminal* cloningTerminal);

	bool clone(Player* player);

	void setRegistered(bool reg);

	bool isRegistered();

protected:
	CloningFacility(DummyConstructorParameter* param);

	virtual ~CloningFacility();

	friend class CloningFacilityHelper;
};

class CloningFacilityImplementation;

class CloningFacilityAdapter : public BuildingObjectAdapter {
public:
	CloningFacilityAdapter(CloningFacilityImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void addSpawnPoint(CloneSpawnPoint* spawnPoint);

	void addCloningTerminal(CloningTerminal* cloningTerminal);

	bool clone(Player* player);

	void setRegistered(bool reg);

	bool isRegistered();

};

class CloningFacilityHelper : public DistributedObjectClassHelper, public Singleton<CloningFacilityHelper> {
	static CloningFacilityHelper* staticInitializer;

public:
	CloningFacilityHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<CloningFacilityHelper>;
};

#include "../BuildingObjectImplementation.h"

class CloningFacilityServant : public BuildingObjectImplementation {
public:
	CloningFacility* _this;

public:
	CloningFacilityServant(unsigned long long oid, bool staticBuild, int btype);
	virtual ~CloningFacilityServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*CLONINGFACILITY_H_*/
