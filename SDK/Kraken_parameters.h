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

// Function Kraken.KrakenTentacle.OnDamageToTentacle
struct AKrakenTentacle_OnDamageToTentacle_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Kraken.Murk.DeactivateMurkBP
struct AMurk_DeactivateMurkBP_Params
{
};

// Function Kraken.Murk.ActivateMurkBP
struct AMurk_ActivateMurkBP_Params
{
};

// Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
struct AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params
{
};

// Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
struct AKraken_Multicast_OnTentacleTakenDamage_Params
{
};

// Function Kraken.Kraken.AddActorToKnownTargets
struct AKraken_AddActorToKnownTargets_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Kraken.KrakenHead.RequestState
struct AKrakenHead_RequestState_Params
{
	class UClass*                                      NewState;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Kraken.KrakenHead.OnRep_IsDamageEnabled
struct AKrakenHead_OnRep_IsDamageEnabled_Params
{
};

// Function Kraken.KrakenHead.OnRep_HeadStateRequest
struct AKrakenHead_OnRep_HeadStateRequest_Params
{
};

// Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent
struct AKrakenHead_OnCoordinatedKrakenSpecialEvent_Params
{
	TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Kraken.KrakenService.RequestKrakenWithLocation
struct AKrakenService_RequestKrakenWithLocation_Params
{
	struct FVector                                     SpawnLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      SpawnedForActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Kraken.KrakenService.IsServiceInitialized
struct AKrakenService_IsServiceInitialized_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Kraken.KrakenService.IsKrakenActive
struct AKrakenService_IsKrakenActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Kraken.KrakenService.DismissKraken
struct AKrakenService_DismissKraken_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
