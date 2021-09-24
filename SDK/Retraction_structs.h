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

// ScriptStruct Retraction.RetractorOrientationAdjustmentFlags
// 0x0003
struct FRetractorOrientationAdjustmentFlags
{
	bool                                               AdjustPitch;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AdjustRoll;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AdjustYaw;                                                 // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
