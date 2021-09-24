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
// Enums
//---------------------------------------------------------------------------

// Enum AthenaEngine.EPlayModeVariant
enum class AthenaEngine_EPlayModeVariant : uint8_t
{
	EPlayModeVariant__Normal       = 0,
	EPlayModeVariant__Creator      = 1,
	EPlayModeVariant__Invalid      = 2,
	EPlayModeVariant__MAX          = 3,
	EPlayModeVariant__EPlayModeVariant_MAX = 4,

};

// Enum AthenaEngine.EPlayMode
enum class AthenaEngine_EPlayMode : uint8_t
{
	EPlayMode__Adventure           = 0,
	EPlayMode__Contest             = 1,
	EPlayMode__Tutorial            = 2,
	EPlayMode__NotSelectedYet      = 3,
	EPlayMode__MAX                 = 4,
	EPlayMode__Invalid             = 5,
	EPlayMode__EPlayMode_MAX       = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaEngine.SerialisedRpc
// 0x0020
struct FSerialisedRpc
{
	unsigned char                                      UnknownData_05X8[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScriptStruct*                               ContentsType;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.StringAssetClassPairFeatureOverride
// 0x0028
struct FStringAssetClassPairFeatureOverride
{
	struct FName                                       FeatureName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TAssetPtr<class UClass>                            AssetClass;                                                // 0x0008(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N302[0x4];                                     // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.StringAssetClassPair
// 0x0040
struct FStringAssetClassPair
{
	struct FString                                     String;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	TAssetPtr<class UClass>                            AssetClass;                                                // 0x0010(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VYAU[0x4];                                     // 0x0010(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FStringAssetClassPairFeatureOverride> FeatureOverrides;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, AdvancedDisplay)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.BoxedRpc
// 0x0010
struct FBoxedRpc
{
	unsigned char                                      UnknownData_L1UF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScriptStruct*                               Type;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.PlayModeDefiniton
// 0x0028
struct FPlayModeDefiniton
{
	TArray<struct FString>                             Tags;                                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             States;                                                    // 0x0010(0x0010) (ZeroConstructor)
	int                                                CrewMin;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CrewMax;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.ServicesStampId
// 0x0010
struct FServicesStampId
{
	struct FString                                     StampId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.ActorComponentSelector
// 0x0010
struct FActorComponentSelector
{
	struct FName                                       ComponentName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                             CachedComponent;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.PlaySoundRpc
// 0x0010 (0x0020 - 0x0010)
struct FPlaySoundRpc : public FBoxedRpc
{
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayOnTarget;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BWK8[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.EventCancelForceFeedback
// 0x0010
struct FEventCancelForceFeedback
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Tag;                                                       // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.EventTriggerForceFeedback
// 0x0018
struct FEventTriggerForceFeedback
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Looping;                                                   // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T2E3[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Tag;                                                       // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PG9Y[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.AthenaAsyncAssetLoaderWrapper
// 0x0018
struct FAthenaAsyncAssetLoaderWrapper
{
	unsigned char                                      UnknownData_IREL[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaEngine.EventMeshAssigned
// 0x0001
struct FEventMeshAssigned
{
	unsigned char                                      UnknownData_4EJJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
