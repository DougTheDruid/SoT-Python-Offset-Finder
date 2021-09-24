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

// Enum Cleanliness.EDirtinessType
enum class Cleanliness_EDirtinessType : uint8_t
{
	EDirtinessType__Soot           = 0,
	EDirtinessType__Dust           = 1,
	EDirtinessType__MAX            = 2,
	EDirtinessType__EDirtinessType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Cleanliness.CleanlinessInfo
// 0x000C
struct FCleanlinessInfo
{
	TEnumAsByte<Cleanliness_EDirtinessType>            DirtinessType;                                             // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2QXD[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Strength;                                                  // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              QuickClean;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Cleanliness.EventQuickCleanRequest
// 0x0001
struct FEventQuickCleanRequest
{
	unsigned char                                      UnknownData_QZBP[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
