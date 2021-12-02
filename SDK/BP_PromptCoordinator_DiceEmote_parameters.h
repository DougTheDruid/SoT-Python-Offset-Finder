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

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc
struct UBP_PromptCoordinator_DiceEmote_C_OnEmoteStartedFunc_Params
{
	struct FEventEmoteStarted                          EventEmoteStarted;                                         // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_DiceEmote_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_DiceEmote_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate
struct UBP_PromptCoordinator_DiceEmote_C_Evaluate_Params
{
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted
struct UBP_PromptCoordinator_DiceEmote_C_OnEmoteStarted_Params
{
	struct FEventEmoteStarted                          EmoteStartedEvent;                                         // 0x0000(0x0098)  (Parm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote
struct UBP_PromptCoordinator_DiceEmote_C_ExecuteUbergraph_BP_PromptCoordinator_DiceEmote_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
