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

// BlueprintGeneratedClass BP_PlayerBuriedTreasureMap.BP_PlayerBuriedTreasureMap_C
// 0x0010 (FullSize[0x0910] - InheritedSize[0x0900])
class ABP_PlayerBuriedTreasureMap_C : public ABP_TreasureMap_C
{
public:
	class UPickupablePlayerBuriedItemMapComponent*     PickupablePlayerBuriedItemMap;                             // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWieldableInteractableComponent*             WieldableInteractable;                                     // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerBuriedTreasureMap.BP_PlayerBuriedTreasureMap_C");
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
