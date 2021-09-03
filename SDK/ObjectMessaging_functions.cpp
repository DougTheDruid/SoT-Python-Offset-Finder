// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FObjectMessagingObjectScoper::AfterRead()
{
}

void FObjectMessagingObjectScoper::BeforeDelete()
{
}

void FObjectMessagingDispatcherHandle::AfterRead()
{
}

void FObjectMessagingDispatcherHandle::BeforeDelete()
{
}

void FObjectMessagingHandle::AfterRead()
{
	READ_PTR_FULL(EventType, UStruct);
}

void FObjectMessagingHandle::BeforeDelete()
{
	DELE_PTR_FULL(EventType);
}

void FObjectMessagingDispatcher::AfterRead()
{
}

void FObjectMessagingDispatcher::BeforeDelete()
{
}

void UObjectMessagingDispatcherInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UObjectMessagingDispatcherInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UObjectMessagingDispatcherComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UObjectMessagingDispatcherComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UObjectMessagingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UObjectMessagingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingObjectScoper ObjectScoper                   (Parm, OutParm, ReferenceParm)
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UObjectMessagingFunctions::STATIC_UnregisterEventsForObject(struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* EventSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject");

	UObjectMessagingFunctions_UnregisterEventsForObject_Params params;
	params.EventSource = EventSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectScoper != nullptr)
		*ObjectScoper = params.ObjectScoper;

}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingObjectScoper ObjectScoper                   (Parm, OutParm, ReferenceParm)
void UObjectMessagingFunctions::STATIC_UnregisterEvents(struct FObjectMessagingObjectScoper* ObjectScoper)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents");

	UObjectMessagingFunctions_UnregisterEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectScoper != nullptr)
		*ObjectScoper = params.ObjectScoper;

}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
void UObjectMessagingFunctions::STATIC_UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle");

	UObjectMessagingFunctions_UnregisterEventFromHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;

}


// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcher Dispatcher                     (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
void UObjectMessagingFunctions::STATIC_UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent");

	UObjectMessagingFunctions_UnregisterEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;

}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FObjectMessagingObjectScoper ObjectScoper                   (Parm, OutParm, ReferenceParm)
// class UObject*                 FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 FunctionName                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// class UStruct*                 EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UObjectMessagingFunctions::STATIC_RegisterEventWithObjectScoper(class UObject* EventSource, struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper");

	UObjectMessagingFunctions_RegisterEventWithObjectScoper_Params params;
	params.EventSource = EventSource;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectScoper != nullptr)
		*ObjectScoper = params.ObjectScoper;

}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle MessageDispatcher              (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// class UObject*                 FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 FunctionName                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// class UStruct*                 EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UObjectMessagingFunctions::STATIC_RegisterEventFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle");

	UObjectMessagingFunctions_RegisterEventFromHandle_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;

}


// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcher MessageDispatcher              (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// class UObject*                 FunctionOwner                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 FunctionName                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// class UStruct*                 EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UObjectMessagingFunctions::STATIC_RegisterEvent(struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent");

	UObjectMessagingFunctions_RegisterEvent_Params params;
	params.FunctionOwner = FunctionOwner;
	params.FunctionName = FunctionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;

}


// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UObjectMessagingFunctions::STATIC_IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid");

	UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UObjectMessagingFunctions::STATIC_IsHandleRegistered(struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered");

	UObjectMessagingFunctions_IsHandleRegistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;


	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)
struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::STATIC_GetObjectMessagingDispatcherFromActor(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor");

	UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)
struct FObjectMessagingDispatcherHandle UObjectMessagingFunctions::STATIC_GetObjectMessagingDispatcher()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher");

	UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcherHandle MessageDispatcher              (Parm, OutParm, ReferenceParm)
// class UStruct*                 EventDataStruct                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Scope                          (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ScopeId                        (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FGenericStruct          Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UObjectMessagingFunctions::STATIC_FireEventWithDataFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FGenericStruct* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle");

	UObjectMessagingFunctions_FireEventWithDataFromHandle_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;

}


// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FObjectMessagingDispatcher MessageDispatcher              (Parm, OutParm, ReferenceParm)
// class UStruct*                 EventDataStruct                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Scope                          (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ScopeId                        (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FGenericStruct          Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UObjectMessagingFunctions::STATIC_FireEventWithData(struct FObjectMessagingDispatcher* MessageDispatcher, class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FGenericStruct* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData");

	UObjectMessagingFunctions_FireEventWithData_Params params;
	params.EventDataStruct = EventDataStruct;
	params.Scope = Scope;
	params.ScopeId = ScopeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MessageDispatcher != nullptr)
		*MessageDispatcher = params.MessageDispatcher;
	if (Value != nullptr)
		*Value = params.Value;

}


void UObjectMessagingFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UObjectMessagingFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
