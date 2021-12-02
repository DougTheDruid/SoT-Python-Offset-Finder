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

// Class CustomServerEntityEnumeration.EntityEnumerationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEntityEnumerationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomServerEntityEnumeration.EntityEnumerationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CustomServerEntityEnumeration.EntityEnumerationService
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UEntityEnumerationService : public UObject
{
public:
	unsigned char                                      UnknownData_1FZZ[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorld*                                      World;                                                     // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomServerEntityEnumeration.EntityEnumerationService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
