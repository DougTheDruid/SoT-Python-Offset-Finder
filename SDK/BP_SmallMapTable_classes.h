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

// BlueprintGeneratedClass BP_SmallMapTable.BP_SmallMapTable_C
// 0x004D (FullSize[0x07BD] - InheritedSize[0x0770])
class ABP_SmallMapTable_C : public AMapTable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0770(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               NavBlocker;                                                // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ControlPoint_4;                                            // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ControlPoint_3;                                            // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ControlPoint_2;                                            // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ControlPoint_1;                                            // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTextureFeedbackComponent*                   TextureFeedback;                                           // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Cube;                                                      // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Map;                                                       // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              ActiveRange;                                               // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsActive;                                                  // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallMapTable.BP_SmallMapTable_C");
		return ptr;
	}



	void UpdateBlurEffect();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetEffectActiveWhenClose();
	void OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture);
	void OnMapMove(const struct FVector2D& CentreLocation, const struct FVector2D& ZoomLevel);
	void ExecuteUbergraph_BP_SmallMapTable(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
