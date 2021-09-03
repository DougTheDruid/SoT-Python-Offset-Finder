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

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShroudBreakerObjectEmitterComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEmitterComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWwiseEmitterComponent* ABP_Shroudbreaker_OnShip_C::GetShroudBreakerObjectEmitterComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShroudBreakerObjectEmitterComponent");

	ABP_Shroudbreaker_OnShip_C_GetShroudBreakerObjectEmitterComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShipHullAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShipHullAudio*          ShipHullAudioRef               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Shroudbreaker_OnShip_C::GetShipHullAudio(class AShipHullAudio** ShipHullAudioRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShipHullAudio");

	ABP_Shroudbreaker_OnShip_C_GetShipHullAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShipHullAudioRef != nullptr)
		*ShipHullAudioRef = params.ShipHullAudioRef;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerDeactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate");

	ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::OnRep_ShroudBreakerEffectsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive");

	ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerEffectsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::OnRep_MusicZoneActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive");

	ABP_Shroudbreaker_OnShip_C_OnRep_MusicZoneActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm, ReferenceParm)
// struct FObjectMessagingHandle  Handle                         (Parm, OutParm, ReferenceParm)
void ABP_Shroudbreaker_OnShip_C::UnregisterShipEvent(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent");

	ABP_Shroudbreaker_OnShip_C_UnregisterShipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Handle != nullptr)
		*Handle = params.Handle;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle Dispatcher                     (Parm, OutParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Shroudbreaker_OnShip_C::GetObjMsgDispatcher(struct FObjectMessagingDispatcherHandle* Dispatcher, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher");

	ABP_Shroudbreaker_OnShip_C_GetObjMsgDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dispatcher != nullptr)
		*Dispatcher = params.Dispatcher;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UserConstructionScript");

	ABP_Shroudbreaker_OnShip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay");

	ABP_Shroudbreaker_OnShip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Shroudbreaker_OnShip_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay");

	ABP_Shroudbreaker_OnShip_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerActivatedEvent Ev                             (Parm)
void ABP_Shroudbreaker_OnShip_C::OnShroudbreakerActivated(const struct FShroudBreakerActivatedEvent& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated");

	ABP_Shroudbreaker_OnShip_C_OnShroudbreakerActivated_Params params;
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerDeactivatedEvent Ev                             (Parm)
void ABP_Shroudbreaker_OnShip_C::OnShroudbreakerDeactivated(const struct FShroudBreakerDeactivatedEvent& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated");

	ABP_Shroudbreaker_OnShip_C_OnShroudbreakerDeactivated_Params params;
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventShipDestroyed     Ev                             (Parm)
void ABP_Shroudbreaker_OnShip_C::OnShipDestroyed(const struct FEventShipDestroyed& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed");

	ABP_Shroudbreaker_OnShip_C_OnShipDestroyed_Params params;
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerActivateEffectsEvent Ev                             (Parm)
void ABP_Shroudbreaker_OnShip_C::OnActivateEffects(const struct FShroudBreakerActivateEffectsEvent& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects");

	ABP_Shroudbreaker_OnShip_C_OnActivateEffects_Params params;
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShroudBreakerDeactivateEffectsEvent Ev                             (Parm)
void ABP_Shroudbreaker_OnShip_C::OnDeactivateEffects(const struct FShroudBreakerDeactivateEffectsEvent& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects");

	ABP_Shroudbreaker_OnShip_C_OnDeactivateEffects_Params params;
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerEnteredIslandVicinity Ev                             (Parm)
void ABP_Shroudbreaker_OnShip_C::PlayerEnteredTP(const struct FEventPlayerEnteredIslandVicinity& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP");

	ABP_Shroudbreaker_OnShip_C_PlayerEnteredTP_Params params;
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerLeftIslandVicinity Ev                             (Parm)
void ABP_Shroudbreaker_OnShip_C::PlayerLeftTP(const struct FEventPlayerLeftIslandVicinity& Ev)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP");

	ABP_Shroudbreaker_OnShip_C_PlayerLeftTP_Params params;
	params.Ev = Ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::OnRepFunctionDeactivateShroudBreaker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker");

	ABP_Shroudbreaker_OnShip_C_OnRepFunctionDeactivateShroudBreaker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerActivationStateChange
// (Event, Protected, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::OnShroudBreakerActivationStateChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerActivationStateChange");

	ABP_Shroudbreaker_OnShip_C_OnShroudBreakerActivationStateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 4 Activation
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Stage_4_Activation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 4 Activation");

	ABP_Shroudbreaker_OnShip_C_Stage_4_Activation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 3 Activation
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Stage_3_Activation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 3 Activation");

	ABP_Shroudbreaker_OnShip_C_Stage_3_Activation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 2 Activation
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Stage_2_Activation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 2 Activation");

	ABP_Shroudbreaker_OnShip_C_Stage_2_Activation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage1Activation
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Stage1Activation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage1Activation");

	ABP_Shroudbreaker_OnShip_C_Stage1Activation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivate All VFX and SFX
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Deactivate_All_VFX_and_SFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivate All VFX and SFX");

	ABP_Shroudbreaker_OnShip_C_Deactivate_All_VFX_and_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 4
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 4");

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 3
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 3");

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 2
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 2");

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 1
// (BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_C::Deactivation_Stage_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 1");

	ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Shroudbreaker_OnShip_C::ExecuteUbergraph_BP_Shroudbreaker_OnShip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip");

	ABP_Shroudbreaker_OnShip_C_ExecuteUbergraph_BP_Shroudbreaker_OnShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Shroudbreaker_OnShip_C::AfterRead()
{
	AShroudBreakerOnShip::AfterRead();

	READ_PTR_FULL(vfx_ShroudBreaker_OnShip_stage4, UParticleSystemComponent);
	READ_PTR_FULL(ShieldPulseMesh, UStaticMeshComponent);
	READ_PTR_FULL(vfx_ShroudBreaker_OnShip_stage3, UParticleSystemComponent);
	READ_PTR_FULL(vfx_shroudbreaker_ember, UParticleSystemComponent);
	READ_PTR_FULL(vfx_shroudbreaker_shipTip, UParticleSystemComponent);
	READ_PTR_FULL(ShieldMesh, UStaticMeshComponent);
	READ_PTR_FULL(WwiseEmitter, UWwiseEmitterComponent);
	READ_PTR_FULL(vfx_ShroudBreaker_disappear_smoke_cloud, UParticleSystemComponent);
	READ_PTR_FULL(vfx_ShroudBreaker_OnShip_stage1, UParticleSystemComponent);
	READ_PTR_FULL(MusicZone, UMusicZoneComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(ParentShipActor, AActor);
	READ_PTR_FULL(Shroudbreaker_Material, UMaterialInstanceDynamic);
	READ_PTR_FULL(ShieldMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(ShieldPulseMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(NewVar_1, USoundBase);
	READ_PTR_FULL(ShipHullAudio, AShipHullAudio);
	READ_PTR_FULL(ShroudBreakerAmbientLoopingWwiseEvent, UWwiseEvent);
}

void ABP_Shroudbreaker_OnShip_C::BeforeDelete()
{
	AShroudBreakerOnShip::BeforeDelete();

	DELE_PTR_FULL(vfx_ShroudBreaker_OnShip_stage4);
	DELE_PTR_FULL(ShieldPulseMesh);
	DELE_PTR_FULL(vfx_ShroudBreaker_OnShip_stage3);
	DELE_PTR_FULL(vfx_shroudbreaker_ember);
	DELE_PTR_FULL(vfx_shroudbreaker_shipTip);
	DELE_PTR_FULL(ShieldMesh);
	DELE_PTR_FULL(WwiseEmitter);
	DELE_PTR_FULL(vfx_ShroudBreaker_disappear_smoke_cloud);
	DELE_PTR_FULL(vfx_ShroudBreaker_OnShip_stage1);
	DELE_PTR_FULL(MusicZone);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(ParentShipActor);
	DELE_PTR_FULL(Shroudbreaker_Material);
	DELE_PTR_FULL(ShieldMaterial);
	DELE_PTR_FULL(ShieldPulseMaterial);
	DELE_PTR_FULL(NewVar_1);
	DELE_PTR_FULL(ShipHullAudio);
	DELE_PTR_FULL(ShroudBreakerAmbientLoopingWwiseEvent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
