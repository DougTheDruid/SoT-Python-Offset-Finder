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

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer
struct UBP_Prompt_QuickStorageTransfer_C_IsStorageContainer_Params
{
	bool                                               Result;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt
struct UBP_Prompt_QuickStorageTransfer_C_GetShowPrompt_Params
{
	struct FPromptEvaluation                           ReturnValue;                                               // 0x0000(0x0070)  (Parm, OutParm, ReturnParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState
struct UBP_Prompt_QuickStorageTransfer_C_EvaluatePromptDisplayState_Params
{
	struct FPromptEvaluation                           ReturnValue;                                               // 0x0000(0x0070)  (Parm, OutParm, ReturnParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_QuickStorageTransfer_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_QuickStorageTransfer_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded
struct UBP_Prompt_QuickStorageTransfer_C_OnObjectWielded_Params
{
	struct FAthena_FEventObjectWielded                 Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer
struct UBP_Prompt_QuickStorageTransfer_C_ExecuteUbergraph_BP_Prompt_QuickStorageTransfer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
