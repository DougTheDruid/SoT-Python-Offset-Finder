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

// Class ContestRowboats.ContestRowboatsServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UContestRowboatsServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ContestRowboats.ContestRowboatsServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ContestRowboats.ContestRowboatsService
// 0x0060 (FullSize[0x0430] - InheritedSize[0x03D0])
class AContestRowboatsService : public AActor
{
public:
	unsigned char                                      UnknownData_WYBV[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RowboatClass;                                              // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5DRR[0x50];                                    // 0x03E0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ContestRowboats.ContestRowboatsService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
