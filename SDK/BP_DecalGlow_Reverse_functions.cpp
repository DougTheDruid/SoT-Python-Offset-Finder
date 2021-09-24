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
//		Name   -> Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartGlowEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DecalGlow_Reverse_C::StartGlowEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartGlowEffect");

	ABP_DecalGlow_Reverse_C_StartGlowEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartReaction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DecalGlow_Reverse_C::StartReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StartReaction");

	ABP_DecalGlow_Reverse_C_StartReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StopReaction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DecalGlow_Reverse_C::StopReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.StopReaction");

	ABP_DecalGlow_Reverse_C_StopReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.CollectDecalMaterials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DecalGlow_Reverse_C::CollectDecalMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.CollectDecalMaterials");

	ABP_DecalGlow_Reverse_C_CollectDecalMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DecalGlow_Reverse_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.UserConstructionScript");

	ABP_DecalGlow_Reverse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_DecalGlow_Reverse_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ReceiveBeginPlay");

	ABP_DecalGlow_Reverse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ExecuteUbergraph_BP_DecalGlow_Reverse
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DecalGlow_Reverse_C::ExecuteUbergraph_BP_DecalGlow_Reverse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Reverse.BP_DecalGlow_Reverse_C.ExecuteUbergraph_BP_DecalGlow_Reverse");

	ABP_DecalGlow_Reverse_C_ExecuteUbergraph_BP_DecalGlow_Reverse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DecalGlow_Reverse_C::AfterRead()
{
	ALandmarkReactionActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(StepsTriggerActor, ABP_StepsTrigger_C);
	READ_PTR_FULL(StarterActor, ABP_DecalGlow_Longer_C);
}

void ABP_DecalGlow_Reverse_C::BeforeDelete()
{
	ALandmarkReactionActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(StepsTriggerActor);
	DELE_PTR_FULL(StarterActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
