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
// Enums
//---------------------------------------------------------------------------

// Enum Repair.ERepairableState
enum class Repair_ERepairableState : uint8_t
{
	ERepairableState__NeverDamaged = 0,
	ERepairableState__Repairable   = 1,
	ERepairableState__Repairing    = 2,
	ERepairableState__Repaired     = 3,
	ERepairableState__ERepairableState_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Repair.EventRepairableObjectRepairEndedEvent
// 0x0028
struct FEventRepairableObjectRepairEndedEvent
{
	class UObject*                                     Repairable;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Position;                                                  // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5IPZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      RepairerActor;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RepairPercentage;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GSG9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Repair.EventRepairableObjectDestroyed
// 0x0001
struct FEventRepairableObjectDestroyed
{
	unsigned char                                      UnknownData_XKVP[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
