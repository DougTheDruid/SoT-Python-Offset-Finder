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

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials
struct UBP_CT_TutorialProgress_C_GetCompanyTutorials_Params
{
	struct FName                                       CompanyName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UBP_CT_VoyageProgress_C*>             CompanyTutorials;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials
struct UBP_CT_TutorialProgress_C_GetOrderOfSoulsTutorials_Params
{
	TArray<class UBP_CT_VoyageProgress_C*>             Result;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials
struct UBP_CT_TutorialProgress_C_GetMerchantAllianceTutorials_Params
{
	TArray<class UBP_CT_VoyageProgress_C*>             Result;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials
struct UBP_CT_TutorialProgress_C_GetGoldhoarderTutorials_Params
{
	TArray<class UBP_CT_VoyageProgress_C*>             Result;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState
struct UBP_CT_TutorialProgress_C_AreAllTutorialsOnState_Params
{
	TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> QueryVoyageState;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState
struct UBP_CT_TutorialProgress_C_IsAnyTutorialOnState_Params
{
	TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> QueryVoyageState;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject
struct UBP_CT_TutorialProgress_C_FindTutorialProgressObject_Params
{
	struct FText                                       VoyageName;                                                // (Parm)
	class UBP_CT_VoyageProgress_C*                     Voyage;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker
struct UBP_CT_TutorialProgress_C_CreateTutorialProgressTracker_Params
{
	class UClass*                                      VoyageProposalDesc;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      TaleRankDesc;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      ExclusionRank;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Disable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_CT_VoyageProgress_C*                     Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start
struct UBP_CT_TutorialProgress_C_Start_Params
{
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress
struct UBP_CT_TutorialProgress_C_Change_Voyage_Progress_Params
{
	struct FText                                       VoyageName;                                                // (Parm)
	TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> New_Progress_State;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress
struct UBP_CT_TutorialProgress_C_ExecuteUbergraph_BP_CT_TutorialProgress_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
