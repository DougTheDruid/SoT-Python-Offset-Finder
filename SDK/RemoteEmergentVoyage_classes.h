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

// Class RemoteEmergentVoyage.RemoteEmergentVoyageInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URemoteEmergentVoyageInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RemoteEmergentVoyage.RemoteEmergentVoyageInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RemoteEmergentVoyage.RemoteEmergentVoyageService
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URemoteEmergentVoyageService : public UObject
{
public:
	unsigned char                                      UnknownData_7OIT[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RemoteEmergentVoyage.RemoteEmergentVoyageService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
