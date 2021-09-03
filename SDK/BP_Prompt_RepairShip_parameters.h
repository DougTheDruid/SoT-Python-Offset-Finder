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

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterDamageEventFromCurrentShip
struct UBP_Prompt_RepairShip_C_UnregisterDamageEventFromCurrentShip_Params
{
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterDamageEventWithCurrentShip
struct UBP_Prompt_RepairShip_C_RegisterDamageEventWithCurrentShip_Params
{
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.Evaluate
struct UBP_Prompt_RepairShip_C_Evaluate_Params
{
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShip_C_RegisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnCurrentShipChanged
struct UBP_Prompt_RepairShip_C_OnCurrentShipChanged_Params
{
	struct FEventCurrentShipChanged                    Event;                                                     // (Parm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnShipDamaged
struct UBP_Prompt_RepairShip_C_OnShipDamaged_Params
{
	struct FDamageZoneDamageLevelChanged               Event;                                                     // (Parm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShip_C_UnregisterCharacterEvents_Implementable_Params
{
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.ExecuteUbergraph_BP_Prompt_RepairShip
struct UBP_Prompt_RepairShip_C_ExecuteUbergraph_BP_Prompt_RepairShip_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
