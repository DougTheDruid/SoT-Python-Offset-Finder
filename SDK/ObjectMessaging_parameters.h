#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject
struct UObjectMessagingFunctions_UnregisterEventsForObject_Params
{
	struct FObjectMessagingObjectScoper                ObjectScoper;                                              // (Parm, OutParm, ReferenceParm)
	class UObject*                                     EventSource;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents
struct UObjectMessagingFunctions_UnregisterEvents_Params
{
	struct FObjectMessagingObjectScoper                ObjectScoper;                                              // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle
struct UObjectMessagingFunctions_UnregisterEventFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            Dispatcher;                                                // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent
struct UObjectMessagingFunctions_UnregisterEvent_Params
{
	struct FObjectMessagingDispatcher                  Dispatcher;                                                // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper
struct UObjectMessagingFunctions_RegisterEventWithObjectScoper_Params
{
	class UObject*                                     EventSource;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FObjectMessagingObjectScoper                ObjectScoper;                                              // (Parm, OutParm, ReferenceParm)
	class UObject*                                     FunctionOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FunctionName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UStruct*                                     EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle
struct UObjectMessagingFunctions_RegisterEventFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            MessageDispatcher;                                         // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                    // (Parm, OutParm, ReferenceParm)
	class UObject*                                     FunctionOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FunctionName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UStruct*                                     EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent
struct UObjectMessagingFunctions_RegisterEvent_Params
{
	struct FObjectMessagingDispatcher                  MessageDispatcher;                                         // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                    // (Parm, OutParm, ReferenceParm)
	class UObject*                                     FunctionOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FunctionName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UStruct*                                     EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid
struct UObjectMessagingFunctions_IsObjectMessagingDispatcherValid_Params
{
	struct FObjectMessagingDispatcherHandle            Handle;                                                    // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered
struct UObjectMessagingFunctions_IsHandleRegistered_Params
{
	struct FObjectMessagingHandle                      Handle;                                                    // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor
struct UObjectMessagingFunctions_GetObjectMessagingDispatcherFromActor_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher
struct UObjectMessagingFunctions_GetObjectMessagingDispatcher_Params
{
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle
struct UObjectMessagingFunctions_FireEventWithDataFromHandle_Params
{
	struct FObjectMessagingDispatcherHandle            MessageDispatcher;                                         // (Parm, OutParm, ReferenceParm)
	class UStruct*                                     EventDataStruct;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Scope;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ScopeId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FGenericStruct                              Value;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData
struct UObjectMessagingFunctions_FireEventWithData_Params
{
	struct FObjectMessagingDispatcher                  MessageDispatcher;                                         // (Parm, OutParm, ReferenceParm)
	class UStruct*                                     EventDataStruct;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Scope;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ScopeId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FGenericStruct                              Value;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
