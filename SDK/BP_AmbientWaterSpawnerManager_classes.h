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

// BlueprintGeneratedClass BP_AmbientWaterSpawnerManager.BP_AmbientWaterSpawnerManager_C
// 0x0000 (FullSize[0x0620] - InheritedSize[0x0620])
class ABP_AmbientWaterSpawnerManager_C : public AAmbientWaterSpawnerManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientWaterSpawnerManager.BP_AmbientWaterSpawnerManager_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
