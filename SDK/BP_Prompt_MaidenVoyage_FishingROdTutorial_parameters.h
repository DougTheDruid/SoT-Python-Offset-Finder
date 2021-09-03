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

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.FullStateReset
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_FullStateReset_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishEscapingFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishEscapingFunc_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnBattleWhilstReelingFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnBattleWhilstReelingFunc_Params
{
	struct FEventFishingReelingWhileBattlingStateChange EventFishingReelingWhileBattlingStateChange;               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishCaughtFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishCaughtFunc_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishTiredFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishTiredFunc_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishBiteFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishBiteFunc_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnCastRodFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnCastRodFunc_Params
{
	struct FEventSetFishingAnimationState              EventSetFishingAnimationState;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnStowFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnStowFunc_Params
{
	struct FEventStartStow                             EventStartStow;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnWieldFunc
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnWieldFunc_Params
{
	struct FEventObjectWielded                         EventObjectWielded;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.ResetPromptState
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_ResetPromptState_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.Evaluate
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_Evaluate_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.PostInitialize
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_PostInitialize_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnWield
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnWield_Params
{
	struct FEventObjectWielded                         Event;                                                     // (Parm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishTired
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishTired_Params
{
	struct FEventFishingFishBecameTired                Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnCastRod
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnCastRod_Params
{
	struct FEventSetFishingAnimationState              Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishCaught
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishCaught_Params
{
	struct FEventFishingFishCaught                     Event;                                                     // (Parm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishBite
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishBite_Params
{
	struct FEventFishingFishStartedBattling            Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnBattleWhilstReeling
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnBattleWhilstReeling_Params
{
	struct FEventFishingReelingWhileBattlingStateChange Event;                                                     // (Parm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnStow
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnStow_Params
{
	struct FEventStartStow                             Event;                                                     // (Parm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnFishEscaping
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnFishEscaping_Params
{
	struct FEventFishingFishEscaping                   Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.OnTakeControl
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_OnTakeControl_Params
{
	struct FEventPlayerTakenControlOfControllable      NewParam;                                                  // (Parm)
};

// Function BP_Prompt_MaidenVoyage_FishingROdTutorial.BP_Prompt_MaidenVoyage_FishingRodTutorial_C.ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial
struct UBP_Prompt_MaidenVoyage_FishingRodTutorial_C_ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
