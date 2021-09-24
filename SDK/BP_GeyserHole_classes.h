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

// BlueprintGeneratedClass BP_GeyserHole.BP_GeyserHole_C
// 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
class ABP_GeyserHole_C : public AShovelHole
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CrackMesh;                                                 // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDecalComponent*                             CrackDecal;                                                // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SharedRoot;                                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UMaterialInstanceDynamic*                    MeshDynamicMaterial;                                       // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    DecalDynamicMaterial;                                      // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GeyserHole.BP_GeyserHole_C");
		return ptr;
	}



	void SetFadeOutParameters(float FadeTime);
	void SetFadeInParameters(float FadeTime);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStateChanged(TEnumAsByte<Athena_EHoleState> InState);
	void ExecuteUbergraph_BP_GeyserHole(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
