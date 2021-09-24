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

// BlueprintGeneratedClass BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C
// 0x0010 (FullSize[0x04D0] - InheritedSize[0x04C0])
class ABP_LegendSkellyFort_SkullCloud_C : public ABP_RotatableSignalCloud_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        BP_Audio_LegendarySkullCloud_Play_Wwise_Event;             // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
