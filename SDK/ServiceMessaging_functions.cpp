// Name: SoT, Version: 2.3.0

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

void FServiceMessagingTestMessage::AfterRead()
{
}

void FServiceMessagingTestMessage::BeforeDelete()
{
}

void FServiceMessagingUnsubscribedEvent::AfterRead()
{
}

void FServiceMessagingUnsubscribedEvent::BeforeDelete()
{
}

void FServiceMessagingSubscribedEvent::AfterRead()
{
}

void FServiceMessagingSubscribedEvent::BeforeDelete()
{
}

void UServiceMessagingDispatcherInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServiceMessagingDispatcherInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UServiceMessagingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServiceMessagingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03005310
//		Name   -> Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FObjectMessagingDispatcherHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcherFromActor(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor");

	UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03005270
//		Name   -> Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcher()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher");

	UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UServiceMessagingFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UServiceMessagingFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x030053A0
//		Name   -> Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FServiceMessagingTestMessage                InMessage                                                  (Parm, OutParm)
void UServiceMessagingListenerTestObject::TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage");

	UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;

}


void UServiceMessagingListenerTestObject::AfterRead()
{
	UObject::AfterRead();

}

void UServiceMessagingListenerTestObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
