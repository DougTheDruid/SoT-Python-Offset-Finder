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

void FNotificationInputDisplayName::AfterRead()
{
	READ_PTR_FULL(InputID, UClass);
}

void FNotificationInputDisplayName::BeforeDelete()
{
	DELE_PTR_FULL(InputID);
}

void FIdleTimeTracker::AfterRead()
{
}

void FIdleTimeTracker::BeforeDelete()
{
}

void FPrioritizedCompositeInputHandler::AfterRead()
{
	READ_PTR_FULL(InputHandler, UCompositeInputHandler);
}

void FPrioritizedCompositeInputHandler::BeforeDelete()
{
	DELE_PTR_FULL(InputHandler);
}

void FCompositeInputDelegator::AfterRead()
{
}

void FCompositeInputDelegator::BeforeDelete()
{
}

void UNotificationInputId::AfterRead()
{
	UObject::AfterRead();

}

void UNotificationInputId::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x03263200
//		Name   -> Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FScriptDelegate                             Handler                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UCompositeInputHandler::SetNotificationInputHandler(class UClass* Id, const struct FScriptDelegate& Handler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputHandler.SetNotificationInputHandler");

	UCompositeInputHandler_SetNotificationInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03263100
//		Name   -> Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FScriptDelegate                             Handler                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UCompositeInputHandler::SetAnalogInputHandler(class UClass* Id, const struct FScriptDelegate& Handler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputHandler.SetAnalogInputHandler");

	UCompositeInputHandler_SetAnalogInputHandler_Params params;
	params.Id = Id;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCompositeInputHandler::AfterRead()
{
	UObject::AfterRead();

}

void UCompositeInputHandler::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAnalogInputId::AfterRead()
{
	UObject::AfterRead();

}

void UAnalogInputId::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x032633D0
//		Name   -> Function AthenaInput.InputBinder.SpoofNotificationInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UInputBinder::SpoofNotificationInput(class UClass* Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.SpoofNotificationInput");

	UInputBinder_SpoofNotificationInput_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03263300
//		Name   -> Function AthenaInput.InputBinder.SpoofAnalogInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInputBinder::SpoofAnalogInput(class UClass* Id, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.SpoofAnalogInput");

	UInputBinder_SpoofAnalogInput_Params params;
	params.Id = Id;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03262EB0
//		Name   -> Function AthenaInput.InputBinder.IsContinuousActionActive
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      BeginNotificationInputId                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInputBinder::IsContinuousActionActive(class UClass* BeginNotificationInputId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.IsContinuousActionActive");

	UInputBinder_IsContinuousActionActive_Params params;
	params.BeginNotificationInputId = BeginNotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03262E20
//		Name   -> Function AthenaInput.InputBinder.IgnoreNonSpoofedInput
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InShouldIgnore                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInputBinder::IgnoreNonSpoofedInput(bool InShouldIgnore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.InputBinder.IgnoreNonSpoofedInput");

	UInputBinder_IgnoreNonSpoofedInput_Params params;
	params.InShouldIgnore = InShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UInputBinder::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(InputComponent, UInputComponent);
}

void UInputBinder::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(InputComponent);
}

// Function:
//		Offset -> 0x03262D80
//		Name   -> Function AthenaInput.InputHandlerInterface.HandleNotificationInput
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UInputHandlerInterface::HandleNotificationInput(class UClass* Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.InputHandlerInterface.HandleNotificationInput");

	UInputHandlerInterface_HandleNotificationInput_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03262CB0
//		Name   -> Function AthenaInput.InputHandlerInterface.HandleAnalogInput
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		float                                              Input                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UInputHandlerInterface::HandleAnalogInput(class UClass* Id, float Input)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.InputHandlerInterface.HandleAnalogInput");

	UInputHandlerInterface_HandleAnalogInput_Params params;
	params.Id = Id;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInputHandlerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UInputHandlerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UTestAnalogInputId::AfterRead()
{
	UAnalogInputId::AfterRead();

}

void UTestAnalogInputId::BeforeDelete()
{
	UAnalogInputId::BeforeDelete();

}

void UTestAnalogInput2Id::AfterRead()
{
	UAnalogInputId::AfterRead();

}

void UTestAnalogInput2Id::BeforeDelete()
{
	UAnalogInputId::BeforeDelete();

}

// Function:
//		Offset -> 0x032630D0
//		Name   -> Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler
//		Flags  -> (Final, Native, Public)
// Parameters:
//		TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondNotificationHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondNotificationHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondNotificationHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03263040
//		Name   -> Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler
//		Flags  -> (Final, Native, Public)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnSecondHandler(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnSecondHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnSecondHandler_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03263010
//		Name   -> Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler
//		Flags  -> (Final, Native, Public)
// Parameters:
//		TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstNotificationHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstNotificationHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstNotificationHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03262F80
//		Name   -> Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler
//		Flags  -> (Final, Native, Public)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UCompositeInputDelegatorTestsCallbackHelper::OnFirstHandler(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.CompositeInputDelegatorTestsCallbackHelper.OnFirstHandler");

	UCompositeInputDelegatorTestsCallbackHelper_OnFirstHandler_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCompositeInputDelegatorTestsCallbackHelper::AfterRead()
{
	UObject::AfterRead();

}

void UCompositeInputDelegatorTestsCallbackHelper::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMockDerivedCompositeInputHandler::AfterRead()
{
	UCompositeInputHandler::AfterRead();

}

void UMockDerivedCompositeInputHandler::BeforeDelete()
{
	UCompositeInputHandler::BeforeDelete();

}

// Function:
//		Offset -> 0x03262F50
//		Name   -> Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCompositeInputHandler*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCompositeInputHandler* UInputHandlerFunctionLibrary::STATIC_MakeCompositeInputHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.InputHandlerFunctionLibrary.MakeCompositeInputHandler");

	UInputHandlerFunctionLibrary_MakeCompositeInputHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInputHandlerFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UInputHandlerFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void AMockInputHandlerCharacter::AfterRead()
{
	ACharacter::AfterRead();

}

void AMockInputHandlerCharacter::BeforeDelete()
{
	ACharacter::BeforeDelete();

}

// Function:
//		Offset -> 0x03262C00
//		Name   -> Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UNamedNotificationInputInterface::GetNotificationInputDisplayName(class UClass* InputID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInput.NamedNotificationInputInterface.GetNotificationInputDisplayName");

	UNamedNotificationInputInterface_GetNotificationInputDisplayName_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNamedNotificationInputInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNamedNotificationInputInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNamedNotificationInputComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UNamedNotificationInputComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UCrewNameplatesToggleInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void UCrewNameplatesToggleInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UOpenQuickMenuNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void UOpenQuickMenuNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UPressedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void UPressedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UReleasedNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void UReleasedNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UScrambleGamertagsToggleInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void UScrambleGamertagsToggleInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UTestNotificationInput2Id::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void UTestNotificationInput2Id::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UTestNotificationInputId::AfterRead()
{
	UNotificationInputId::AfterRead();

}

void UTestNotificationInputId::BeforeDelete()
{
	UNotificationInputId::BeforeDelete();

}

void UReceivesInputInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UReceivesInputInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
