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

// Enum ItemQuality.EItemQualityQueryReason
enum class ItemQuality_EItemQualityQueryReason : uint8_t
{
	EItemQualityQueryReason__DontCare = 0,
	EItemQualityQueryReason__ChangeOwnership = 1,
	EItemQualityQueryReason__DropOnShip = 2,
	EItemQualityQueryReason__HandIn = 3,
	EItemQualityQueryReason__EItemQualityQueryReason_MAX = 4,

};

// Enum ItemQuality.EEmissaryQualityLevel
enum class ItemQuality_EEmissaryQualityLevel : uint8_t
{
	EEmissaryQualityLevel__Invalid = 0,
	EEmissaryQualityLevel__Level1  = 1,
	EEmissaryQualityLevel__Level2  = 2,
	EEmissaryQualityLevel__Level3  = 3,
	EEmissaryQualityLevel__Level4  = 4,
	EEmissaryQualityLevel__Level5  = 5,
	EEmissaryQualityLevel__Level6  = 6,
	EEmissaryQualityLevel__Level7  = 7,
	EEmissaryQualityLevel__Level8  = 8,
	EEmissaryQualityLevel__MAX     = 9,
	EEmissaryQualityLevel__EEmissaryQualityLevel_MAX = 10,

};

// Enum ItemQuality.EHealthIndex
enum class ItemQuality_EHealthIndex : uint8_t
{
	EHealthIndex__DontCare         = 0,
	EHealthIndex__Level1           = 1,
	EHealthIndex__Level2           = 2,
	EHealthIndex__Level3           = 3,
	EHealthIndex__Level4           = 4,
	EHealthIndex__Level5           = 5,
	EHealthIndex__Level6           = 6,
	EHealthIndex__Level7           = 7,
	EHealthIndex__MAX              = 8,
	EHealthIndex__EHealthIndex_MAX = 9,

};

// Enum ItemQuality.EStatusType
enum class ItemQuality_EStatusType : uint8_t
{
	EStatusType__DontCare          = 0,
	EStatusType__Yes               = 1,
	EStatusType__No                = 2,
	EStatusType__EStatusType_MAX   = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ItemQuality.PerComanyItemQualityEntry
// 0x0010
struct FPerComanyItemQualityEntry
{
	class UClass*                                      Company;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<ItemQuality_EEmissaryQualityLevel>     Quality;                                                   // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WXKA[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ItemQuality.ComplexItemQualityEntry
// 0x0010
struct FComplexItemQualityEntry
{
	TEnumAsByte<ItemQuality_EStatusType>               OnTime;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemQuality_EHealthIndex>              HealthLevel;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemQuality_EStatusType>               IsComissioned;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemQuality_EStatusType>               IsStolen;                                                  // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemQuality_EItemQualityQueryReason>   QueryReason;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ItemQuality_EEmissaryQualityLevel>     QualityLevel;                                              // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ODAF[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Rarity;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ItemQuality.PerComanyComplexItemQualityEntry
// 0x0018
struct FPerComanyComplexItemQualityEntry
{
	class UClass*                                      Company;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FComplexItemQualityEntry>            QualityData;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
