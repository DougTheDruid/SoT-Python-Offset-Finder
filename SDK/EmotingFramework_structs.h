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
// Enums
//---------------------------------------------------------------------------

// Enum EmotingFramework.EEmoteFlourishType
enum class EmotingFramework_EEmoteFlourishType : uint8_t
{
	EEmoteFlourishType__Invalid    = 0,
	EEmoteFlourishType__PrimaryWeaponSlotFlourish = 1,
	EEmoteFlourishType__SecondaryWeaponSlotFlourish = 2,
	EEmoteFlourishType__EEmoteFlourishType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmotingFramework.EmoteId
// 0x0008
struct FEmoteId
{
	struct FName                                       EmoteId;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EmoteData
// 0x0088
struct FEmoteData
{
	struct FEmoteId                                    EmoteId;                                                   // 0x0000(0x0008) (Edit)
	struct FText                                       EmoteDisplayName;                                          // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_ML12[0x20];                                    // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       AudioDescription;                                          // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_IKOI[0x20];                                    // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              DelayBeforeAllowingExit;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalOffsetFactorWhenZoomed;                            // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HideNameplate;                                             // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DWKY[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteEndRequested
// 0x000C
struct FEventEmoteEndRequested
{
	struct FName                                       EmoteIdentifier;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EndForcedEmote;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_779C[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEndEmoteAnimation
// 0x0001
struct FEventEndEmoteAnimation
{
	unsigned char                                      UnknownData_19NO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteSwapped
// 0x0088
struct FEventEmoteSwapped
{
	struct FEmoteData                                  EmoteData;                                                 // 0x0000(0x0088)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteCompleted
// 0x000C
struct FEventEmoteCompleted
{
	struct FName                                       EmoteName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           EmoteDuration;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteStarted
// 0x0088
struct FEventEmoteStarted
{
	struct FEmoteData                                  EmoteData;                                                 // 0x0000(0x0088)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteRequested
// 0x0098
struct FEventEmoteRequested
{
	struct FEmoteData                                  EmoteData;                                                 // 0x0000(0x0088)
	struct FName                                       ForcedEmoteIdentifier;                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForcedEmote;                                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AG4W[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
