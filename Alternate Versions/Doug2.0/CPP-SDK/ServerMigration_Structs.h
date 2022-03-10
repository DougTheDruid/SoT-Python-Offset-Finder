namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x2
class ClientSettings: public None
{
public:
	bool                                               FailToConnectToServer                              // 0x0(0x1)
	bool                                               PauseMigrationBeforeOwnershipTransfer              // 0x1(0x1)
};


// Size 0x8
class ServerSettings: public None
{
public:
	bool                                               FailToConnectToServer                              // 0x0(0x1)
	bool                                               RefuseMigrationStart                               // 0x1(0x1)
	bool                                               DisconnectServerConnectionDuringMigration          // 0x2(0x1)
	int                                                RefuseIncomingClientConnections                    // 0x4(0x4)
};


// Size 0x4
class ServerMigrationCustomMigrationSerialisationStruct: public None
{
public:
};


// Size 0xc
class ServerMigrationSerialisationDetailsTestsUStruct: public None
{
public:
	float                                              FloatWithNoMarkup                                  // 0x0(0x4)
};


}