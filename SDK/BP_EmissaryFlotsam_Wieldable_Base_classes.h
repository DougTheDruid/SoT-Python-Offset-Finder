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

// BlueprintGeneratedClass BP_EmissaryFlotsam_Wieldable_Base.BP_EmissaryFlotsam_Wieldable_Base_C
// 0x0020 (FullSize[0x0790] - InheritedSize[0x0770])
class ABP_EmissaryFlotsam_Wieldable_Base_C : public AStaticSimpleBootyWieldableItem
{
public:
	class UBoxComponent*                               HitVolume;                                                 // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWieldableInteractableComponent*             WieldableInteractable;                                     // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPickupableComponent*                        Pickupable;                                                // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UUsableWieldableComponent*                   UsableWieldable;                                           // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmissaryFlotsam_Wieldable_Base.BP_EmissaryFlotsam_Wieldable_Base_C");
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
