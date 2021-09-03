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

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.UnregisterDamageEventFromCurrentShip
struct UBP_Prompt_RepairShipCapstan_C_UnregisterDamageEventFromCurrentShip_Params
{
};

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.RegisterDamageEventWithCurrentShip
struct UBP_Prompt_RepairShipCapstan_C_RegisterDamageEventWithCurrentShip_Params
{
};

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.Evaluate
struct UBP_Prompt_RepairShipCapstan_C_Evaluate_Params
{
};

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShipCapstan_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.OnCurrentShipChanged
struct UBP_Prompt_RepairShipCapstan_C_OnCurrentShipChanged_Params
{
	struct FEventCurrentShipChanged                    Event;                                                     // (Parm)
};

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.OnShipDamaged
struct UBP_Prompt_RepairShipCapstan_C_OnShipDamaged_Params
{
	struct FEventCapstanDamageLevelChanged             Event;                                                     // (Parm)
};

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShipCapstan_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShipCapstan.BP_Prompt_RepairShipCapstan_C.ExecuteUbergraph_BP_Prompt_RepairShipCapstan
struct UBP_Prompt_RepairShipCapstan_C_ExecuteUbergraph_BP_Prompt_RepairShipCapstan_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
