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

// Enum ServerMigration.EExecutionTarget
enum class ServerMigration_EExecutionTarget : uint8_t
{
	EExecutionTarget__OldServer    = 0,
	EExecutionTarget__NewServer    = 1,
	EExecutionTarget__Client       = 2,
	EExecutionTarget__EExecutionTarget_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ServerMigration.ServerSettings
// 0x0008
struct FServerSettings
{
	bool                                               FailToConnectToServer;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RefuseMigrationStart;                                      // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisconnectServerConnectionDuringMigration;                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TXS4[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RefuseIncomingClientConnections;                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ServerMigration.ClientSettings
// 0x0002
struct FClientSettings
{
	bool                                               FailToConnectToServer;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PauseMigrationBeforeOwnershipTransfer;                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ServerMigration.ServerMigrationCustomMigrationSerialisationStruct
// 0x0004
struct FServerMigrationCustomMigrationSerialisationStruct
{
	unsigned char                                      UnknownData_1VEQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ServerMigration.ServerMigrationSerialisationDetailsTestsUStruct
// 0x000C
struct FServerMigrationSerialisationDetailsTestsUStruct
{
	float                                              FloatWithNoMarkup;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint16_t                                           UInt16WithMigrationMarkup;                                 // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint16_t                                           UInt16WithNotReplicatedMarkup;                             // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	uint16_t                                           UInt16WithMigrationAndNotReplicatedMarkup;                 // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F1CW[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
