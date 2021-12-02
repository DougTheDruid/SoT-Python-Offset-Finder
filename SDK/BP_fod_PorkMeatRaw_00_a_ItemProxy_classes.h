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

// BlueprintGeneratedClass BP_fod_PorkMeatRaw_00_a_ItemProxy.BP_fod_PorkMeatRaw_00_a_ItemProxy_C
// 0x0000 (FullSize[0x07B8] - InheritedSize[0x07B8])
class ABP_fod_PorkMeatRaw_00_a_ItemProxy_C : public ABP_ProxyIngestible_Retractable_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_fod_PorkMeatRaw_00_a_ItemProxy.BP_fod_PorkMeatRaw_00_a_ItemProxy_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
