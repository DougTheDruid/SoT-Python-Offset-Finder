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

// BlueprintGeneratedClass BP_HumanoidGhostActionStateCreatorDefinition.BP_HumanoidGhostActionStateCreatorDefinition_C
// 0x0000 (FullSize[0x0908] - InheritedSize[0x0908])
class ABP_HumanoidGhostActionStateCreatorDefinition_C : public ABP_HumanoidActionStateCreatorDefinition_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HumanoidGhostActionStateCreatorDefinition.BP_HumanoidGhostActionStateCreatorDefinition_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
