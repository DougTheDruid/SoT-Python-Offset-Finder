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

// Function BP_Base_Capstan.BP_Base_Capstan_C.GetArms
struct ABP_Base_Capstan_C_GetArms_Params
{
	TArray<class ACapstanArm*>                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript
struct ABP_Base_Capstan_C_UserConstructionScript_Params
{
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character
struct ABP_Base_Capstan_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed
struct ABP_Base_Capstan_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface
struct ABP_Base_Capstan_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                   // (Parm)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce
struct ABP_Base_Capstan_C_CapstanForce_Params
{
	float                                              IndividualForce;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  LH_IK;                                                     // (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  RH_IK;                                                     // (Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform
struct ABP_Base_Capstan_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  TransformUpdate;                                           // (Parm, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing
struct ABP_Base_Capstan_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendOut;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength
struct ABP_Base_Capstan_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LocationStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotationStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active
struct ABP_Base_Capstan_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch
struct ABP_Base_Capstan_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpineStretch;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LegStretch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan
struct ABP_Base_Capstan_C_ExecuteUbergraph_BP_Base_Capstan_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
