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

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius
struct UBP_PromptCoordinator_Base_C_IsCharacterInsideRadius_Params
{
	struct FVector                                     Center;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable
struct UBP_PromptCoordinator_Base_C_UninitializeImplementable_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher
struct UBP_PromptCoordinator_Base_C_GetHUDObjectMessageDispatcher_Params
{
	struct FObjectMessagingDispatcherHandle            HUD_Dispatcher;                                            // (Parm, OutParm)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete
struct UBP_PromptCoordinator_Base_C_Complete_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles
struct UBP_PromptCoordinator_Base_C_UnregisterHandles_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize
struct UBP_PromptCoordinator_Base_C_PostInitialize_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart
struct UBP_PromptCoordinator_Base_C_InitializeAndStart_Params
{
	class AAthenaPlayerController*                     PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher
struct UBP_PromptCoordinator_Base_C_GetCharacterObjectMessageDispatcher_Params
{
	struct FObjectMessagingDispatcherHandle            Player_Dispatcher;                                         // (Parm, OutParm)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate
struct UBP_PromptCoordinator_Base_C_Evaluate_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher
struct UBP_PromptCoordinator_Base_C_GetControllerObjectMessageDispatcher_Params
{
	struct FObjectMessagingDispatcherHandle            Player_Dispatcher;                                         // (Parm, OutParm)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start
struct UBP_PromptCoordinator_Base_C_Start_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base
struct UBP_PromptCoordinator_Base_C_ExecuteUbergraph_BP_PromptCoordinator_Base_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature
struct UBP_PromptCoordinator_Base_C_OnComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
