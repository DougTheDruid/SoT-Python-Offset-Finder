#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// BlueprintGeneratedClass BP_AIProjectile_SirenTrident.BP_AIProjectile_SirenTrident_C
// 0x0018 (FullSize[0x0810] - InheritedSize[0x07F8])
class ABP_AIProjectile_SirenTrident_C : public ASirenTridentProjectile
{
public:
	class USphereCollisionExtentAdjustOverTimeComponent* SphereCollisionExtentAdjustOverTime;                       // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Sphere;                                                    // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Collision;                                                 // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AIProjectile_SirenTrident.BP_AIProjectile_SirenTrident_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
