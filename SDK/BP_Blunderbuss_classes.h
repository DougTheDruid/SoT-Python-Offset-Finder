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

// BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C
// 0x0034 (FullSize[0x0A60] - InheritedSize[0x0A2C])
class ABP_Blunderbuss_C : public AProjectileWeapon
{
public:
	unsigned char                                      UnknownData_MSJ1[0x4];                                     // 0x0A2C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TEnumAsByte<RareAudio_EEmitterRelationship>        sfx_relationship;                                          // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_343K[0x7];                                     // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UObject*                                     FiringVFX3rdPerson;                                        // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 Blunderbuss_Firing_sfx_3rd_person;                         // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C");
		return ptr;
	}



	void SetScopeEffectOn(bool IsOn);
	void determine_sfx_relationship(TEnumAsByte<RareAudio_EEmitterRelationship>* Relationship);
	void DoFireEffect();
	void UserConstructionScript();
	void OnWeaponFired();
	void RadialBlurOn();
	void RadialBlurOff();
	void ExecuteUbergraph_BP_Blunderbuss(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
