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

// ScriptStruct AthenaServerMigration.IncomingMigrationPreventionZone
// 0x000C
struct FIncomingMigrationPreventionZone
{
	struct FVector2D                                   Location;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupCompleteEvent
// 0x0001
struct FServerMigrationSetupCompleteEvent
{
	unsigned char                                      UnknownData_KOMM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupRequestEvent
// 0x0001
struct FServerMigrationSetupRequestEvent
{
	unsigned char                                      UnknownData_51SL[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationReadyToTransferActors
// 0x0090
struct FServerMigrationReadyToTransferActors
{
	unsigned char                                      UnknownData_VBPB[0x90];                                    // 0x0000(0x0090) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.PrepareForWorldSwitchRpc
// 0x0000 (0x0010 - 0x0010)
struct FPrepareForWorldSwitchRpc : public FBoxedRpc
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationAboutToStartEvent
// 0x0020
struct FServerMigrationAboutToStartEvent
{
	unsigned char                                      UnknownData_PYK8[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationConfigChangedEvent
// 0x0008
struct FServerMigrationConfigChangedEvent
{
	unsigned char                                      UnknownData_F0K2[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationAbortEvent
// 0x0010
struct FServerMigrationAbortEvent
{
	unsigned char                                      UnknownData_RT10[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationCompleteEvent
// 0x0001
struct FServerMigrationCompleteEvent
{
	unsigned char                                      UnknownData_GPPL[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationHeartbeatEvent
// 0x0078
struct FServerMigrationHeartbeatEvent
{
	struct FGuid                                       ServerId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ServerLocation;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameEndpoint;                                              // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MigrationEndpoint;                                         // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FServerMigrationCrewMigrationStatus> CrewsMigrationStatus;                                      // 0x0040(0x0010) (ZeroConstructor)
	int                                                SequenceId;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GEYR[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimespan                                   ServerUptime;                                              // 0x0058(0x0008) (ZeroConstructor)
	struct FTimespan                                   ExpectedServerLifetime;                                    // 0x0060(0x0008) (ZeroConstructor)
	struct FTimespan                                   MessageInterval;                                           // 0x0068(0x0008) (ZeroConstructor)
	bool                                               ContestMatchmaking;                                        // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RBPC[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationRefusedEvent
// 0x0020
struct FServerMigrationRefusedEvent
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       CrewId;                                                    // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationInstanceEventBase
// 0x0020
struct FServerMigrationInstanceEventBase
{
	struct FGuid                                       ServerId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       MigrationId;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationAbortedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationAbortedEvent : public FServerMigrationInstanceEventBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationCompletedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationCompletedEvent : public FServerMigrationInstanceEventBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.OutgoingServerMigrationStartedEvent
// 0x0000 (0x0020 - 0x0020)
struct FOutgoingServerMigrationStartedEvent : public FServerMigrationInstanceEventBase
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetServerConfigMessage
// 0x0008
struct FServerMigrationSetServerConfigMessage
{
	struct FTimespan                                   ExpectedServerLifetime;                                    // 0x0000(0x0008) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationRequestEvent
// 0x0040
struct FServerMigrationRequestEvent
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     DestinationAddress;                                        // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SubMode;                                                   // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
