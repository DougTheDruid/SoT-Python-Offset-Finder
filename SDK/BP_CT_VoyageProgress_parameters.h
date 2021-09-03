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

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPurchaseable
struct UBP_CT_VoyageProgress_C_IsPurchaseable_Params
{
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.SetProgress
struct UBP_CT_VoyageProgress_C_SetProgress_Params
{
	TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> NewProgress;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsCurrently
struct UBP_CT_VoyageProgress_C_IsCurrently_Params
{
	TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPast
struct UBP_CT_VoyageProgress_C_IsPast_Params
{
	TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.PopulateExistingState
struct UBP_CT_VoyageProgress_C_PopulateExistingState_Params
{
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.Initialise
struct UBP_CT_VoyageProgress_C_Initialise_Params
{
	bool                                               Disabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.ExecuteUbergraph_BP_CT_VoyageProgress
struct UBP_CT_VoyageProgress_C_ExecuteUbergraph_BP_CT_VoyageProgress_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
