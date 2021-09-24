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

// Class NetworkRegions.NetworkRegionServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNetworkRegionServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NetworkRegions.NetworkRegionService
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UNetworkRegionService : public UObject
{
public:
	unsigned char                                      UnknownData_9492[0x90];                                    // 0x0028(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APlayerController*>                   PlayersThatNeedToBeTicked;                                 // 0x00B8(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkRegions.NetworkRegionService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class NetworkRegions.RegionAssetCacheActor
// 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
class ARegionAssetCacheActor : public AActor
{
public:
	TArray<struct FRegionAssetsList>                   RegionData;                                                // 0x03D0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class UObject*>                             LoadedAssets;                                              // 0x03E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData_6THU[0x20];                                    // 0x03F0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkRegions.RegionAssetCacheActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
