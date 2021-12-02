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

// Class StoryFramework.StoryServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStoryServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StoryFramework.StoryServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StoryFramework.StoryService
// 0x0090 (FullSize[0x0460] - InheritedSize[0x03D0])
class AStoryService : public AActor
{
public:
	unsigned char                                      UnknownData_48WO[0x20];                                    // 0x03D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStoryInfo>                          Stories;                                                   // 0x03F0(0x0010) (ZeroConstructor)
	TArray<struct FStoryInfo>                          ActiveStories;                                             // 0x0400(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData_5E5A[0x50];                                    // 0x0410(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StoryFramework.StoryService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
