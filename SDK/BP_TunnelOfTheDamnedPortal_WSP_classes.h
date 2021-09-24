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

// BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_WSP.BP_TunnelOfTheDamnedPortal_WSP_C
// 0x0008 (FullSize[0x0658] - InheritedSize[0x0650])
class ABP_TunnelOfTheDamnedPortal_WSP_C : public ABP_TunnelOfTheDamnedPortal_Ship_C
{
public:
	class UChildActorComponent*                        PortalEffects;                                             // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_WSP.BP_TunnelOfTheDamnedPortal_WSP_C");
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
