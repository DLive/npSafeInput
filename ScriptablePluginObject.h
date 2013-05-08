#ifndef _NPSPLUGINOBJ_H_
#define _NPSPLUGINOBJ_H_

#include "npapi.h"
#include "npruntime.h"
#include "ScriptablePluginObjectBase.h"

class ScriptablePluginObject : public ScriptablePluginObjectBase
{
public:
	ScriptablePluginObject(NPP npp)
		: ScriptablePluginObjectBase(npp)
	{
		mcreateinput_id=NPN_GetStringIdentifier("createInput");
	}
	NPIdentifier mcreateinput_id;
	virtual bool HasMethod(NPIdentifier name);
	virtual bool HasProperty(NPIdentifier name);
	virtual bool GetProperty(NPIdentifier name, NPVariant *result);
	virtual bool SetProperty(NPIdentifier name, const NPVariant *value);
	virtual bool Invoke(NPIdentifier name, const NPVariant *args,
		uint32_t argCount, NPVariant *result);
	virtual bool InvokeDefault(const NPVariant *args, uint32_t argCount,
		NPVariant *result);
};

static NPObject *
AllocateScriptablePluginObject(NPP npp, NPClass *aClass)
{
	return new ScriptablePluginObject(npp);
}
DECLARE_NPOBJECT_CLASS_WITH_BASE(ScriptablePluginObject,
AllocateScriptablePluginObject);

#endif
