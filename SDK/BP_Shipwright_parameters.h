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

// Function BP_Shipwright.BP_Shipwright_C.UserConstructionScript
struct ABP_Shipwright_C_UserConstructionScript_Params
{
};

// Function BP_Shipwright.BP_Shipwright_C.ReceiveBeginPlay
struct ABP_Shipwright_C_ReceiveBeginPlay_Params
{
};

// Function BP_Shipwright.BP_Shipwright_C.ReceiveEndPlay
struct ABP_Shipwright_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Shipwright.BP_Shipwright_C.ExecuteUbergraph_BP_Shipwright
struct ABP_Shipwright_C_ExecuteUbergraph_BP_Shipwright_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
