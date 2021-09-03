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

// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PromptCoordinator_Base_C* PromptCoordinator              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::UninitializePrompt(class UBP_PromptCoordinator_Base_C* PromptCoordinator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt");

	ABP_PromptActorBase_C_UninitializePrompt_Params params;
	params.PromptCoordinator = PromptCoordinator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::UninitializeAllPrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts");

	ABP_PromptActorBase_C_UninitializeAllPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::CheckAllPromptsComplete(bool* AllCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete");

	ABP_PromptActorBase_C_CheckAllPromptsComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllCompleted != nullptr)
		*AllCompleted = params.AllCompleted;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.Complete");

	ABP_PromptActorBase_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::GetMyClass(class UClass** Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass");

	ABP_PromptActorBase_C_GetMyClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Class != nullptr)
		*Class = params.Class;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthenaPlayerController* AthenaPlayerController         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::GetAthenaPlayerController(class AAthenaPlayerController** AthenaPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController");

	ABP_PromptActorBase_C_GetAthenaPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AthenaPlayerController != nullptr)
		*AthenaPlayerController = params.AthenaPlayerController;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript");

	ABP_PromptActorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PromptCoordinator_Base_C* Prompt_Coordinator             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::Add_Prompt_Coordinator(class UBP_PromptCoordinator_Base_C* Prompt_Coordinator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator");

	ABP_PromptActorBase_C_Add_Prompt_Coordinator_Params params;
	params.Prompt_Coordinator = Prompt_Coordinator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete
// (BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::On_Prompt_Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete");

	ABP_PromptActorBase_C_On_Prompt_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay");

	ABP_PromptActorBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::ExecuteUbergraph_BP_PromptActorBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase");

	ABP_PromptActorBase_C_ExecuteUbergraph_BP_PromptActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::OnComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature");

	ABP_PromptActorBase_C_OnComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PromptActorBase_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_PromptActorBase_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
