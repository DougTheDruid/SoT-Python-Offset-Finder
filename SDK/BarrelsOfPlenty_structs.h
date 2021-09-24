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

// ScriptStruct BarrelsOfPlenty.BarrelsOfPlentyDebugLocationEntry
// 0x0010
struct FBarrelsOfPlentyDebugLocationEntry
{
	struct FVector                                     WorldSpacePosition;                                        // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SinkTime;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
