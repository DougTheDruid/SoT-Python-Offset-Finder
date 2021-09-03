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

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Colour on All Materials
struct ABP_LargeShipNetProxy_C_Set_Colour_on_All_Materials_Params
{
	struct FName                                       Variable_Name;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Set Value on All Materials
struct ABP_LargeShipNetProxy_C_Set_Value_on_All_Materials_Params
{
	struct FName                                       Variable_Name;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Apply Bits to Lanterns
struct ABP_LargeShipNetProxy_C_Apply_Bits_to_Lanterns_Params
{
	int                                                Lantern_Bits;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.Create Dynamic Materials
struct ABP_LargeShipNetProxy_C_Create_Dynamic_Materials_Params
{
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.UserConstructionScript
struct ABP_LargeShipNetProxy_C_UserConstructionScript_Params
{
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ReceiveBeginPlay
struct ABP_LargeShipNetProxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnLanternStateChanged
struct ABP_LargeShipNetProxy_C_OnLanternStateChanged_Params
{
	int                                                LanternStateBits;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.OnEmissaryActiveStateChanged
struct ABP_LargeShipNetProxy_C_OnEmissaryActiveStateChanged_Params
{
	bool                                               InNewEmissaryActiveState;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShipNetProxy.BP_LargeShipNetProxy_C.ExecuteUbergraph_BP_LargeShipNetProxy
struct ABP_LargeShipNetProxy_C_ExecuteUbergraph_BP_LargeShipNetProxy_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
