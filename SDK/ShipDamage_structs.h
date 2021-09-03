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
// Enums
//---------------------------------------------------------------------------

// Enum ShipDamage.EHullDamageDeck
enum class ShipDamage_EHullDamageDeck : uint8_t
{
	EHullDamageDeck__Bottom        = 0,
	EHullDamageDeck__Mid           = 1,
	EHullDamageDeck__EHullDamageDeck_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShipDamage.DistanceAndLevelOfDamage
// 0x0008
struct FDistanceAndLevelOfDamage
{
	float                                              DistanceLimit;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelOfDamage;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShipDamage.ShipPartLevelsOfDamage
// 0x0030
struct FShipPartLevelsOfDamage
{
	TAssetPtr<class UClass>                            ActorClass;                                                // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K9Z7[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FDistanceAndLevelOfDamage>           DamagePerDistance;                                         // 0x0020(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShipDamage.ShipDamageParams
// 0x0010
struct FShipDamageParams
{
	TArray<struct FShipPartLevelsOfDamage>             DamageParams;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShipDamage.HullDamageHit
// 0x0024
struct FHullDamageHit
{
	struct FVector                                     HitPosition;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitNormal;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HitStrength;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HitLevel;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasDecal;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LZM9[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShipDamage.EventShipDamageApplied
// 0x0070
struct FEventShipDamageApplied
{
	class AActor*                                      Ship;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DamagedShipPartIdentifier;                                 // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewDamageLevel;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8AGX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FImpactDamageEvent                          ImpactDamageEvent;                                         // 0x0018(0x0058) (BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShipDamage.EventShipDamaged
// 0x0060
struct FEventShipDamaged
{
	class AActor*                                      Ship;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImpactDamageEvent                          ImpactDamageEvent;                                         // 0x0008(0x0058) (BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShipDamage.DamageZoneDamageLevelChanged
// 0x0010
struct FDamageZoneDamageLevelChanged
{
	class AActor*                                      DamageZone;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageLevel;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UNC3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShipDamage.AppliedDamageToShipEvent
// 0x0010
struct FAppliedDamageToShipEvent
{
	class UClass*                                      ShipType;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                      Ship;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
