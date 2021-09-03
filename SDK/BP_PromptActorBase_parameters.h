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

// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt
struct ABP_PromptActorBase_C_UninitializePrompt_Params
{
	class UBP_PromptCoordinator_Base_C*                PromptCoordinator;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts
struct ABP_PromptActorBase_C_UninitializeAllPrompts_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete
struct ABP_PromptActorBase_C_CheckAllPromptsComplete_Params
{
	bool                                               AllCompleted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.Complete
struct ABP_PromptActorBase_C_Complete_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass
struct ABP_PromptActorBase_C_GetMyClass_Params
{
	class UClass*                                      Class;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController
struct ABP_PromptActorBase_C_GetAthenaPlayerController_Params
{
	class AAthenaPlayerController*                     AthenaPlayerController;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript
struct ABP_PromptActorBase_C_UserConstructionScript_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator
struct ABP_PromptActorBase_C_Add_Prompt_Coordinator_Params
{
	class UBP_PromptCoordinator_Base_C*                Prompt_Coordinator;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete
struct ABP_PromptActorBase_C_On_Prompt_Complete_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay
struct ABP_PromptActorBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase
struct ABP_PromptActorBase_C_ExecuteUbergraph_BP_PromptActorBase_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature
struct ABP_PromptActorBase_C_OnComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
