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

// ScriptStruct SimpleOverlaps.SimpleOverlapInfo
// 0x0010
struct FSimpleOverlapInfo
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComponent;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SimpleOverlaps.SimpleOverlapEnd
// 0x0010
struct FSimpleOverlapEnd
{
	struct FSimpleOverlapInfo                          OverlapInfo;                                               // 0x0000(0x0010) (ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SimpleOverlaps.SimpleOverlapBegin
// 0x0010
struct FSimpleOverlapBegin
{
	struct FSimpleOverlapInfo                          OverlapInfo;                                               // 0x0000(0x0010) (ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
