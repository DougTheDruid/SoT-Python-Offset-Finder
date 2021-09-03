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

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
struct AStatusEffectOverlapZone_OnStatusDelayEnd_Params
{
	int                                                InStatusIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActorRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
struct UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params
{
};

// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
struct UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params
{
};

// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
struct ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<struct FActiveStatusEffect>                 OldEffects;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<struct FActiveStatusEffect>                 AddedEffects;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FActiveStatusEffect>                 RemovedEffects;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
struct UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params
{
	class AActor*                                      Recipient;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatus                                     Status;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
struct UStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<struct FActiveStatusEffect>                 OldEffects;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<struct FActiveStatusEffect>                 AddedEffects;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FActiveStatusEffect>                 RemovedEffects;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
struct UStatusEffectVolumeComponent_UnaffectActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
struct UStatusEffectVolumeComponent_OnParentComponentEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
struct UStatusEffectVolumeComponent_OnParentComponentBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function StatusEffects.StatusEffectVolumeComponent.AffectActor
struct UStatusEffectVolumeComponent_AffectActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
