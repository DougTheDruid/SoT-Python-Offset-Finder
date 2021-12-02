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

// Class WorldLocationPopUpFramework.WorldLocationPopUpComponent
// 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
class UWorldLocationPopUpComponent : public USceneComponent
{
public:
	class UWorldLocationPopUpDataAsset*                PopUpData;                                                 // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShapeComponent*                             LocationOverlapVolume;                                     // 0x02B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocationCooldown;                                          // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AlwaysShowPopUp;                                           // 0x02C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HXZL[0x6B];                                    // 0x02C5(0x006B) MISSED OFFSET (PADDING)


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
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UWorldLocationPopUpDataAsset : public UDataAsset
{
public:
	struct FName                                       Id;                                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       BannerIcon;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       DisplayText;                                               // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_3ZJ0[0x20];                                    // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UPopUpAudioDesc*                             AudioOverride;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WorldLocationPopUpFramework.WorldLocationPopUpDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WorldLocationPopUpFramework.WorldLocationVisitorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWorldLocationVisitorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WorldLocationPopUpFramework.WorldLocationVisitorInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class WorldLocationPopUpFramework.WorldLocationVisitorComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UWorldLocationVisitorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_5TZA[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevisitCooldown;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IUWP[0x34];                                    // 0x00D4(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class WorldLocationPopUpFramework.WorldLocationVisitorComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
