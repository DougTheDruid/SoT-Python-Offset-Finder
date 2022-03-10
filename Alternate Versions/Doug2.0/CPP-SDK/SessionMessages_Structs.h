namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1
class SessionServiceLogUnsubscribe: public None
{
public:
};


// Size 0x1
class SessionServiceLogSubscribe: public None
{
public:
};


// Size 0x38
class SessionServiceLog: public None
{
public:
	struct FName                                       Category                                           // 0x0(0x8)
	Struct FString                                     Data                                               // 0x8(0x10)
	Struct Guid                                        InstanceId                                         // 0x18(0x10)
	double                                             TimeSeconds                                        // 0x28(0x8)
	byte                                               Verbosity                                          // 0x30(0x1)
};


// Size 0x90
class SessionServicePong: public None
{
public:
	Struct FString                                     BuildDate                                          // 0x0(0x10)
	Struct FString                                     DeviceName                                         // 0x10(0x10)
	Struct Guid                                        InstanceId                                         // 0x20(0x10)
	Struct FString                                     InstanceName                                       // 0x30(0x10)
	bool                                               IsConsoleBuild                                     // 0x40(0x1)
	Struct FString                                     PlatformName                                       // 0x48(0x10)
	Struct Guid                                        SessionId                                          // 0x58(0x10)
	Struct FString                                     SessionName                                        // 0x68(0x10)
	Struct FString                                     SessionOwner                                       // 0x78(0x10)
	bool                                               Standalone                                         // 0x88(0x1)
};


// Size 0x1
class SessionServicePing: public None
{
public:
};


}