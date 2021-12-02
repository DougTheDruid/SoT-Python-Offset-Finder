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

// Class ItemQuality.ItemQualityInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UItemQualityInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ItemQuality.ItemQualityInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ItemQuality.ItemQualityComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UItemQualityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_GGPQ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<ItemQuality_EEmissaryQualityLevel>     ItemQualityLevel;                                          // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ATZE[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPerComanyItemQualityEntry>          CompanySpecificItemQualityLevels;                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPerComanyComplexItemQualityEntry>   CompanySpecificComplexItemQualityLevels;                   // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPerComanyComplexItemQualityEntry>   CompanySpecificComplexItemQualityLevelsHandin;             // 0x00F8(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ItemQuality.ItemQualityComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
