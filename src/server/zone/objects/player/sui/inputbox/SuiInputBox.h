/*
 *	server/zone/objects/player/sui/inputbox/SuiInputBox.h generated by engine3 IDL compiler 0.55
 */

#ifndef SUIINPUTBOX_H_
#define SUIINPUTBOX_H_

#include "engine/orb/DistributedObjectBroker.h"

class SuiBox;

class Player;

#include "engine/service/proto/BaseMessage.h"

#include "../SuiBox.h"

class SuiInputBox : public SuiBox {
public:
	SuiInputBox(Player* player, unsigned int windowType, int inputtype);

	BaseMessage* generateMessage();

	void setMaxInputSize(int size);

	void setDefaultInput(const String& text);

	bool isFilterBox();

protected:
	SuiInputBox(DummyConstructorParameter* param);

	virtual ~SuiInputBox();

	friend class SuiInputBoxHelper;
};

class SuiInputBoxImplementation;

class SuiInputBoxAdapter : public SuiBoxAdapter {
public:
	SuiInputBoxAdapter(SuiInputBoxImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	BaseMessage* generateMessage();

	void setMaxInputSize(int size);

	void setDefaultInput(const String& text);

	bool isFilterBox();

protected:
	String _param0_setDefaultInput__String_;
};

class SuiInputBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiInputBoxHelper> {
	static SuiInputBoxHelper* staticInitializer;

public:
	SuiInputBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<SuiInputBoxHelper>;
};

#include "../SuiBoxImplementation.h"

class SuiInputBoxServant : public SuiBoxImplementation {
public:
	SuiInputBox* _this;

public:
	SuiInputBoxServant(Player* player, unsigned int windowType, unsigned int boxType);
	virtual ~SuiInputBoxServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*SUIINPUTBOX_H_*/
