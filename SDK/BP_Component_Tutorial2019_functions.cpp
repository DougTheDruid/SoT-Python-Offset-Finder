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

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.SwapMysteriousStrangerToTutorialModeOnClient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_Component_Tutorial2019_C::SwapMysteriousStrangerToTutorialModeOnClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.SwapMysteriousStrangerToTutorialModeOnClient");

	UBP_Component_Tutorial2019_C_SwapMysteriousStrangerToTutorialModeOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TeleportPlayerToOnboardingSpawnPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_Component_Tutorial2019_C::TeleportPlayerToOnboardingSpawnPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TeleportPlayerToOnboardingSpawnPoint");

	UBP_Component_Tutorial2019_C_TeleportPlayerToOnboardingSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthenaPlayerController* Player_Controller              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Component_Tutorial2019_C::GetPlayerController(class AAthenaPlayerController** Player_Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController");

	UBP_Component_Tutorial2019_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player_Controller != nullptr)
		*Player_Controller = params.Player_Controller;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TAssetPtr<class AActor>> ActorRefs                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
void UBP_Component_Tutorial2019_C::ConvertActorIdsToActors(TArray<TAssetPtr<class AActor>>* ActorRefs, TArray<class AActor*>* OutActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors");

	UBP_Component_Tutorial2019_C_ConvertActorIdsToActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorRefs != nullptr)
		*ActorRefs = params.ActorRefs;
	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Debug_SearchForMissingGoldHoarders
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Component_Tutorial2019_C::Debug_SearchForMissingGoldHoarders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Debug_SearchForMissingGoldHoarders");

	UBP_Component_Tutorial2019_C_Debug_SearchForMissingGoldHoarders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_Component_Tutorial2019_C::PopulateGoldHoarderLocationsFromGoldHoarders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders");

	UBP_Component_Tutorial2019_C_PopulateGoldHoarderLocationsFromGoldHoarders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
void UBP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceCreatedAndPopulated(TArray<struct FVector>* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated");

	UBP_Component_Tutorial2019_C_EnsurePurchaseVoyageSequenceCreatedAndPopulated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Prompt_CTPurchaseVoyageSequence_C* PromptObject                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Component_Tutorial2019_C::EnsurePurchaseVoyageSequenceObjectCreated(class UBP_Prompt_CTPurchaseVoyageSequence_C** PromptObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated");

	UBP_Component_Tutorial2019_C_EnsurePurchaseVoyageSequenceObjectCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PromptObject != nullptr)
		*PromptObject = params.PromptObject;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations
// (BlueprintCallable, BlueprintEvent)
void UBP_Component_Tutorial2019_C::OnRep_GoldHoarderLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations");

	UBP_Component_Tutorial2019_C_OnRep_GoldHoarderLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator
// (BlueprintCallable, BlueprintEvent)
void UBP_Component_Tutorial2019_C::TrySetUpCoordinator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator");

	UBP_Component_Tutorial2019_C_TrySetUpCoordinator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient
// (Event, Public, BlueprintEvent)
void UBP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient");

	UBP_Component_Tutorial2019_C_ReceiveTutorial2019BeginPlayOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer
// (Event, Public, BlueprintEvent)
void UBP_Component_Tutorial2019_C::ReceiveTutorial2019BeginPlayOnServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer");

	UBP_Component_Tutorial2019_C_ReceiveTutorial2019BeginPlayOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ForceDisableComponent_Blueprint
// (Event, Public, BlueprintEvent)
void UBP_Component_Tutorial2019_C::ForceDisableComponent_Blueprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ForceDisableComponent_Blueprint");

	UBP_Component_Tutorial2019_C_ForceDisableComponent_Blueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Set Prompts Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReEvaluate                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Delay_In_Seconds               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Component_Tutorial2019_C::Set_Prompts_Visibility(bool IsHidden, bool ReEvaluate, float Delay_In_Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Set Prompts Visibility");

	UBP_Component_Tutorial2019_C_Set_Prompts_Visibility_Params params;
	params.IsHidden = IsHidden;
	params.ReEvaluate = ReEvaluate;
	params.Delay_In_Seconds = Delay_In_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ControllerOnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Component_Tutorial2019_C::ControllerOnEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ControllerOnEndPlay");

	UBP_Component_Tutorial2019_C_ControllerOnEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Component_Tutorial2019_C::ExecuteUbergraph_BP_Component_Tutorial2019(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019");

	UBP_Component_Tutorial2019_C_ExecuteUbergraph_BP_Component_Tutorial2019_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Component_Tutorial2019_C::AfterRead()
{
	UTutorial2019ContextualDelegatingComponent::AfterRead();

	READ_PTR_FULL(GoToVendorPromptObject, UBP_Prompt_CTPurchaseVoyageSequence_C);
}

void UBP_Component_Tutorial2019_C::BeforeDelete()
{
	UTutorial2019ContextualDelegatingComponent::BeforeDelete();

	DELE_PTR_FULL(GoToVendorPromptObject);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
