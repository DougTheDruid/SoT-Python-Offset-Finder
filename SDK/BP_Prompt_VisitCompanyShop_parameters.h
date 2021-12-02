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

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop
struct UBP_Prompt_VisitCompanyShop_C_HasAlreadyVisitedCompanyShop_Params
{
	bool                                               HasVistedCompanyShop;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo
struct UBP_Prompt_VisitCompanyShop_C_SetCompanyPromptInfo_Params
{
	class UClass*                                      Company;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      AccessKey;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPrioritisedPromptWithHandle                Prompt;                                                    // 0x0010(0x0068)  (Parm)
	class UClass*                                      CompanyRankDesc;                                           // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold
struct UBP_Prompt_VisitCompanyShop_C_OnTreasureChestSold_Params
{
	struct FTreasureChestSoldClientPredictionEvent     Event;                                                     // 0x0000(0x0008)  (Parm)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate
struct UBP_Prompt_VisitCompanyShop_C_Evaluate_Params
{
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_VisitCompanyShop_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_VisitCompanyShop_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent
struct UBP_Prompt_VisitCompanyShop_C_TreasureChestSoldPredictedEvent_Params
{
	struct FTreasureChestSoldClientPredictionEvent     Event;                                                     // 0x0000(0x0008)  (Parm)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop
struct UBP_Prompt_VisitCompanyShop_C_ExecuteUbergraph_BP_Prompt_VisitCompanyShop_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
