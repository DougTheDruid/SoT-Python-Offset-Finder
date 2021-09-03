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

// Function Fire.FlammableComponent.OnRep_OnFire
struct UFlammableComponent_OnRep_OnFire_Params
{
};

// Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC
struct UFlammableComponent_Multicast_NotifyExtinguished_RPC_Params
{
	struct FVector                                     InExtinguishLocationWS;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Fire.FlammableComponent.IsOnFire
struct UFlammableComponent_IsOnFire_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Fire.FlammableComponent.IncrementFireSource
struct UFlammableComponent_IncrementFireSource_Params
{
};

// Function Fire.FlammableComponent.DecrementFireSource
struct UFlammableComponent_DecrementFireSource_Params
{
};

// Function Fire.FlammableInterface.IncrementFireSource
struct UFlammableInterface_IncrementFireSource_Params
{
};

// Function Fire.FlammableInterface.DecrementFireSource
struct UFlammableInterface_DecrementFireSource_Params
{
};

// Function Fire.FirePropagationInterface.SetAllCellsState
struct UFirePropagationInterface_SetAllCellsState_Params
{
	TEnumAsByte<Fire_EFireCellState>                   State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Fire.ShipFirePropagationComponent.OnRep_CellData
struct UShipFirePropagationComponent_OnRep_CellData_Params
{
};

// Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData
struct UShipFirePropagationComponent_OnRep_CellCharringData_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
