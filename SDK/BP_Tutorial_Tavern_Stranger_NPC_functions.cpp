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
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UnhidePlayerPrompts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Tutorial_Tavern_Stranger_NPC_C::UnhidePlayerPrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UnhidePlayerPrompts");

	ABP_Tutorial_Tavern_Stranger_NPC_C_UnhidePlayerPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Tutorial_Tavern_Stranger_NPC_C::CanInteract(class AActor* InInteractor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CanInteract");

	ABP_Tutorial_Tavern_Stranger_NPC_C_CanInteract_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.StartOnboardingCutscene
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Tutorial_Tavern_Stranger_NPC_C::StartOnboardingCutscene()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.StartOnboardingCutscene");

	ABP_Tutorial_Tavern_Stranger_NPC_C_StartOnboardingCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Tutorial_Tavern_Stranger_NPC_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UserConstructionScript");

	ABP_Tutorial_Tavern_Stranger_NPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.QueueCutsceneActorDestruction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Tutorial_Tavern_Stranger_NPC_C::QueueCutsceneActorDestruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.QueueCutsceneActorDestruction");

	ABP_Tutorial_Tavern_Stranger_NPC_C_QueueCutsceneActorDestruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Tutorial_Tavern_Stranger_NPC_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ReceiveEndPlay");

	ABP_Tutorial_Tavern_Stranger_NPC_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CleanTutorialCutScene
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void ABP_Tutorial_Tavern_Stranger_NPC_C::CleanTutorialCutScene()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CleanTutorialCutScene");

	ABP_Tutorial_Tavern_Stranger_NPC_C_CleanTutorialCutScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Tutorial_Tavern_Stranger_NPC_C::ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC");

	ABP_Tutorial_Tavern_Stranger_NPC_C_ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Tutorial_Tavern_Stranger_NPC_C::AfterRead()
{
	ATutorialTavernStrangerNPC::AfterRead();

	READ_PTR_FULL(SolidHits, UCapsuleComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(CutSceneActor, ACutSceneActor);
}

void ABP_Tutorial_Tavern_Stranger_NPC_C::BeforeDelete()
{
	ATutorialTavernStrangerNPC::BeforeDelete();

	DELE_PTR_FULL(SolidHits);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(CutSceneActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
