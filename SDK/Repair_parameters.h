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

// Function Repair.RepairableInterface.HandleDestroy
struct URepairableInterface_HandleDestroy_Params
{
};

// Function Repair.RepairableInterface.GetRepairType
struct URepairableInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Repair.RepairableInterface.GetRepairTime
struct URepairableInterface_GetRepairTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Repair.RepairableInterface.GetRepairableState
struct URepairableInterface_GetRepairableState_Params
{
	TEnumAsByte<Repair_ERepairableState>               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Repair.RepairingInterface.GetRepairType
struct URepairingInterface_GetRepairType_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
