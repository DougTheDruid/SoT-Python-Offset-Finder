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

// Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAthenaProjectilesThrottledTickCollectionAsset : public UDataAsset
{
public:
	TArray<struct FThrottledProjectileTickPool>        ProjectileTickPools;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaProjectiles.ProjectileLauncherSpecificSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UProjectileLauncherSpecificSettings : public UDeveloperSettings
{
public:
	TArray<struct FGlobalProjectileSettings>           GlobalSettings;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaProjectiles.ProjectileLauncherSpecificSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
