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

// BlueprintGeneratedClass BP_CylinderLightingZone_Treasury_1C.BP_CylinderLightingZone_Treasury_1C_C
// 0x0000 (FullSize[0x0415] - InheritedSize[0x0415])
class ABP_CylinderLightingZone_Treasury_1C_C : public ABP_CylinderLightingZone_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CylinderLightingZone_Treasury_1C.BP_CylinderLightingZone_Treasury_1C_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
