#pragma once

// Name: SoT, Version: 2.4.0


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

// UserDefinedStruct CustomisableLadderDefinitionStruct.CustomisableLadderDefinitionStruct
// 0x001C
struct FCustomisableLadderDefinitionStruct
{
	TArray<class UStaticMesh*>                         LadderLengthMeshes_3_2EC47B874988A47C81463B93F2A2A979;     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UStaticMesh*                                 LadderTop_6_6BF9F2424757005036BA87A9BC524EBA;              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BottomRungOffset_13_3DB7AE6242ED48E7DA3A9FA0B52E34B6;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
