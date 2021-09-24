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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_LadderTransitions.BP_LadderTransitions
// 0x0020
struct FBP_LadderTransitions
{
	class UAnimSequence*                               ClimbOnTop_16_46BF1F0048F2AF87FC06EDA7D957B5AD;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               ClimbOffTop_17_03BD0C524679686B3085549ADE090DDE;           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               ClimbOnBottom_18_FE40184048EEC04438D8779C3D2F861F;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequence*                               ClimbOffBottom_19_DDD74AC340C32F4A95E0FFA43F7CEE27;        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
