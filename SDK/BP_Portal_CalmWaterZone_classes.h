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

// BlueprintGeneratedClass BP_Portal_CalmWaterZone.BP_Portal_CalmWaterZone_C
// 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
class ABP_Portal_CalmWaterZone_C : public AAthenaCalmWaterZone
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Portal_CalmWaterZone.BP_Portal_CalmWaterZone_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
