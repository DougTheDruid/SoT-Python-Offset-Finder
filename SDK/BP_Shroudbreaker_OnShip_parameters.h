#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShroudBreakerObjectEmitterComponent
struct ABP_Shroudbreaker_OnShip_C_GetShroudBreakerObjectEmitterComponent_Params
{
	class UWwiseEmitterComponent*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetShipHullAudio
struct ABP_Shroudbreaker_OnShip_C_GetShipHullAudio_Params
{
	class AShipHullAudio*                              ShipHullAudioRef;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerDeactivate
struct ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerDeactivate_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_ShroudBreakerEffectsActive
struct ABP_Shroudbreaker_OnShip_C_OnRep_ShroudBreakerEffectsActive_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRep_MusicZoneActive
struct ABP_Shroudbreaker_OnShip_C_OnRep_MusicZoneActive_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UnregisterShipEvent
struct ABP_Shroudbreaker_OnShip_C_UnregisterShipEvent_Params
{
	struct FObjectMessagingDispatcherHandle            Dispatcher;                                                // (Parm, OutParm, ReferenceParm)
	struct FObjectMessagingHandle                      Handle;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.GetObjMsgDispatcher
struct ABP_Shroudbreaker_OnShip_C_GetObjMsgDispatcher_Params
{
	struct FObjectMessagingDispatcherHandle            Dispatcher;                                                // (Parm, OutParm)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.UserConstructionScript
struct ABP_Shroudbreaker_OnShip_C_UserConstructionScript_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveBeginPlay
struct ABP_Shroudbreaker_OnShip_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ReceiveEndPlay
struct ABP_Shroudbreaker_OnShip_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerActivated
struct ABP_Shroudbreaker_OnShip_C_OnShroudbreakerActivated_Params
{
	struct FShroudBreakerActivatedEvent                Ev;                                                        // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudbreakerDeactivated
struct ABP_Shroudbreaker_OnShip_C_OnShroudbreakerDeactivated_Params
{
	struct FShroudBreakerDeactivatedEvent              Ev;                                                        // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShipDestroyed
struct ABP_Shroudbreaker_OnShip_C_OnShipDestroyed_Params
{
	struct FEventShipDestroyed                         Ev;                                                        // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnActivateEffects
struct ABP_Shroudbreaker_OnShip_C_OnActivateEffects_Params
{
	struct FShroudBreakerActivateEffectsEvent          Ev;                                                        // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnDeactivateEffects
struct ABP_Shroudbreaker_OnShip_C_OnDeactivateEffects_Params
{
	struct FShroudBreakerDeactivateEffectsEvent        Ev;                                                        // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerEnteredTP
struct ABP_Shroudbreaker_OnShip_C_PlayerEnteredTP_Params
{
	struct FEventPlayerEnteredIslandVicinity           Ev;                                                        // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.PlayerLeftTP
struct ABP_Shroudbreaker_OnShip_C_PlayerLeftTP_Params
{
	struct FEventPlayerLeftIslandVicinity              Ev;                                                        // (Parm)
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnRepFunctionDeactivateShroudBreaker
struct ABP_Shroudbreaker_OnShip_C_OnRepFunctionDeactivateShroudBreaker_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.OnShroudBreakerActivationStateChange
struct ABP_Shroudbreaker_OnShip_C_OnShroudBreakerActivationStateChange_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 4 Activation
struct ABP_Shroudbreaker_OnShip_C_Stage_4_Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 3 Activation
struct ABP_Shroudbreaker_OnShip_C_Stage_3_Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage 2 Activation
struct ABP_Shroudbreaker_OnShip_C_Stage_2_Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Stage1Activation
struct ABP_Shroudbreaker_OnShip_C_Stage1Activation_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivate All VFX and SFX
struct ABP_Shroudbreaker_OnShip_C_Deactivate_All_VFX_and_SFX_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 4
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_4_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 3
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_3_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 2
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_2_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.Deactivation Stage 1
struct ABP_Shroudbreaker_OnShip_C_Deactivation_Stage_1_Params
{
};

// Function BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C.ExecuteUbergraph_BP_Shroudbreaker_OnShip
struct ABP_Shroudbreaker_OnShip_C_ExecuteUbergraph_BP_Shroudbreaker_OnShip_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
