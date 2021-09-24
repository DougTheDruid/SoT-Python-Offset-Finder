#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ServiceMessaging.ServiceMessagingTestMessage
// 0x0004
struct FServiceMessagingTestMessage
{
	int                                                Data;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ServiceMessaging.ServiceMessagingUnsubscribedEvent
// 0x0010
struct FServiceMessagingUnsubscribedEvent
{
	struct FString                                     RoutingKey;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ServiceMessaging.ServiceMessagingSubscribedEvent
// 0x0010
struct FServiceMessagingSubscribedEvent
{
	struct FString                                     RoutingKey;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
