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

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.OnEventObjectWielded
struct UBP_Prompt_VisitSeapost_C_OnEventObjectWielded_Params
{
	struct FAthena_FEventObjectWielded                 Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.Evaluate
struct UBP_Prompt_VisitSeapost_C_Evaluate_Params
{
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.EventObjectWielded
struct UBP_Prompt_VisitSeapost_C_EventObjectWielded_Params
{
	struct FAthena_FEventObjectWielded                 Event;                                                     // 0x0000(0x0010)  (Parm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_VisitSeapost_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_VisitSeapost_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.ExecuteUbergraph_BP_Prompt_VisitSeapost
struct UBP_Prompt_VisitSeapost_C_ExecuteUbergraph_BP_Prompt_VisitSeapost_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
