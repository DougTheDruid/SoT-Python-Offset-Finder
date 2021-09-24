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

// BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C
// 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
class ABP_ShovelHole_C : public AShovelHole
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             DirtDecal;                                                 // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        DirtPile;                                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UMaterialInstanceDynamic*                    MeshDynamicMaterial;                                       // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    DecalDynamicMaterial;                                      // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C");
		return ptr;
	}



	void SetFadeInParameters(float FadeTime);
	void SetFadeOutParameters(float FadeTime);
	void UserConstructionScript();
	void OnStateChanged(TEnumAsByte<Athena_EHoleState> InState);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ShovelHole(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
