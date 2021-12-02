// Name: SoT, Version: 2.4.0

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
//		Offset -> 0x016629C0
//		Name   -> Function BP_ActorGlow.BP_ActorGlow_C.StartGlowEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ActorGlow_C::StartGlowEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ActorGlow.BP_ActorGlow_C.StartGlowEffect");

	ABP_ActorGlow_C_StartGlowEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_ActorGlow.BP_ActorGlow_C.StartReaction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_ActorGlow_C::StartReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ActorGlow.BP_ActorGlow_C.StartReaction");

	ABP_ActorGlow_C_StartReaction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_ActorGlow.BP_ActorGlow_C.StopReaction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_ActorGlow_C::StopReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ActorGlow.BP_ActorGlow_C.StopReaction");

	ABP_ActorGlow_C_StopReaction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ActorGlow_C::CollectDecalMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials");

	ABP_ActorGlow_C_CollectDecalMaterials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ActorGlow_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript");

	ABP_ActorGlow_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_ActorGlow_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay");

	ABP_ActorGlow_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ActorGlow_C::ExecuteUbergraph_BP_ActorGlow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow");

	ABP_ActorGlow_C_ExecuteUbergraph_BP_ActorGlow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ActorGlow_C::AfterRead()
{
	ALandmarkReactionActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(StepsTriggerActor, ABP_StepsTrigger_C);
}

void ABP_ActorGlow_C::BeforeDelete()
{
	ALandmarkReactionActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(StepsTriggerActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
