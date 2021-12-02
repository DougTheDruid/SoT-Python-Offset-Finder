#pragma once

// Name: SoT, Version: 2.4.0


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

// Enum AthenaProjectiles.EProjectileFiredFrom
enum class AthenaProjectiles_EProjectileFiredFrom : uint8_t
{
	EProjectileFiredFrom__Cannon   = 0,
	EProjectileFiredFrom__Character = 1,
	EProjectileFiredFrom__DeepSeaCannon = 2,
	EProjectileFiredFrom__DeepSeaCharacter = 3,
	EProjectileFiredFrom__RowboatCannon = 4,
	EProjectileFiredFrom__EProjectileFiredFrom_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaProjectiles.ThrottledProjectileTickPool
// 0x0018
struct FThrottledProjectileTickPool
{
	int                                                MaxNumberToTickPerFrame;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GXGH[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              Projectiles;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaProjectiles.GlobalProjectileSettings
// 0x0010
struct FGlobalProjectileSettings
{
	TEnumAsByte<AthenaProjectiles_EProjectileFiredFrom> SettingsFor;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RTCY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProjectileDestroyDepth;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileOceanFloorDestroyDepth;                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectileMinimumFallDistance;                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
