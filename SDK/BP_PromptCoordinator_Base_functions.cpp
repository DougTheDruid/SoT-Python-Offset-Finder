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
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_Base_C::IsCharacterInsideRadius(const struct FVector& Center, float Radius, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius");

	UBP_PromptCoordinator_Base_C_IsCharacterInsideRadius_Params params;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::UninitializeImplementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable");

	UBP_PromptCoordinator_Base_C_UninitializeImplementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            HUD_Dispatcher                                             (Parm, OutParm)
void UBP_PromptCoordinator_Base_C::GetHUDObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* HUD_Dispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher");

	UBP_PromptCoordinator_Base_C_GetHUDObjectMessageDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HUD_Dispatcher != nullptr)
		*HUD_Dispatcher = params.HUD_Dispatcher;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::Complete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete");

	UBP_PromptCoordinator_Base_C_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::UnregisterHandles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles");

	UBP_PromptCoordinator_Base_C_UnregisterHandles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::PostInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize");

	UBP_PromptCoordinator_Base_C_PostInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAthenaPlayerController*                     PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_Base_C::InitializeAndStart(class AAthenaPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart");

	UBP_PromptCoordinator_Base_C_InitializeAndStart_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            Player_Dispatcher                                          (Parm, OutParm)
void UBP_PromptCoordinator_Base_C::GetCharacterObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher");

	UBP_PromptCoordinator_Base_C_GetCharacterObjectMessageDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate");

	UBP_PromptCoordinator_Base_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FObjectMessagingDispatcherHandle            Player_Dispatcher                                          (Parm, OutParm)
void UBP_PromptCoordinator_Base_C::GetControllerObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher");

	UBP_PromptCoordinator_Base_C_GetControllerObjectMessageDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player_Dispatcher != nullptr)
		*Player_Dispatcher = params.Player_Dispatcher;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start");

	UBP_PromptCoordinator_Base_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PromptCoordinator_Base_C::ExecuteUbergraph_BP_PromptCoordinator_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base");

	UBP_PromptCoordinator_Base_C_ExecuteUbergraph_BP_PromptCoordinator_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_PromptCoordinator_Base_C::OnComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature");

	UBP_PromptCoordinator_Base_C_OnComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_PromptCoordinator_Base_C::AfterRead()
{
	UBasePromptCoordinator::AfterRead();

}

void UBP_PromptCoordinator_Base_C::BeforeDelete()
{
	UBasePromptCoordinator::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
