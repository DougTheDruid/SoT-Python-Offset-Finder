#pragma once

// Name: SoT, Version: 2.3.0


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
	int                                                InStatusIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActorRef;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
	TArray<struct FActiveStatusEffect>                 OldEffects;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<struct FActiveStatusEffect>                 AddedEffects;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FActiveStatusEffect>                 RemovedEffects;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
struct UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params
{
	class AActor*                                      Recipient;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatus                                     Status;                                                    // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
struct UStatusEffectManagerComponent_OnRep_ActiveEffects_Params
{
	TArray<struct FActiveStatusEffect>                 OldEffects;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
struct UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params
{
	TArray<struct FActiveStatusEffect>                 AddedEffects;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FActiveStatusEffect>                 RemovedEffects;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
struct UStatusEffectVolumeComponent_UnaffectActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
struct UStatusEffectVolumeComponent_OnParentComponentEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
struct UStatusEffectVolumeComponent_OnParentComponentBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function StatusEffects.StatusEffectVolumeComponent.AffectActor
struct UStatusEffectVolumeComponent_AffectActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
