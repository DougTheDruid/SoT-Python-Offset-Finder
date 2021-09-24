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

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldFunc
struct UBP_Prompt_SpeakingTrumpet_C_OnWieldFunc_Params
{
	struct FEventObjectWielded                         EventObjectWielded;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_SpeakingTrumpet_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_SpeakingTrumpet_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.Evaluate
struct UBP_Prompt_SpeakingTrumpet_C_Evaluate_Params
{
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldEvent
struct UBP_Prompt_SpeakingTrumpet_C_OnWieldEvent_Params
{
	struct FEventObjectWielded                         OnWieldEvent;                                              // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.ExecuteUbergraph_BP_Prompt_SpeakingTrumpet
struct UBP_Prompt_SpeakingTrumpet_C_ExecuteUbergraph_BP_Prompt_SpeakingTrumpet_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
