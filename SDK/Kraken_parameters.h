#pragma once

// Name: SoT, Version: 2.4.0


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
	struct FImpactDamageEvent                          ImpactDamageEvent;                                         // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm)
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
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Kraken.KrakenHead.RequestState
struct AKrakenHead_RequestState_Params
{
	class UClass*                                      NewState;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
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
	TEnumAsByte<Kraken_ECoordinatedKrakenSpecialEventTypes> InEventType;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Kraken.KrakenService.RequestKrakenWithLocation
struct AKrakenService_RequestKrakenWithLocation_Params
{
	struct FVector                                     SpawnLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      SpawnedForActor;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Kraken.KrakenService.IsServiceInitialized
struct AKrakenService_IsServiceInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Kraken.KrakenService.IsKrakenActive
struct AKrakenService_IsKrakenActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Kraken.KrakenService.DismissKraken
struct AKrakenService_DismissKraken_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
