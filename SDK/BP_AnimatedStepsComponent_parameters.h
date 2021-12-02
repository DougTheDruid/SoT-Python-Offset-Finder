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

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpeningSteps
struct UBP_AnimatedStepsComponent_C_StartOpeningSteps_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.SetAllStepsZs
struct UBP_AnimatedStepsComponent_C_SetAllStepsZs_Params
{
	TArray<float>                                      TargetZOffsets;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OpeningOrClosing;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.UpdateStep
struct UBP_AnimatedStepsComponent_C_UpdateStep_Params
{
	int                                                BoneIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TargetZ;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MovementDelay;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBoxComponent*                               AttachedBox;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     BoxOrigin;                                                 // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ReceiveTick
struct UBP_AnimatedStepsComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.StartOpening
struct UBP_AnimatedStepsComponent_C_StartOpening_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.OpenImmediate
struct UBP_AnimatedStepsComponent_C_OpenImmediate_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.Close
struct UBP_AnimatedStepsComponent_C_Close_Params
{
};

// Function BP_AnimatedStepsComponent.BP_AnimatedStepsComponent_C.ExecuteUbergraph_BP_AnimatedStepsComponent
struct UBP_AnimatedStepsComponent_C_ExecuteUbergraph_BP_AnimatedStepsComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
