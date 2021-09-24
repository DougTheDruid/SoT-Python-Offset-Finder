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

// BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class ABP_DistantLightProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                       // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<struct FPointLightProxy>                    LightList;                                                 // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C");
		return ptr;
	}



	void FindExistingLight(const struct FString& Name, bool* Result, int* Index);
	void Create_Lights();
	void UserConstructionScript();
	void Add_Light(const struct FVector& Location, float Size, class UMaterialInterface* Material, const struct FString& Name);
	void ExecuteUbergraph_BP_DistantLightProxy(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
