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

// BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C
// 0x0010 (FullSize[0x0550] - InheritedSize[0x0540])
class ABP_CapstanArm_C : public ACapstanArm
{
public:
	class UInteractableComponent*                      Interactable;                                              // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             LookAtPos;                                                 // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C");
		return ptr;
	}



	struct FVector GetLookAtPosBasisSpace();
	struct FVector GetFrontFacingVector();
	bool DoesRequireFacingFront();
	struct FDockableInfo GetDockableInfo();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	struct FVector GetLookAtPos();
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
