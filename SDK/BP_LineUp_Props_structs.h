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

// UserDefinedStruct BP_LineUp_Props.BP_LineUp_Props
// 0x0020
struct FBP_LineUp_Props
{
	class USkeletalMesh*                               SkeletalProp_12_CB0B67514F65AB892C9408AEF5CD43FE;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      SkeletalPropAnimGraph_44_914BF80841A205A0099F92A05F01EFC8; // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMesh*                                 StaticProp_15_4C06C726412D41BF622F7AA508892746;            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       SocketName_10_37F744524FB316F7DA3E2DA7713E2A03;            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
