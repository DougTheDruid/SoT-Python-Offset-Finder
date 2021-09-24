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

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_PromptCoordinator_Base_C*                PromptCoordinator                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::UninitializePrompt(class UBP_PromptCoordinator_Base_C* PromptCoordinator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt");

	ABP_PromptActorBase_C_UninitializePrompt_Params params;
	params.PromptCoordinator = PromptCoordinator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_PromptActorBase_C::UninitializeAllPrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts");

	ABP_PromptActorBase_C_UninitializeAllPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               AllCompleted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
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


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.Complete
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.Complete");

	ABP_PromptActorBase_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
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


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController
//		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AAthenaPlayerController*                     AthenaPlayerController                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
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


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript");

	ABP_PromptActorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_PromptCoordinator_Base_C*                Prompt_Coordinator                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::Add_Prompt_Coordinator(class UBP_PromptCoordinator_Base_C* Prompt_Coordinator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator");

	ABP_PromptActorBase_C_Add_Prompt_Coordinator_Params params;
	params.Prompt_Coordinator = Prompt_Coordinator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_PromptActorBase_C::On_Prompt_Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete");

	ABP_PromptActorBase_C_On_Prompt_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay");

	ABP_PromptActorBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActorBase_C::ExecuteUbergraph_BP_PromptActorBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase");

	ABP_PromptActorBase_C_ExecuteUbergraph_BP_PromptActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
