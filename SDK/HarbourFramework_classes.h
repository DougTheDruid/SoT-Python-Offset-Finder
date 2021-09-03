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

// Class HarbourFramework.HarbourInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHarbourInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HarbourFramework.HarbourInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class HarbourFramework.HarbourComponent
// 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
class UHarbourComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_BWH9[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HarbourRadiusInCentimetres;                                // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MHRA[0x24];                                    // 0x02BC(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HarbourFramework.HarbourComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class HarbourFramework.HarbourServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHarbourServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HarbourFramework.HarbourServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class HarbourFramework.HarbourService
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UHarbourService : public UObject
{
public:
	unsigned char                                      UnknownData_8TEH[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HarbourFramework.HarbourService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
