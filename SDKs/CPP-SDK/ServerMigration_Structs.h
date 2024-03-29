#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x2
struct ClientSettings
{
public:
	bool                                                         FailToConnectToServer;                             // 0x0(0x1)
	bool                                                         PauseMigrationBeforeOwnershipTransfer;             // 0x1(0x1)
};


// Size 0xc
struct ServerMigrationSerialisationDetailsTestsUStruct
{
public:
	float                                                        FloatWithNoMarkup;                                 // 0x0(0x4)
	char                                                         pad0x8_PHG9E[0x8];                                 // 0x4(0x8)
};


// Size 0x8
struct ServerSettings
{
public:
	bool                                                         FailToConnectToServer;                             // 0x0(0x1)
	bool                                                         RefuseMigrationStart;                              // 0x1(0x1)
	bool                                                         DisconnectServerConnectionDuringMigration;         // 0x2(0x1)
	char                                                         pad0x1_2OQSO[0x1];                                 // 0x3(0x1)
	int                                                          RefuseIncomingClientConnections;                   // 0x4(0x4)
};


// Size 0x4
struct ServerMigrationCustomMigrationSerialisationStruct
{
public:
	char                                                         pad0x4_WQ86W[0x4];                                 // 0x0(0x4)
};


