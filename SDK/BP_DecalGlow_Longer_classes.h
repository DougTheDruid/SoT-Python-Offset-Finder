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

// BlueprintGeneratedClass BP_DecalGlow_Longer.BP_DecalGlow_Longer_C
// 0x003D (FullSize[0x0415] - InheritedSize[0x03D8])
class ABP_DecalGlow_Longer_C : public ALandmarkReactionActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            DecalMaterials;                                            // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Reveal_Duration;                                           // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WPPB[0x4];                                     // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_StepsTrigger_C*                          StepsTriggerActor;                                         // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              StartTime;                                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CollectedDecals;                                           // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DecalGlow_Longer.BP_DecalGlow_Longer_C");
		return ptr;
	}



	void StartGlowEffect();
	bool StartReaction();
	bool StopReaction();
	void CollectDecalMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DecalGlow_Longer(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
