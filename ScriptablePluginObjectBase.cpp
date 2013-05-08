#ifdef XP_WIN
#include <windows.h>
#include <windowsx.h>
#endif

#ifdef XP_MAC
#include <TextEdit.h>
#endif

#ifdef XP_UNIX
#include <string.h>
#endif
#include <stdio.h>
#include "ScriptablePluginObjectBase.h"

void ScriptablePluginObjectBase::Invalidate()
{
	OutputDebugStringA("base_invalidate");
}

bool
ScriptablePluginObjectBase::HasMethod(NPIdentifier name)
{
	OutputDebugStringA("base_HasMethod");
	return false;
}

bool
ScriptablePluginObjectBase::Invoke(NPIdentifier name, const NPVariant *args,
								   uint32_t argCount, NPVariant *result)
{
	OutputDebugStringA("base_invoke");
	return false;
}

bool
ScriptablePluginObjectBase::InvokeDefault(const NPVariant *args,
										  uint32_t argCount, NPVariant *result)
{
	return false;
}

bool
ScriptablePluginObjectBase::HasProperty(NPIdentifier name)
{
	OutputDebugStringA("base_hasproperty");
	return false;
}

bool
ScriptablePluginObjectBase::GetProperty(NPIdentifier name, NPVariant *result)
{
	OutputDebugStringA("base_getproperty");
	return false;
}

bool
ScriptablePluginObjectBase::SetProperty(NPIdentifier name,
										const NPVariant *value)
{
	OutputDebugStringA("base_setproperty");


	return false;
}

bool
ScriptablePluginObjectBase::RemoveProperty(NPIdentifier name)
{
	return false;
}

bool
ScriptablePluginObjectBase::Enumerate(NPIdentifier **identifier,
									  uint32_t *count)
{
	return false;
}

bool
ScriptablePluginObjectBase::Construct(const NPVariant *args, uint32_t argCount,
									  NPVariant *result)
{
	return false;
}

// static
void
ScriptablePluginObjectBase::_Deallocate(NPObject *npobj)
{
	// Call the virtual destructor.
	delete (ScriptablePluginObjectBase *)npobj;
}

// static
void
ScriptablePluginObjectBase::_Invalidate(NPObject *npobj)
{
	((ScriptablePluginObjectBase *)npobj)->Invalidate();
}

// static
bool
ScriptablePluginObjectBase::_HasMethod(NPObject *npobj, NPIdentifier name)
{
	return ((ScriptablePluginObjectBase *)npobj)->HasMethod(name);
}

// static
bool
ScriptablePluginObjectBase::_Invoke(NPObject *npobj, NPIdentifier name,
									const NPVariant *args, uint32_t argCount,
									NPVariant *result)
{
	return ((ScriptablePluginObjectBase *)npobj)->Invoke(name, args, argCount,
		result);
}

// static
bool
ScriptablePluginObjectBase::_InvokeDefault(NPObject *npobj,
										   const NPVariant *args,
										   uint32_t argCount,
										   NPVariant *result)
{
	return ((ScriptablePluginObjectBase *)npobj)->InvokeDefault(args, argCount,
		result);
}

// static
bool
ScriptablePluginObjectBase::_HasProperty(NPObject * npobj, NPIdentifier name)
{
	return ((ScriptablePluginObjectBase *)npobj)->HasProperty(name);
}

// static
bool
ScriptablePluginObjectBase::_GetProperty(NPObject *npobj, NPIdentifier name,
										 NPVariant *result)
{
	return ((ScriptablePluginObjectBase *)npobj)->GetProperty(name, result);
}

// static
bool
ScriptablePluginObjectBase::_SetProperty(NPObject *npobj, NPIdentifier name,
										 const NPVariant *value)
{
	return ((ScriptablePluginObjectBase *)npobj)->SetProperty(name, value);
}

// static
bool
ScriptablePluginObjectBase::_RemoveProperty(NPObject *npobj, NPIdentifier name)
{
	return ((ScriptablePluginObjectBase *)npobj)->RemoveProperty(name);
}

// static
bool
ScriptablePluginObjectBase::_Enumerate(NPObject *npobj,
									   NPIdentifier **identifier,
									   uint32_t *count)
{
	return ((ScriptablePluginObjectBase *)npobj)->Enumerate(identifier, count);
}

// static
bool
ScriptablePluginObjectBase::_Construct(NPObject *npobj, const NPVariant *args,
									   uint32_t argCount, NPVariant *result)
{
	return ((ScriptablePluginObjectBase *)npobj)->Construct(args, argCount,
		result);
}
