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

// BlueprintGeneratedClass BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_MathAndTrigAnimation_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C");
		return ptr;
	}



	void STATIC_DisplayAllCharacterSockets(class AAthenaCharacter* Athena_Character, float Size, class UObject* __WorldContext);
	void STATIC_DecrementFloat(float* Float, float DecrementValue, class UObject* __WorldContext);
	void STATIC_Increment_Float(float* Float, float Incement_Value, class UObject* __WorldContext);
	void STATIC_Apply_Relative_Transform(const struct FTransform& RelativeTransform, const struct FTransform& BaseTransform, class UObject* __WorldContext, struct FTransform* CombinedTransform);
	void STATIC_Calculate_Relative_Transform(const struct FTransform& RelativeObjectsWorldTransform, const struct FTransform& BaseObjectsWorldTransform, class UObject* __WorldContext, struct FTransform* RealtiveOffsetTransform);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
