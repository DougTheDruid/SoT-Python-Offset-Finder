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
// Classes
//---------------------------------------------------------------------------

// Class CustomWeather.CustomWeatherServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomWeatherServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomWeather.CustomWeatherServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CustomWeather.CustomWeatherService
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UCustomWeatherService : public UObject
{
public:
	unsigned char                                      UnknownData_NHWO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorld*                                      World;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomWeather.CustomWeatherService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
