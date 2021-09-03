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

// Class OceanCrawlersAnimation.OceanCrawlerAnimationData
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UOceanCrawlerAnimationData : public UAnimationData
{
public:
	struct FOceanCrawlerAnimationDataStructure         OceanCrawlerAnimationDataStructure;                        // 0x0028(0x0090) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
// 0x02E0 (FullSize[0x0720] - InheritedSize[0x0440])
class UOceanCrawlerAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_K10U[0x18];                                    // 0x0440(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FOceanCrawlerAnimationDataStructure         LoadedAnimations;                                          // 0x0458(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FActorVelocityData                          MovementData;                                              // 0x04E8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrentDirection;                                          // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_94ZC[0x4];                                     // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAthenaAnimationWeapon                      AttackAnims;                                               // 0x0508(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	bool                                               UseDefaultAnimations;                                      // 0x05C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnimationsLoaded;                                          // 0x05C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SporeBreathActive;                                         // 0x05C2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JI19[0x1];                                     // 0x05C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PropAttachmentSocket;                                      // 0x05C4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_28AD[0x4];                                     // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         MontagePlayer;                                             // 0x05D0(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                 // 0x06A8(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData_0I6R[0x50];                                    // 0x06D0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
	void AfterRead();
	void BeforeDelete();

};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UOceanCrawlerAnimationServerData : public UAnimationServerData
{
public:
	unsigned char                                      UnknownData_UDNT[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AnimInstanceType;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              MaxSpawnAnimDuration;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpawnOnShipAnimDuration;                                // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpawnBoardingAnimDuration;                              // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NR0J[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
