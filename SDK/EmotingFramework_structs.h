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
// Enums
//---------------------------------------------------------------------------

// Enum EmotingFramework.EDiceType
enum class EmotingFramework_EDiceType : uint8_t
{
	EDiceType__Dice4               = 0,
	EDiceType__Dice6               = 1,
	EDiceType__Dice8               = 2,
	EDiceType__Dice10              = 3,
	EDiceType__Dice12              = 4,
	EDiceType__Dice20              = 5,
	EDiceType__EDiceType_MAX       = 6,

};

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
// 0x0098
struct FEmoteData
{
	struct FEmoteId                                    EmoteId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       EmoteDisplayName;                                          // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_UPYR[0x20];                                    // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       AudioDescription;                                          // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_I90P[0x20];                                    // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               PlayAudioDescriptionForLocalPlayer;                        // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_92PG[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayBeforeAllowingExit;                                   // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalOffsetFactorWhenZoomed;                            // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HideNameplate;                                             // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7NEX[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEmotePropData*                              EmotePropDataAsset;                                        // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanPlayInSuccession;                                       // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EE8N[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteEndRequested
// 0x000C
struct FEventEmoteEndRequested
{
	struct FName                                       EmoteIdentifier;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EndForcedEmote;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_51W0[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEndEmoteAnimation
// 0x0001
struct FEventEndEmoteAnimation
{
	unsigned char                                      UnknownData_WP3U[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteSwapped
// 0x0098
struct FEventEmoteSwapped
{
	struct FEmoteData                                  EmoteData;                                                 // 0x0000(0x0098)

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
// 0x0098
struct FEventEmoteStarted
{
	struct FEmoteData                                  EmoteData;                                                 // 0x0000(0x0098) (BlueprintVisible, BlueprintReadOnly)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEmoteRequested
// 0x00A8
struct FEventEmoteRequested
{
	struct FEmoteData                                  EmoteData;                                                 // 0x0000(0x0098)
	struct FName                                       ForcedEmoteIdentifier;                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForcedEmote;                                               // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y9FW[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EmoteDiceOutcomeTelemetryEvent
// 0x0014
struct FEmoteDiceOutcomeTelemetryEvent
{
	int                                                MaxLimit;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RollNumber;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OrientationUsed;                                           // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventDisableLookAtEmoteCamera
// 0x0001
struct FEventDisableLookAtEmoteCamera
{
	unsigned char                                      UnknownData_EFBJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmotingFramework.EventEnableLookAtEmoteCamera
// 0x0008
struct FEventEnableLookAtEmoteCamera
{
	TWeakObjectPtr<class AActor>                       LookAtTarget;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
