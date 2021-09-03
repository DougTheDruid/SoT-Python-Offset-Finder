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

// Function BP_PlayerPirate.BP_PlayerPirate_C.GetPxActorCapacityForPhysXAggregate
struct ABP_PlayerPirate_C_GetPxActorCapacityForPhysXAggregate_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.TattoGlowDynamicMaterials
struct ABP_PlayerPirate_C_TattoGlowDynamicMaterials_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.GetMouthPosition
struct ABP_PlayerPirate_C_GetMouthPosition_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.UserConstructionScript
struct ABP_PlayerPirate_C_UserConstructionScript_Params
{
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.Update Athena Character
struct ABP_PlayerPirate_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanRotationSpeed
struct ABP_PlayerPirate_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.DockingInterface
struct ABP_PlayerPirate_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                   // (Parm)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanForce
struct ABP_PlayerPirate_C_CapstanForce_Params
{
	float                                              IndividualForce;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  LH_IK;                                                     // (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  RH_IK;                                                     // (Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Transform
struct ABP_PlayerPirate_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  TransformUpdate;                                           // (Parm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Blend Timing
struct ABP_PlayerPirate_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendOut;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Strength
struct ABP_PlayerPirate_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LocationStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotationStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Active
struct ABP_PlayerPirate_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Stretch
struct ABP_PlayerPirate_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpineStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LegStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.ReceiveBeginPlay
struct ABP_PlayerPirate_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.TriggerTattooGlow
struct ABP_PlayerPirate_C_TriggerTattooGlow_Params
{
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.ScaleMesh
struct ABP_PlayerPirate_C_ScaleMesh_Params
{
	struct FVector                                     Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         FirstPersonMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         ThirdPersonMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.SkipToNextMesh
struct ABP_PlayerPirate_C_SkipToNextMesh_Params
{
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.SetWieldedItemMesh
struct ABP_PlayerPirate_C_SetWieldedItemMesh_Params
{
	class AWieldableItem*                              Wieldable_Item_Ref;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMesh*                                 StaticMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USkeletalMesh*                               SkeletalMesh;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WieldItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UStaticMesh*>                         StaticMeshArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class USkeletalMesh*>                       SkeletalMeshArray;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ItemScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseItemScale;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.IncreaseWieldedObjectScale
struct ABP_PlayerPirate_C_IncreaseWieldedObjectScale_Params
{
	struct FVector                                     ItemScaleIncrement;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerPirate.BP_PlayerPirate_C.ExecuteUbergraph_BP_PlayerPirate
struct ABP_PlayerPirate_C_ExecuteUbergraph_BP_PlayerPirate_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
