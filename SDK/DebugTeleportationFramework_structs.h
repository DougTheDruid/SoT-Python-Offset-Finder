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

// ScriptStruct DebugTeleportationFramework.DebugTeleportDestinationEntry
// 0x0040
struct FDebugTeleportDestinationEntry
{
	struct FString                                     DebugMenuSubPath;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	struct FGuid                                       AssociatedCrew;                                            // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       Id;                                                        // 0x002C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U5MQ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
