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

// Function BP_HullDamage.BP_HullDamage_C.Apply Hit
struct ABP_HullDamage_C_Apply_Hit_Params
{
	struct FVector                                     HitPosition;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitNormal;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HitStrength;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Has_Decal;                                                 // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDecalComponent*                             Decal;                                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HullDamage.BP_HullDamage_C.PlayHitSFX
struct ABP_HullDamage_C_PlayHitSFX_Params
{
	struct FVector                                     HitLocation;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HitStrenght;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HullDamage.BP_HullDamage_C.Apply Visual Hit
struct ABP_HullDamage_C_Apply_Visual_Hit_Params
{
	struct FVector                                     HitPosition;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitNormal;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HitStrength;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasDecal;                                                  // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDecalComponent*                             Decal;                                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HullDamage.BP_HullDamage_C.Process Hit
struct ABP_HullDamage_C_Process_Hit_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                         // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm)
};

// Function BP_HullDamage.BP_HullDamage_C.Scale Hit Strength and Get Decal Flag
struct ABP_HullDamage_C_Scale_Hit_Strength_and_Get_Decal_Flag_Params
{
	struct FVector                                     Hit_Normal;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Hit_Velocity;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Hit_Strength;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Strength;                                                  // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasDecal;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HullDamage.BP_HullDamage_C.Get Random Deferred Decal
struct ABP_HullDamage_C_Get_Random_Deferred_Decal_Params
{
	class UMaterialInterface*                          Decal_Material;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HullDamage.BP_HullDamage_C.Get Random Persistent Decal
struct ABP_HullDamage_C_Get_Random_Persistent_Decal_Params
{
	class UTexture2D*                                  Decal_Texture;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HullDamage.BP_HullDamage_C.Initialize Damage Materials
struct ABP_HullDamage_C_Initialize_Damage_Materials_Params
{
	TArray<class UStaticMeshComponent*>                StaticMeshes;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript
struct ABP_HullDamage_C_UserConstructionScript_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay
struct ABP_HullDamage_C_ReceiveBeginPlay_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature
struct ABP_HullDamage_C_BndEvt__ShipDamageComponent_K2Node_ComponentBoundEvent_6_ImpactDamageEventDelegate__DelegateSignature_Params
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                         // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage
struct ABP_HullDamage_C_ExecuteUbergraph_BP_HullDamage_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
