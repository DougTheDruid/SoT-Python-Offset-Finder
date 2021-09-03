#pragma once

// Name: SoT, Version: 2.2.1.1


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

// BlueprintGeneratedClass BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C
// 0x0008 (FullSize[0x09C0] - InheritedSize[0x09B8])
class ABP_Rowboat_WithFrontHarpoon_C : public ABP_Rowboat_C
{
public:
	class UChildActorComponent*                        Harpoon;                                                   // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C");
		return ptr;
	}



	unsigned char GetPxActorCapacityForPhysXAggregate();
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
