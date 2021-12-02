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

// BlueprintGeneratedClass BP_GhostShips_Signal_Flameheart_NetProxy.BP_GhostShips_Signal_Flameheart_NetProxy_C
// 0x0048 (FullSize[0x0448] - InheritedSize[0x0400])
class ABP_GhostShips_Signal_Flameheart_NetProxy_C : public ANetProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotateMeshToLocalPlayerComponent*           RotateMeshToLocalPlayer;                                   // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        FarCloudDistortion;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shroud;                                                    // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              FadeIn_GhostBloom_8A3F310E4DA80126C74D32B4D69B71D3;        // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeIn_GhostOpacity_8A3F310E4DA80126C74D32B4D69B71D3;      // 0x0424(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             FadeIn__Direction_8A3F310E4DA80126C74D32B4D69B71D3;        // 0x0428(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M4Z5[0x7];                                     // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeIn;                                                    // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GhostShips_Signal_Flameheart_NetProxy.BP_GhostShips_Signal_Flameheart_NetProxy_C");
		return ptr;
	}



	void CollectMaterials();
	void UserConstructionScript();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void ReceiveBeginPlay();
	void FlameheartAppear();
	void FlameheartDisappear();
	void BndEvt__Default__BP_GhostShips_Signal_Flameheart_NetProxy_C_K2Node_InstancedActorBoundEvent_3_NetProxyVisibilityChanged__DelegateSignature(bool IsVisible);
	void ExecuteUbergraph_BP_GhostShips_Signal_Flameheart_NetProxy(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
