// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x2
struct ClientSettings
{
public:
	bool                                                         FailToConnectToServer;                             // 0x0(0x1)
	bool                                                         PauseMigrationBeforeOwnershipTransfer;             // 0x1(0x1)
};


// Size 0x8
struct ServerSettings
{
public:
	bool                                                         FailToConnectToServer;                             // 0x0(0x1)
	bool                                                         RefuseMigrationStart;                              // 0x1(0x1)
	bool                                                         DisconnectServerConnectionDuringMigration;         // 0x2(0x1)
	char                                                         pad0x1_BOUW1[0x1];                                 // 0x3(0x1)
	int                                                          RefuseIncomingClientConnections;                   // 0x4(0x4)
};


// Size 0x4
struct ServerMigrationCustomMigrationSerialisationStruct
{
public:
};


// Size 0xc
struct ServerMigrationSerialisationDetailsTestsUStruct
{
public:
	float                                                        FloatWithNoMarkup;                                 // 0x0(0x4)
};


}