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

// BlueprintGeneratedClass BP_DynamicFogVolume_Undersea_Shrine_1B.BP_DynamicFogVolume_Undersea_Shrine_1B_C
// 0x0000 (FullSize[0x03F4] - InheritedSize[0x03F4])
class ABP_DynamicFogVolume_Undersea_Shrine_1B_C : public ABP_FogVolume_Undersea_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicFogVolume_Undersea_Shrine_1B.BP_DynamicFogVolume_Undersea_Shrine_1B_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
