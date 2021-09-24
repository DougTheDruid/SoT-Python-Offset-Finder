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

// BlueprintGeneratedClass BP_FlintlockPistol.BP_FlintlockPistol_C
// 0x003C (FullSize[0x0A68] - InheritedSize[0x0A2C])
class ABP_FlintlockPistol_C : public AProjectileWeapon
{
public:
	unsigned char                                      UnknownData_LFTI[0x4];                                     // 0x0A2C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TEnumAsByte<RareAudio_EEmitterRelationship>        sfx_relationship;                                          // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F4JR[0x7];                                     // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UObject*                                     ThirdPerson_VFX_AI;                                        // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 Flintlock3rdPersonSFX;                                     // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWwiseEvent*                                 FlintLockFirstPersonSFX;                                   // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlintlockPistol.BP_FlintlockPistol_C");
		return ptr;
	}



	void SetScopeEffectOn(bool IsOn);
	void determine_sfx_relationship(TEnumAsByte<RareAudio_EEmitterRelationship>* Relationship);
	void DoFireEffect();
	void UserConstructionScript();
	void OnWeaponFired();
	void RadialBlurOn();
	void RadialBlurOff();
	void ExecuteUbergraph_BP_FlintlockPistol(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
