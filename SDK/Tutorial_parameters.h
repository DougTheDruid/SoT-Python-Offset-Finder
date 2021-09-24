#pragma once

// Name: SoT, Version: 2.3.0


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

// Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage
struct UCompanyTutorialVoyageProgress_IsSameVoyage_Params
{
	struct FText                                       VoyageName;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage
struct UCompanyTutorialVoyageProgress_AssignVoyage_Params
{
	class UClass*                                      VoyageProposalDescClass;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      TaleRankDescClass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
struct UTutorial2019Component_ReceiveTutorial2019BeginPlayOnServer_Params
{
};

// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
struct UTutorial2019Component_ReceiveTutorial2019BeginPlayOnClient_Params
{
};

// Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
struct UTutorial2019Component_OnRep_IsEnabledByServer_Params
{
	bool                                               OldIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
struct UTutorial2019Component_ForceDisableComponent_Blueprint_Params
{
};

// Function Tutorial.Tutorial2019Component.BeginOnServer
struct UTutorial2019Component_BeginOnServer_Params
{
};

// Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint
struct UTutorial2019FunctionLibrary_GetNearestOnboardingSpawnPoint_Params
{
	class AActor*                                      CharacterToTeleport;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTeleportLocation                           ReturnValue;                                               // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted
struct UTutorialHelpersBlueprintLibrary_FirePromptCompleted_Params
{
	class UClass*                                      AccessKey;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                     WorldContextObject;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass
struct UTutorialManager_OnRep_SelectedTutorialClass_Params
{
};

// Function Tutorial.CompanyOnboardingStarter.HasPrerequisites
struct UCompanyOnboardingStarter_HasPrerequisites_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
