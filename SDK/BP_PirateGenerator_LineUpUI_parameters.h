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

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetLockStatus
struct ABP_PirateGenerator_LineUpUI_C_GetLockStatus_Params
{
	int                                                IndexToToggle;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ToggleLockStatus
struct ABP_PirateGenerator_LineUpUI_C_ToggleLockStatus_Params
{
	int                                                IndexToToggle;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ClearLockedPirates
struct ABP_PirateGenerator_LineUpUI_C_ClearLockedPirates_Params
{
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetTransitionState
struct ABP_PirateGenerator_LineUpUI_C_GetTransitionState_Params
{
	bool                                               Transitioning;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.GetAnimationDataFromClass
struct ABP_PirateGenerator_LineUpUI_C_GetAnimationDataFromClass_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAD_FrontendPirate_Default_C*                AnimationData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.SanitizeAnimationPoses
struct ABP_PirateGenerator_LineUpUI_C_SanitizeAnimationPoses_Params
{
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.RandomizePirates
struct ABP_PirateGenerator_LineUpUI_C_RandomizePirates_Params
{
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.UserConstructionScript
struct ABP_PirateGenerator_LineUpUI_C_UserConstructionScript_Params
{
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ReceiveBeginPlay
struct ABP_PirateGenerator_LineUpUI_C_ReceiveBeginPlay_Params
{
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.LineUpPirateInitalized
struct ABP_PirateGenerator_LineUpUI_C_LineUpPirateInitalized_Params
{
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.ExecuteUbergraph_BP_PirateGenerator_LineUpUI
struct ABP_PirateGenerator_LineUpUI_C_ExecuteUbergraph_BP_PirateGenerator_LineUpUI_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C.PirateLineUpInitializedDispatcher__DelegateSignature
struct ABP_PirateGenerator_LineUpUI_C_PirateLineUpInitializedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
