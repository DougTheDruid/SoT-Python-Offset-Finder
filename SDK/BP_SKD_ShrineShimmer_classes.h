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

// BlueprintGeneratedClass BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C
// 0x0049 (FullSize[0x04C1] - InheritedSize[0x0478])
class ABP_SKD_ShrineShimmer_C : public AShimmerActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        surface_bio_lum;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        volume_glow;                                               // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shimmer_water_00;                                          // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shimmer_air_01;                                            // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shimmer_air_00;                                            // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SharedRoot;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              FadeCurve_Opacity_D7ECDDBE4184BCE83B3BD58190CD98C7;        // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             FadeCurve__Direction_D7ECDDBE4184BCE83B3BD58190CD98C7;     // 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QN8R[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeCurve;                                                 // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShimmerIsVisible;                                          // 0x04C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SKD_ShrineShimmer.BP_SKD_ShrineShimmer_C");
		return ptr;
	}



	void OnRep_ShimmerIsVisible();
	void UserConstructionScript();
	void FadeCurve__FinishedFunc();
	void FadeCurve__UpdateFunc();
	void OnActivateShimmer();
	void OnDeactivateShimmer();
	void Shimmer_FadeIn();
	void Shimmer_FadeOut();
	void ExecuteUbergraph_BP_SKD_ShrineShimmer(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
