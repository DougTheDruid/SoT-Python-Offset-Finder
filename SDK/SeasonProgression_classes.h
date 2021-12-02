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

// Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UIsExcludedFromSeasonProgressionStatCondition : public UTargetedStatCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgression.PlayerSeasonProgressionComponent
// 0x00C0 (FullSize[0x0188] - InheritedSize[0x00C8])
class UPlayerSeasonProgressionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_QBQA[0xC0];                                    // 0x00C8(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgression.PlayerSeasonProgressionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
