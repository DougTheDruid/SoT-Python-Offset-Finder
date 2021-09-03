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

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.SwapMysteriousStrangerToTutorialModeOnClient
struct UBP_Component_Tutorial2019_C_SwapMysteriousStrangerToTutorialModeOnClient_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TeleportPlayerToOnboardingSpawnPoint
struct UBP_Component_Tutorial2019_C_TeleportPlayerToOnboardingSpawnPoint_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.GetPlayerController
struct UBP_Component_Tutorial2019_C_GetPlayerController_Params
{
	class AAthenaPlayerController*                     Player_Controller;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ConvertActorIdsToActors
struct UBP_Component_Tutorial2019_C_ConvertActorIdsToActors_Params
{
	TArray<TAssetPtr<class AActor>>                    ActorRefs;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Debug_SearchForMissingGoldHoarders
struct UBP_Component_Tutorial2019_C_Debug_SearchForMissingGoldHoarders_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.PopulateGoldHoarderLocationsFromGoldHoarders
struct UBP_Component_Tutorial2019_C_PopulateGoldHoarderLocationsFromGoldHoarders_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceCreatedAndPopulated
struct UBP_Component_Tutorial2019_C_EnsurePurchaseVoyageSequenceCreatedAndPopulated_Params
{
	TArray<struct FVector>                             InputPin;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.EnsurePurchaseVoyageSequenceObjectCreated
struct UBP_Component_Tutorial2019_C_EnsurePurchaseVoyageSequenceObjectCreated_Params
{
	class UBP_Prompt_CTPurchaseVoyageSequence_C*       PromptObject;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.OnRep_GoldHoarderLocations
struct UBP_Component_Tutorial2019_C_OnRep_GoldHoarderLocations_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.TrySetUpCoordinator
struct UBP_Component_Tutorial2019_C_TrySetUpCoordinator_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnClient
struct UBP_Component_Tutorial2019_C_ReceiveTutorial2019BeginPlayOnClient_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ReceiveTutorial2019BeginPlayOnServer
struct UBP_Component_Tutorial2019_C_ReceiveTutorial2019BeginPlayOnServer_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ForceDisableComponent_Blueprint
struct UBP_Component_Tutorial2019_C_ForceDisableComponent_Blueprint_Params
{
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.Set Prompts Visibility
struct UBP_Component_Tutorial2019_C_Set_Prompts_Visibility_Params
{
	bool                                               IsHidden;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReEvaluate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay_In_Seconds;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ControllerOnEndPlay
struct UBP_Component_Tutorial2019_C_ControllerOnEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Component_Tutorial2019.BP_Component_Tutorial2019_C.ExecuteUbergraph_BP_Component_Tutorial2019
struct UBP_Component_Tutorial2019_C_ExecuteUbergraph_BP_Component_Tutorial2019_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
