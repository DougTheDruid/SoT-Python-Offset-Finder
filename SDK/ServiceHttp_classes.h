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

// Class ServiceHttp.ServiceHttpSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UServiceHttpSettings : public UObject
{
public:
	struct FString                                     DiscoveryServiceUrl;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	TEnumAsByte<ServiceHttp_EServiceHttpMetricsLevel>  ServerMetricsLevel;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ServiceHttp_EServiceHttpMetricsLevel>  ClientMetricsLevel;                                        // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2GTS[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ServiceHttp.ServiceHttpSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServiceHttp.DevelopmentAuthenticationSettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UDevelopmentAuthenticationSettings : public UObject
{
public:
	struct FString                                     SandboxId;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     TokenServiceUrl;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     ClientId;                                                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     ClientSecret;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     LivePrivileges;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ServiceHttp.DevelopmentAuthenticationSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
