/*
 *	server/zone/objects/tangible/tool/SurveyTool.h generated by engine3 IDL compiler 0.60
 */

#ifndef SURVEYTOOL_H_
#define SURVEYTOOL_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "server/zone/objects/tangible/tool/ToolTangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class SurveyTool : public ToolTangibleObject {
public:
	SurveyTool(LuaObject* templateData);

	void initializeTransientMembers();

protected:
	SurveyTool(DummyConstructorParameter* param);

	virtual ~SurveyTool();

	friend class SurveyToolHelper;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class SurveyToolImplementation : public ToolTangibleObjectImplementation {

public:
	SurveyToolImplementation(LuaObject* templateData);

	SurveyToolImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	SurveyTool* _this;

	operator const SurveyTool*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~SurveyToolImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class SurveyTool;
};

class SurveyToolAdapter : public ToolTangibleObjectAdapter {
public:
	SurveyToolAdapter(SurveyToolImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

};

class SurveyToolHelper : public DistributedObjectClassHelper, public Singleton<SurveyToolHelper> {
	static SurveyToolHelper* staticInitializer;

public:
	SurveyToolHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SurveyToolHelper>;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

#endif /*SURVEYTOOL_H_*/
