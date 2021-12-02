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
//		Name   -> Function BP_Castaway.BP_Castaway_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Castaway_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.UserConstructionScript");

	ABP_Castaway_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UWwiseEvent*                                 AudioEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Castaway_C::TriggerAudioEvent(class UWwiseEvent* AudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent");

	ABP_Castaway_C_TriggerAudioEvent_Params params {};
	params.AudioEvent = AudioEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Castaway_C::StopCurrentAudioEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent");

	ABP_Castaway_C_StopCurrentAudioEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                EventIdx                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Castaway_C::Multicast_TriggerAudioEvent(int EventIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent");

	ABP_Castaway_C_Multicast_TriggerAudioEvent_Params params {};
	params.EventIdx = EventIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Castaway.BP_Castaway_C.ResetVisibility
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Castaway_C::ResetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.ResetVisibility");

	ABP_Castaway_C_ResetVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Castaway_C::ExecuteUbergraph_BP_Castaway(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway");

	ABP_Castaway_C_ExecuteUbergraph_BP_Castaway_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Castaway_C::AfterRead()
{
	ABP_Orderofsouls_TallTales_C::AfterRead();

	READ_PTR_FULL(ActorPhasing, UActorPhasingComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter_1, UAnimNotifyWwiseEmitterComponent);
}

void ABP_Castaway_C::BeforeDelete()
{
	ABP_Orderofsouls_TallTales_C::BeforeDelete();

	DELE_PTR_FULL(ActorPhasing);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
