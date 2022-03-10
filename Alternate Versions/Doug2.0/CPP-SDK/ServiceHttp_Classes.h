namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class ServiceHttpSettings: public Object
{
public:
	Struct FString                                     DiscoveryServiceUrl                                // 0x28(0x10)
	byte                                               ServerMetricsLevel                                 // 0x38(0x1)
	byte                                               ClientMetricsLevel                                 // 0x39(0x1)
};


// Size 0x50
class DevelopmentAuthenticationSettings: public Object
{
public:
	Struct FString                                     SandboxId                                          // 0x28(0x10)
	Struct FString                                     TokenServiceUrl                                    // 0x38(0x10)
	Struct FString                                     ClientId                                           // 0x48(0x10)
	Struct FString                                     ClientSecret                                       // 0x58(0x10)
	Struct FString                                     LivePrivileges                                     // 0x68(0x10)
};


}