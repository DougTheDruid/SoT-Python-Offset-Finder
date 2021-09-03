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

// Enum TreasuryFramework.ETreasuryVaultDoorState
enum class TreasuryFramework_ETreasuryVaultDoorState : uint8_t
{
	ETreasuryVaultDoorState__Opening = 0,
	ETreasuryVaultDoorState__Open  = 1,
	ETreasuryVaultDoorState__Closing = 2,
	ETreasuryVaultDoorState__Closed = 3,
	ETreasuryVaultDoorState__ETreasuryVaultDoorState_MAX = 4,

};

// Enum TreasuryFramework.ETreasuryEncounterType
enum class TreasuryFramework_ETreasuryEncounterType : uint8_t
{
	ETreasuryEncounterType__Sirens = 0,
	ETreasuryEncounterType__OceanCrawlers = 1,
	ETreasuryEncounterType__ETreasuryEncounterType_MAX = 2,

};

// Enum TreasuryFramework.ETreasuryEncounterResult
enum class TreasuryFramework_ETreasuryEncounterResult : uint8_t
{
	ETreasuryEncounterResult__SpawnNextWave = 0,
	ETreasuryEncounterResult__TreasuryComplete = 1,
	ETreasuryEncounterResult__ETreasuryEncounterResult_MAX = 2,

};

// Enum TreasuryFramework.ETreasuryWaveResult
enum class TreasuryFramework_ETreasuryWaveResult : uint8_t
{
	ETreasuryWaveResult__Continue  = 0,
	ETreasuryWaveResult__ChangeType = 1,
	ETreasuryWaveResult__ETreasuryWaveResult_MAX = 2,

};

// Enum TreasuryFramework.ETreasuryState
enum class TreasuryFramework_ETreasuryState : uint8_t
{
	ETreasuryState__Inactive       = 0,
	ETreasuryState__Waiting        = 1,
	ETreasuryState__Active         = 2,
	ETreasuryState__Completed      = 3,
	ETreasuryState__Failed         = 4,
	ETreasuryState__Aftermath      = 5,
	ETreasuryState__ETreasuryState_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TreasuryFramework.TreasuryWaveEncounter
// 0x0030
struct FTreasuryWaveEncounter
{
	TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JXV2[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASpawnAIWaveMechanismAction*                 SpawnerMechanism;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      MechanismTrigger;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTreasuryWaveDataAsset*                      Waves;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTreasuryWaveDataAsset*                      FinalWaves;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NeedsRoomFlooded;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8IKZ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct TreasuryFramework.TreasuryWaveTracker
// 0x0018
struct FTreasuryWaveTracker
{
	unsigned char                                      UnknownData_3V89[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
