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

// BlueprintGeneratedClass BP_Cannon_PlayerLoadingInteractionPoint.BP_Cannon_PlayerLoadingInteractionPoint_C
// 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
class ABP_Cannon_PlayerLoadingInteractionPoint_C : public APlayerLoadingInteractionPoint
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cannon_PlayerLoadingInteractionPoint.BP_Cannon_PlayerLoadingInteractionPoint_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
