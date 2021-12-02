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

// Function BP_DamageZone.BP_DamageZone_C.GetNumExternalHits
struct ABP_DamageZone_C_GetNumExternalHits_Params
{
	int                                                NumExternalHits;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DamageZone.BP_DamageZone_C.OnRep_Rep_ExternalHitList
struct ABP_DamageZone_C_OnRep_Rep_ExternalHitList_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.GetOrCreateDecalMID
struct ABP_DamageZone_C_GetOrCreateDecalMID_Params
{
	class UMaterialInstanceDynamic*                    DecalMID;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DamageZone.BP_DamageZone_C.Initialise
struct ABP_DamageZone_C_Initialise_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Update External Hits
struct ABP_DamageZone_C_Update_External_Hits_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Clear Decal Flags
struct ABP_DamageZone_C_Clear_Decal_Flags_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Add Deferred Decal
struct ABP_DamageZone_C_Add_Deferred_Decal_Params
{
	class UDecalComponent*                             Decal;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DamageZone.BP_DamageZone_C.KillDeferredDecal
struct ABP_DamageZone_C_KillDeferredDecal_Params
{
	class UDecalComponent*                             Decal;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_DamageZone.BP_DamageZone_C.RemoveDeferredDecals
struct ABP_DamageZone_C_RemoveDeferredDecals_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.Set Repair Visibility
struct ABP_DamageZone_C_Set_Repair_Visibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DamageZone.BP_DamageZone_C.Add External Hit
struct ABP_DamageZone_C_Add_External_Hit_Params
{
	struct FHullDamageHit                              HitData;                                                   // 0x0000(0x0024)  (Parm)
};

// Function BP_DamageZone.BP_DamageZone_C.CollectTaggedComponents
struct ABP_DamageZone_C_CollectTaggedComponents_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.UserConstructionScript
struct ABP_DamageZone_C_UserConstructionScript_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.AddExternalHit
struct ABP_DamageZone_C_AddExternalHit_Params
{
	struct FHullDamageHit                              Hit_Data;                                                  // 0x0000(0x0024)  (Parm)
};

// Function BP_DamageZone.BP_DamageZone_C.ClearDecalFlags
struct ABP_DamageZone_C_ClearDecalFlags_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.OnRepairableStateUpdate
struct ABP_DamageZone_C_OnRepairableStateUpdate_Params
{
	TEnumAsByte<Repair_ERepairableState>               InRepairableState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DamageZone.BP_DamageZone_C.OnInitialise
struct ABP_DamageZone_C_OnInitialise_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.OnDecalMaterialUpdatedToRepaired
struct ABP_DamageZone_C_OnDecalMaterialUpdatedToRepaired_Params
{
};

// Function BP_DamageZone.BP_DamageZone_C.ExecuteUbergraph_BP_DamageZone
struct ABP_DamageZone_C_ExecuteUbergraph_BP_DamageZone_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
