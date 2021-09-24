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

// Class WorldLocationPopUpFramework.WorldLocationPopUpComponent
// 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
class UWorldLocationPopUpComponent : public USceneComponent
{
public:
	class UWorldLocationPopUpDataAsset*                PopUpData;                                                 // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShapeComponent*                             LocationOverlapVolume;                                     // 0x02B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PopUpCooldown;                                             // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IG66[0x6C];                                    // 0x02C4(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WorldLocationPopUpFramework.WorldLocationPopUpComponent");
		return ptr;
	}



	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
	void AfterRead();
	void BeforeDelete();

};

// Class WorldLocationPopUpFramework.WorldLocationPopUpDataAsset
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UWorldLocationPopUpDataAsset : public UDataAsset
{
public:
	struct FName                                       Id;                                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       Image;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FText                                       DisplayText;                                               // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_94CZ[0x20];                                    // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     AudioSfxEventName;                                         // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              DisplayDuration;                                           // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D8VW[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WorldLocationPopUpFramework.WorldLocationPopUpDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
