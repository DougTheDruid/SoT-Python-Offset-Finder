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

// BlueprintGeneratedClass BP_AggressiveGhostShipPoolResource.BP_AggressiveGhostShipPoolResource_C
// 0x0008 (FullSize[0x0458] - InheritedSize[0x0450])
class ABP_AggressiveGhostShipPoolResource_C : public AAggressiveGhostShipPoolResource
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AggressiveGhostShipPoolResource.BP_AggressiveGhostShipPoolResource_C");
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
