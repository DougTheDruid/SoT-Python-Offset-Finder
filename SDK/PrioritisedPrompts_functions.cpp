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

void FPrioritisedPrompt::AfterRead()
{
	READ_PTR_FULL(PopUpMessageDesc, UPopUpMessageDesc);
}

void FPrioritisedPrompt::BeforeDelete()
{
	DELE_PTR_FULL(PopUpMessageDesc);
}

void FPrioritisedPromptHandle::AfterRead()
{
}

void FPrioritisedPromptHandle::BeforeDelete()
{
}

void FPrioritisedPromptWithHandle::AfterRead()
{
}

void FPrioritisedPromptWithHandle::BeforeDelete()
{
}

void FPromptEvaluation::AfterRead()
{
}

void FPromptEvaluation::BeforeDelete()
{
}

void FPermanentPromptNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FPermanentPromptNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FPromptsCounterIncrementEvent::AfterRead()
{
	READ_PTR_FULL(AccessKey, UClass);
}

void FPromptsCounterIncrementEvent::BeforeDelete()
{
	DELE_PTR_FULL(AccessKey);
}

void FPlayerPromptTelemetryEvent::AfterRead()
{
}

void FPlayerPromptTelemetryEvent::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03B31EF0
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBasePromptCoordinator::UpdateVisiblePrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt");

	UBasePromptCoordinator_UpdateVisiblePrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBasePromptCoordinator::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable");

	UBasePromptCoordinator_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBasePromptCoordinator::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable");

	UBasePromptCoordinator_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBasePromptCoordinator::Uninitialize_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable");

	UBasePromptCoordinator_Uninitialize_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B31ED0
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBasePromptCoordinator::Uninitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize");

	UBasePromptCoordinator_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B31EB0
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Start
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UBasePromptCoordinator::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Start");

	UBasePromptCoordinator_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B31DC0
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPrioritisedPromptWithHandle                Prompt                                                     (ConstParm, Parm, OutParm, ReferenceParm)
void UBasePromptCoordinator::SetPromptAs(const struct FPrioritisedPromptWithHandle& Prompt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs");

	UBasePromptCoordinator_SetPromptAs_Params params;
	params.Prompt = Prompt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBasePromptCoordinator::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable");

	UBasePromptCoordinator_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            CharacterDispatcher                                        (ConstParm, Parm, OutParm, ReferenceParm)
void UBasePromptCoordinator::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable");

	UBasePromptCoordinator_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B31D40
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBasePromptCoordinator::OnControllerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay");

	UBasePromptCoordinator_OnControllerEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBasePromptCoordinator::MarkAsComplete_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable");

	UBasePromptCoordinator_MarkAsComplete_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B31C10
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPrioritisedPromptWithHandle                Prompt                                                     (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FPromptEvaluation                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPromptEvaluation UBasePromptCoordinator::STATIC_MakeShowPrompt(const struct FPrioritisedPromptWithHandle& Prompt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt");

	UBasePromptCoordinator_MakeShowPrompt_Params params;
	params.Prompt = Prompt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03B31BA0
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPromptEvaluation                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPromptEvaluation UBasePromptCoordinator::STATIC_MakeHideCurrentPrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts");

	UBasePromptCoordinator_MakeHideCurrentPrompts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03B31B30
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPromptEvaluation                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPromptEvaluation UBasePromptCoordinator::STATIC_MakeCompleteCoordinator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator");

	UBasePromptCoordinator_MakeCompleteCoordinator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03B31A70
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.Initialize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AAthenaPlayerController*                     PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrioritisedPromptsManager*                  PrioritisedPromptsManager                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBasePromptCoordinator::Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.Initialize");

	UBasePromptCoordinator_Initialize_Params params;
	params.PlayerController = PlayerController;
	params.PrioritisedPromptsManager = PrioritisedPromptsManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B318A0
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBasePromptCoordinator::GetCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted");

	UBasePromptCoordinator_GetCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPromptEvaluation                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FPromptEvaluation UBasePromptCoordinator::EvaluatePromptDisplayState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState");

	UBasePromptCoordinator_EvaluatePromptDisplayState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03B31880
//		Name   -> Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBasePromptCoordinator::DismissAllPrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts");

	UBasePromptCoordinator_DismissAllPrompts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBasePromptCoordinator::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PlayerController, AAthenaPlayerController);
	READ_PTR_FULL(PrioritisedPromptsManager, UPrioritisedPromptsManager);
	READ_PTR_FULL(CharacterWithRegisteredEvents, ACharacter);
}

void UBasePromptCoordinator::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PlayerController);
	DELE_PTR_FULL(PrioritisedPromptsManager);
	DELE_PTR_FULL(CharacterWithRegisteredEvents);
}

// Function:
//		Offset -> 0x03B31960
//		Name   -> Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UGetPromptsLocalService*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGetPromptsLocalService* UGetPromptsLocalService::STATIC_GetPromptsLocalService(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService");

	UGetPromptsLocalService_GetPromptsLocalService_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGetPromptsLocalService::AfterRead()
{
	UBlueprintAsyncActionBase::AfterRead();

	READ_PTR_FULL(WorldContextObject, UObject);
}

void UGetPromptsLocalService::BeforeDelete()
{
	UBlueprintAsyncActionBase::BeforeDelete();

	DELE_PTR_FULL(WorldContextObject);
}

void UPrioritisedPromptsManager::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PlayerController, APlayerController);
}

void UPrioritisedPromptsManager::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PlayerController);
}

void UPromptCounterAccessKey::AfterRead()
{
	UObject::AfterRead();

}

void UPromptCounterAccessKey::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x03B319E0
//		Name   -> Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UPromptsLocalServiceInterface::IncrementCountForKey(class UClass* AccessKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey");

	UPromptsLocalServiceInterface_IncrementCountForKey_Params params;
	params.AccessKey = AccessKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03B318C0
//		Name   -> Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UPromptsLocalServiceInterface::GetCountForKey(class UClass* AccessKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey");

	UPromptsLocalServiceInterface_GetCountForKey_Params params;
	params.AccessKey = AccessKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPromptsLocalServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPromptsLocalServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPromptsLocalService::AfterRead()
{
	UObject::AfterRead();

}

void UPromptsLocalService::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
