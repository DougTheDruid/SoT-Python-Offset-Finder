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

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ResetState
struct UBP_Prompt_UseAMermaid_C_ResetState_Params
{
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState
struct UBP_Prompt_UseAMermaid_C_EvaluatePromptDisplayState_Params
{
	struct FPromptEvaluation                           ReturnValue;                                               // 0x0000(0x0070)  (Parm, OutParm, ReturnParm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize
struct UBP_Prompt_UseAMermaid_C_PostInitialize_Params
{
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally
struct UBP_Prompt_UseAMermaid_C_Prompt_MermaidActivatedLocally_Params
{
	struct FMermaidActivatedLocally                    Ev;                                                        // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally
struct UBP_Prompt_UseAMermaid_C_Prompt_MermaidDeactivatedLocally_Params
{
	struct FMermaidDeactivatedLocally                  Ev;                                                        // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed
struct UBP_Prompt_UseAMermaid_C_Prompt_MermaidUsed_Params
{
	struct FMermaidUsedEvent                           Ev;                                                        // 0x0000(0x0018)  (Parm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_UseAMermaid_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_UseAMermaid_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid
struct UBP_Prompt_UseAMermaid_C_ExecuteUbergraph_BP_Prompt_UseAMermaid_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
