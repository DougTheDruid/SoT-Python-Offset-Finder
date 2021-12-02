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

// Class Occlusion.OcclusionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOcclusionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Occlusion.OcclusionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Occlusion.OcclusionService
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UOcclusionService : public UObject
{
public:
	unsigned char                                      UnknownData_A27A[0x68];                                    // 0x0028(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Occlusion.OcclusionService");
		return ptr;
	}



	void OnPrimaryActorEndPlay(class AActor* InActor);
	void OnIgnoredActorEndPlay(class AActor* InActor);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
