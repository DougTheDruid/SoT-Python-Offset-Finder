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

// Class RareEngine.RareGameEngine
// 0x0058 (FullSize[0x0A40] - InheritedSize[0x09E8])
class URareGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData_GREX[0x58];                                    // 0x09E8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.RareGameEngine");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareEngine.AssetReferencer
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAssetReferencer : public UDataAsset
{
public:
	TArray<TAssetPtr<class UObject>>                   AssetsToReference;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.AssetReferencer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareEngine.AudioHardwareDeviceService
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAudioHardwareDeviceService : public UObject
{
public:
	unsigned char                                      UnknownData_XNI9[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.AudioHardwareDeviceService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHitchDiagnosisBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetHitchThreshold(int InThreshold);
	struct FString STATIC_GetMaxHitchNameThisFrame();
	int STATIC_GetMaxHitchLengthThisFrameMs();
	void STATIC_DumpThisFramesHitchesToLog();
	bool STATIC_DidHitchOccurThisFrame();
	void AfterRead();
	void BeforeDelete();

};

// Class RareEngine.MemoryUsageVisualiserSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMemoryUsageVisualiserSettings : public UObject
{
public:
	TArray<struct FMemoryVisualiserCategory>           VisualiserCategories;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.MemoryUsageVisualiserSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareEngine.RareHUD
// 0x0000 (FullSize[0x04C8] - InheritedSize[0x04C8])
class ARareHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.RareHUD");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareEngine.StallDetector
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UStallDetector : public UObject
{
public:
	unsigned char                                      UnknownData_7M36[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Callback;                                                  // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_C2DU[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.StallDetector");
		return ptr;
	}



	void Deactivate();
	class UStallDetector* STATIC_CreateStallDetector(float Delay, bool CreateActive);
	void Activate();
	void AfterRead();
	void BeforeDelete();

};

// Class RareEngine.StaticMeshActorBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStaticMeshActorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareEngine.StaticMeshActorBlueprintLibrary");
		return ptr;
	}



	void STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshComponentList>* OutComponentLists, class ULevel* RestrictToLevel);
	void STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshActorList>* OutActorLists, class ULevel* RestrictToLevel);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
