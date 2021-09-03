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

// BlueprintGeneratedClass BP_Rowboat_WithFrontCannon.BP_Rowboat_WithFrontCannon_C
// 0x0010 (FullSize[0x09C8] - InheritedSize[0x09B8])
class ABP_Rowboat_WithFrontCannon_C : public ABP_Rowboat_C
{
public:
	class UCannonRecoilComponent*                      CannonRecoil;                                              // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        Cannon;                                                    // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rowboat_WithFrontCannon.BP_Rowboat_WithFrontCannon_C");
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
