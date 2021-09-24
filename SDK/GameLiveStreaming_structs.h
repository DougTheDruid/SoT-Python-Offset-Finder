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

// ScriptStruct GameLiveStreaming.BlueprintLiveStreamInfo
// 0x0030
struct FBlueprintLiveStreamInfo
{
	struct FString                                     GameName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     StreamName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     URL;                                                       // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
