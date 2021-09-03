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
// Classes
//---------------------------------------------------------------------------

// Class ObjectMessaging.ObjectMessagingDispatcherInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UObjectMessagingDispatcherInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingDispatcherInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ObjectMessaging.ObjectMessagingDispatcherComponent
// 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
class UObjectMessagingDispatcherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4BEQ[0xA8];                                    // 0x00C8(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingDispatcherComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ObjectMessaging.ObjectMessagingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UObjectMessagingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ObjectMessaging.ObjectMessagingFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UObjectMessagingFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ObjectMessaging.ObjectMessagingFunctions");
		return ptr;
	}



	void STATIC_UnregisterEventsForObject(struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* EventSource);
	void STATIC_UnregisterEvents(struct FObjectMessagingObjectScoper* ObjectScoper);
	void STATIC_UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle);
	void STATIC_UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle);
	void STATIC_RegisterEventWithObjectScoper(class UObject* EventSource, struct FObjectMessagingObjectScoper* ObjectScoper, class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType);
	void STATIC_RegisterEventFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType);
	void STATIC_RegisterEvent(struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle, class UObject* FunctionOwner, const struct FString& FunctionName, class UStruct* EventType);
	bool STATIC_IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle);
	bool STATIC_IsHandleRegistered(struct FObjectMessagingHandle* Handle);
	struct FObjectMessagingDispatcherHandle STATIC_GetObjectMessagingDispatcherFromActor(class UObject* Object);
	struct FObjectMessagingDispatcherHandle STATIC_GetObjectMessagingDispatcher();
	void STATIC_FireEventWithDataFromHandle(struct FObjectMessagingDispatcherHandle* MessageDispatcher, class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FGenericStruct* Value);
	void STATIC_FireEventWithData(struct FObjectMessagingDispatcher* MessageDispatcher, class UStruct* EventDataStruct, const struct FString& Scope, const struct FString& ScopeId, struct FGenericStruct* Value);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
