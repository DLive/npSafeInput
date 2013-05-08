
#include "StdAfx.h"

#include "ScriptablePluginObject.h"
//#include "ConstructablePluginObject.h"
#include "Plugin.h"



bool
ScriptablePluginObject::HasMethod(NPIdentifier name)
{
	OutputDebugStringA("obj_hasmethod");
	if(name=mcreateinput_id)
		return true;
	return false;
}

bool
ScriptablePluginObject::HasProperty(NPIdentifier name)
{
	OutputDebugStringA("obj_hasproperty");
	return false;
}

bool ScriptablePluginObject::SetProperty(NPIdentifier name,
										const NPVariant *value)
{
	OutputDebugStringA("base_setproperty");
	return false;
}

bool
ScriptablePluginObject::GetProperty(NPIdentifier name, NPVariant *result)
{
	OutputDebugStringA("obj_getproperty");
	VOID_TO_NPVARIANT(*result);

	return false;
}

bool
ScriptablePluginObject::Invoke(NPIdentifier name, const NPVariant *args,
							   uint32_t argCount, NPVariant *result)
{
	OutputDebugStringA("obj_invoke");
	CPlugin *plugin=(CPlugin*)mNpp->pdata;
	if(name==mcreateinput_id)
	{
		plugin->createInput();
		return true;
	}

	return false;
}

bool
ScriptablePluginObject::InvokeDefault(const NPVariant *args, uint32_t argCount,
									  NPVariant *result)
{
	OutputDebugStringA("obj_InvokeDefault");
	printf ("ScriptablePluginObject default method called!\n");

	const char* outString = "default method return val";
	char* npOutString = (char *)NPN_MemAlloc(strlen(outString) + 1);
	if (!npOutString)
		return false;
	strcpy(npOutString, outString);
	STRINGZ_TO_NPVARIANT(npOutString, *result);

	return true;
}