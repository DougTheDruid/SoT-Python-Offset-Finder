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

// Function BP_Base_Capstan.BP_Base_Capstan_C.GetArms
struct ABP_Base_Capstan_C_GetArms_Params
{
	TArray<class ACapstanArm*>                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript
struct ABP_Base_Capstan_C_UserConstructionScript_Params
{
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character
struct ABP_Base_Capstan_C_Update_Athena_Character_Params
{
	class AAthenaCharacter*                            AthenaCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed
struct ABP_Base_Capstan_C_CapstanRotationSpeed_Params
{
	float                                              RotationSpeed;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface
struct ABP_Base_Capstan_C_DockingInterface_Params
{
	struct FBP_Docking                                 Docking;                                                   // 0x0000(0x0028)  (Parm)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce
struct ABP_Base_Capstan_C_CapstanForce_Params
{
	float                                              IndividualForce;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  LH_IK;                                                     // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  RH_IK;                                                     // 0x0040(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform
struct ABP_Base_Capstan_C_IK_Limb_Update_Transform_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  TransformUpdate;                                           // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing
struct ABP_Base_Capstan_C_IK_Limb_Blend_Timing_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendIn;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendOut;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength
struct ABP_Base_Capstan_C_IK_Limb_Update_Strength_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LocationStrength;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotationStrength;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active
struct ABP_Base_Capstan_C_IK_Limb_Active_Params
{
	TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Active;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch
struct ABP_Base_Capstan_C_IK_Limb_Stretch_Params
{
	float                                              ArmStretch;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SpineStretch;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LegStretch;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan
struct ABP_Base_Capstan_C_ExecuteUbergraph_BP_Base_Capstan_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
