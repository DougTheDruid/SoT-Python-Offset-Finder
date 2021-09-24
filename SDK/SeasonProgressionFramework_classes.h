#pragma once

// Name: SoT, Version: 2.3.0


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

// Class SeasonProgressionFramework.SeasonProgressionExclusionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USeasonProgressionExclusionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionFramework.SeasonProgressionExclusionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionFramework.SeasonProgressionExclusionComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class USeasonProgressionExclusionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9U2R[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               ShouldBeExcludedFromSeasonProgessionValue;                 // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UXJQ[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionFramework.SeasonProgressionExclusionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
