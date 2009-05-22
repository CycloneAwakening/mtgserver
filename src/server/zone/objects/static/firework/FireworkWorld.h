/*
 *	server/zone/objects/static/firework/FireworkWorld.h generated by engine3 IDL compiler 0.55
 */

#ifndef FIREWORKWORLD_H_
#define FIREWORKWORLD_H_

#include "engine/orb/DistributedObjectBroker.h"

class Player;

class StaticObject;

#include "../../static/StaticObject.h"

class FireworkWorld : public StaticObject {
public:
	FireworkWorld(Player* player);

	FireworkWorld(Player* player, int tp);

	int getFireworkType();

	int setFireworkObject(int crc);

protected:
	FireworkWorld(DummyConstructorParameter* param);

	virtual ~FireworkWorld();

	friend class FireworkWorldHelper;
};

class FireworkWorldImplementation;

class FireworkWorldAdapter : public StaticObjectAdapter {
public:
	FireworkWorldAdapter(FireworkWorldImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getFireworkType();

	int setFireworkObject(int crc);

};

class FireworkWorldHelper : public DistributedObjectClassHelper, public Singleton<FireworkWorldHelper> {
	static FireworkWorldHelper* staticInitializer;

public:
	FireworkWorldHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<FireworkWorldHelper>;
};

#include "../../static/StaticObjectImplementation.h"

class FireworkWorldServant : public StaticObjectImplementation {
public:
	FireworkWorld* _this;

public:
	FireworkWorldServant(unsigned long long oid, int tp);
	virtual ~FireworkWorldServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*FIREWORKWORLD_H_*/
