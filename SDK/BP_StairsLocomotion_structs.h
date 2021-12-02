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

// UserDefinedStruct BP_StairsLocomotion.BP_StairsLocomotion
// 0x0020
struct FBP_StairsLocomotion
{
	class UBlendSpace*                                 UpStairsLeft_2_DA19AA214BF482B301330BBFF50A6F08;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBlendSpace*                                 UpStairsRight_13_5833E8C84B80A8FC73E6C1A7137C7BED;         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBlendSpace*                                 DownStairsLeft_14_3B87C4B54F900C770C667BB5F7C76A5B;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBlendSpace*                                 DownStairsRight_15_8EE6178B4FF9D4DA39FD92A20FCCF914;       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
