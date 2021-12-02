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

// BlueprintGeneratedClass BP_AthenaPlayerCameraManager.BP_AthenaPlayerCameraManager_C
// 0x0000 (FullSize[0x1CA0] - InheritedSize[0x1CA0])
class ABP_AthenaPlayerCameraManager_C : public AAthenaPlayerCameraManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AthenaPlayerCameraManager.BP_AthenaPlayerCameraManager_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
