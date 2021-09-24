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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomDeath.SetShouldUseRevivalFlowData
// 0x0008
struct FSetShouldUseRevivalFlowData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldUseRevivalFlow;                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S3T2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.SetShouldSkipFerryOfTheDamnedData
// 0x0008
struct FSetShouldSkipFerryOfTheDamnedData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldSkipFerryOfTheDamned;                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ORVA[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.GameModeDeathPenaltyRespawnTimerData
// 0x0004
struct FGameModeDeathPenaltyRespawnTimerData
{
	float                                              SpawnTimer;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.SetCustomPlayerStartData
// 0x0008
struct FSetCustomPlayerStartData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerStartActorNetID;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.CustomDeathConfiguration
// 0x0018
struct FCustomDeathConfiguration
{
	unsigned char                                      UnknownData_DFOS[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.ResetCustomConfigForPlayerData
// 0x0004
struct FResetCustomConfigForPlayerData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.KillPlayerData
// 0x0004
struct FKillPlayerData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.ForcePlayerRespawnData
// 0x0008
struct FForcePlayerRespawnData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRespawnAsGhost;                                           // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_31P2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.DestroyCustomPlayerStartData
// 0x0018
struct FDestroyCustomPlayerStartData
{
	int                                                PlayerStartActorNetID;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8L7R[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Tag;                                                       // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.KillCrewData
// 0x0010
struct FKillCrewData
{
	struct FGuid                                       CrewNetGUID;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomDeath.CustomPlayerStartConfigData
// 0x0030
struct FCustomPlayerStartConfigData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CJDP[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0010(0x0010) (IsPlainOldData, NoDestructor)
	TArray<struct FString>                             Tags;                                                      // 0x0020(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
