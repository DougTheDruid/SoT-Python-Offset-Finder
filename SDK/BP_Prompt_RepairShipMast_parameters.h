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

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterDamageEventFromCurrentShip
struct UBP_Prompt_RepairShipMast_C_UnregisterDamageEventFromCurrentShip_Params
{
};

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterDamageEventWithCurrentShip
struct UBP_Prompt_RepairShipMast_C_RegisterDamageEventWithCurrentShip_Params
{
};

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.Evaluate
struct UBP_Prompt_RepairShipMast_C_Evaluate_Params
{
};

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShipMast_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnCurrentShipChanged
struct UBP_Prompt_RepairShipMast_C_OnCurrentShipChanged_Params
{
	struct FEventCurrentShipChanged                    Event;                                                     // (Parm)
};

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnShipMastDamaged
struct UBP_Prompt_RepairShipMast_C_OnShipMastDamaged_Params
{
	struct FEventMastDamageLevelChanged                Event;                                                     // (Parm)
};

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShipMast_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.ExecuteUbergraph_BP_Prompt_RepairShipMast
struct UBP_Prompt_RepairShipMast_C_ExecuteUbergraph_BP_Prompt_RepairShipMast_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
