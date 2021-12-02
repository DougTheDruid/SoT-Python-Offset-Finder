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

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_TavernBoard_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_TavernBoard_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate
struct UBP_Prompt_TavernBoard_C_Evaluate_Params
{
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard
struct UBP_Prompt_TavernBoard_C_OnApproachedTavernBoard_Params
{
	struct FApproachedPlayerGeneratedMapsContainer     Event;                                                     // 0x0000(0x0001)  (Parm)
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard
struct UBP_Prompt_TavernBoard_C_ExecuteUbergraph_BP_Prompt_TavernBoard_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
