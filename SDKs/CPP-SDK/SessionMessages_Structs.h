// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1
struct SessionServiceLogUnsubscribe
{
public:
	char                                                         pad0x1_ZAM3O[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct SessionServiceLogSubscribe
{
public:
	char                                                         pad0x1_JRM6H[0x1];                                 // 0x0(0x1)
};


// Size 0x38
struct SessionServiceLog
{
public:
	struct FName                                                 Category;                                          // 0x0(0x8)
	struct FString                                               Data;                                              // 0x8(0x10)
	struct Guid                                                  InstanceId;                                        // 0x18(0x10)
	double                                                       TimeSeconds;                                       // 0x28(0x8)
	byte                                                         Verbosity;                                         // 0x30(0x1)
	char                                                         pad0x7_L20ET[0x7];                                 // 0x31(0x7)
};


// Size 0x90
struct SessionServicePong
{
public:
	struct FString                                               BuildDate;                                         // 0x0(0x10)
	struct FString                                               DeviceName;                                        // 0x10(0x10)
	struct Guid                                                  InstanceId;                                        // 0x20(0x10)
	struct FString                                               InstanceName;                                      // 0x30(0x10)
	bool                                                         IsConsoleBuild;                                    // 0x40(0x1)
	char                                                         pad0x7_LO0N5[0x7];                                 // 0x41(0x7)
	struct FString                                               PlatformName;                                      // 0x48(0x10)
	struct Guid                                                  SessionId;                                         // 0x58(0x10)
	struct FString                                               SessionName;                                       // 0x68(0x10)
	struct FString                                               SessionOwner;                                      // 0x78(0x10)
	bool                                                         Standalone;                                        // 0x88(0x1)
	char                                                         pad0x7_1GOZP[0x7];                                 // 0x89(0x7)
};


// Size 0x1
struct SessionServicePing
{
public:
	char                                                         pad0x1_K62AB[0x1];                                 // 0x0(0x1)
};


}