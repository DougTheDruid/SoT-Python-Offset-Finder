#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_InternalDamageGroup.BP_InternalDamageGroup
// 0x0010
struct FBP_InternalDamageGroup
{
	TArray<class UObject*>                             DamageObjects_4_A06B18A346E5F8B48258C2901F169935;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
