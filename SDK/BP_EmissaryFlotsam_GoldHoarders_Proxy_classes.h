#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// BlueprintGeneratedClass BP_EmissaryFlotsam_GoldHoarders_Proxy.BP_EmissaryFlotsam_GoldHoarders_Proxy_C
// 0x0000 (FullSize[0x07B0] - InheritedSize[0x07B0])
class ABP_EmissaryFlotsam_GoldHoarders_Proxy_C : public ABP_EmissaryFlotsam_Proxy_Base_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmissaryFlotsam_GoldHoarders_Proxy.BP_EmissaryFlotsam_GoldHoarders_Proxy_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
