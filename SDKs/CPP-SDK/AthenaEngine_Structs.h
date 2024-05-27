#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x18
struct BoxedRpc
{
public:
	class ScriptStruct*                                          Type;                                              // 0x8(0x8)
};


// Size 0x8
struct NativeAndUserDefinedStructSelector
{
public:
	class ScriptStruct*                                          Struct;                                            // 0x0(0x8)
};


// Size 0x28
struct PlayModeDefiniton
{
public:
	TArray<String>                                               Tags;                                              // 0x0(0x10)
	TArray<String>                                               States;                                            // 0x10(0x10)
	int                                                          CrewMin;                                           // 0x20(0x4)
	int                                                          CrewMax;                                           // 0x24(0x4)
};


// Size 0x4
struct AdaptiveTriggerEffectMode_Weapon
{
public:
	char                                                         StartPosition;                                     // 0x0(0x1)
	char                                                         EndPosition;                                       // 0x1(0x1)
	char                                                         Strength;                                          // 0x2(0x1)
	bool                                                         UseTriggerEffectForThreshold;                      // 0x3(0x1)
};


// Size 0x28
struct StringAssetClassPairFeatureOverride
{
public:
	struct FName                                                 FeatureName;                                       // 0x0(0x8)
	assetclass                                                   AssetClass;                                        // 0x8(0x20)
};


// Size 0x8
struct InlineUserDefinedStructDetails
{
public:
	class ScriptStruct*                                          Struct;                                            // 0x0(0x8)
};


// Size 0x20
struct SerialisedRpc
{
public:
	class ScriptStruct*                                          ContentsType;                                      // 0x18(0x8)
};


// Size 0x10
struct EventCancelForceFeedback
{
public:
	class ForceFeedbackEffect*                                   ForceFeedbackEffect;                               // 0x0(0x8)
	struct FName                                                 Tag;                                               // 0x8(0x8)
};


// Size 0x20
struct UserDefinedStructWithSerialisableValue
{
public:
	class ScriptStruct*                                          InternalStruct;                                    // 0x0(0x8)
};


// Size 0x4
struct AdaptiveTriggerEffectMode_Vibration
{
public:
	char                                                         Position;                                          // 0x0(0x1)
	char                                                         Frequency;                                         // 0x1(0x1)
	char                                                         Amplitude;                                         // 0x2(0x1)
	bool                                                         UseTriggerEffectForThreshold;                      // 0x3(0x1)
};


// Size 0x20
struct ConfigurableStructureInstanceWrapper
{
public:
	struct                                                       Value;                                             // 0x0(0x20)
};


// Size 0x18
struct EventTriggerForceFeedback
{
public:
	class ForceFeedbackEffect*                                   ForceFeedbackEffect;                               // 0x0(0x8)
	bool                                                         Looping;                                           // 0x8(0x1)
	struct FName                                                 Tag;                                               // 0xc(0x8)
};


// Size 0x28
struct PlaySoundRpc
{
public:
	class WwiseEvent*                                            WwiseEvent;                                        // 0x18(0x8)
	bool                                                         PlayOnTarget;                                      // 0x20(0x1)
};


// Size 0x3
struct AdaptiveTriggerEffectMode_Feedback
{
public:
	char                                                         Position;                                          // 0x0(0x1)
	char                                                         Strength;                                          // 0x1(0x1)
	bool                                                         UseTriggerEffectForThreshold;                      // 0x2(0x1)
};


// Size 0x10
struct ActorComponentSelector
{
public:
	struct FName                                                 ComponentName;                                     // 0x0(0x8)
	class ActorComponent*                                        CachedComponent;                                   // 0x8(0x8)
};


// Size 0x10
struct ServicesStampId
{
public:
	struct FString                                               StampId;                                           // 0x0(0x10)
};


// Size 0x40
struct StringAssetClassPair
{
public:
	struct FString                                               String;                                            // 0x0(0x10)
	assetclass                                                   AssetClass;                                        // 0x10(0x20)
	TArray<struct StringAssetClassPairFeatureOverride>           FeatureOverrides;                                  // 0x30(0x10)
};


