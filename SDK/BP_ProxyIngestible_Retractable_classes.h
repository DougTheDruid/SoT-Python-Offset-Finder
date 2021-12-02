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

// BlueprintGeneratedClass BP_ProxyIngestible_Retractable.BP_ProxyIngestible_Retractable_C
// 0x0008 (FullSize[0x07B8] - InheritedSize[0x07B0])
class ABP_ProxyIngestible_Retractable_C : public ABP_ProxyIngestible_C
{
public:
	class URetractableItemProxyComponent*              RetractableItemProxy;                                      // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProxyIngestible_Retractable.BP_ProxyIngestible_Retractable_C");
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
