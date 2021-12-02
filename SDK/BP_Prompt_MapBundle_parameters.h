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

// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_MapBundle_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_MapBundle_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate
struct UBP_Prompt_MapBundle_C_Evaluate_Params
{
};

// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible
struct UBP_Prompt_MapBundle_C_OnMapBundleBecameVisible_Params
{
	struct FPlayerBuriedItemsMapBundleBecameVisible    Event;                                                     // 0x0000(0x0001)  (Parm)
};

// Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle
struct UBP_Prompt_MapBundle_C_ExecuteUbergraph_BP_Prompt_MapBundle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
