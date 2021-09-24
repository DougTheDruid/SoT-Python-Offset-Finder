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

// ScriptStruct GameService.GameServiceMap
// 0x0070
struct FGameServiceMap
{
	unsigned char                                      UnknownData_TPYC[0x70];                                    // 0x0000(0x0070) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameService.GameServiceCoordinatorUnit
// 0x0018
struct FGameServiceCoordinatorUnit
{
	class UObject*                                     Service;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LYSP[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameService.GameServiceCoordinator
// 0x0010
struct FGameServiceCoordinator
{
	TArray<struct FGameServiceCoordinatorUnit>         Services;                                                  // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
