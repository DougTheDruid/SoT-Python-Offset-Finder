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
// Parameters
//---------------------------------------------------------------------------

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
struct UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
struct UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params
{
	struct FObjectMessagingDispatcherHandle            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
struct UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params
{
	struct FServiceMessagingTestMessage                InMessage;                                                 // 0x0000(0x0004)  (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
