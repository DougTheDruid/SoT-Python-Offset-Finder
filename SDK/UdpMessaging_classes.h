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
// Classes
//---------------------------------------------------------------------------

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UUdpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D9VN[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UnicastEndpoint;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     MulticastEndpoint;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	unsigned char                                      MulticastTimeToLive;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BN9T[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             StaticEndpoints;                                           // 0x0058(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay)
	bool                                               EnableTunnel;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4YAY[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TunnelUnicastEndpoint;                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     TunnelMulticastEndpoint;                                   // 0x0080(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	TArray<struct FString>                             RemoteTunnelEndpoints;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
