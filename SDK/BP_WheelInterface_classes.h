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

// BlueprintGeneratedClass BP_WheelInterface.BP_WheelInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_WheelInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WheelInterface.BP_WheelInterface_C");
		return ptr;
	}



	void Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel_EWheel> EWheel, float Direction, float WheelRate);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
