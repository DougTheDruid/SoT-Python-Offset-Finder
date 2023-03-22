// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
struct BoxedRpc
{
public:
	Class ScriptStruct*                                          Type;                                              // 0x8(0x8)
};


// Size 0x20
struct ConfigurableStructureInstanceWrapper
{
public:
	Struct UserDefinedStructWithSerialisableValue                Value;                                             // 0x0(0x20)
};


// Size 0x20
struct UserDefinedStructWithSerialisableValue
{
public:
	Class ScriptStruct*                                          InternalStruct;                                    // 0x0(0x8)
};


// Size 0x28
struct PlayModeDefiniton
{
public:
	TArray<Str Tags>                                             Tags;                                              // 0x0(0x10)
	TArray<Str States>                                           States;                                            // 0x10(0x10)
	int                                                          CrewMin;                                           // 0x20(0x4)
	int                                                          CrewMax;                                           // 0x24(0x4)
};


// Size 0x20
struct SerialisedRpc
{
public:
	Class ScriptStruct*                                          ContentsType;                                      // 0x18(0x8)
};


// Size 0x10
struct ServicesStampId
{
public:
	Struct FString                                               StampId;                                           // 0x0(0x10)
};


// Size 0x40
struct StringAssetClassPair
{
public:
	Struct FString                                               String;                                            // 0x0(0x10)
	TArray<struct FeatureOverrides>                              FeatureOverrides;                                  // 0x30(0x10)
};


// Size 0x28
struct StringAssetClassPairFeatureOverride
{
public:
	struct FName                                                 FeatureName;                                       // 0x0(0x8)
};


// Size 0x10
struct ActorComponentSelector
{
public:
	struct FName                                                 ComponentName;                                     // 0x0(0x8)
	Class ActorComponent*                                        CachedComponent;                                   // 0x8(0x8)
};


// Size 0x20
struct PlaySoundRpc
{
public:
	Class WwiseEvent*                                            WwiseEvent;                                        // 0x10(0x8)
	bool                                                         PlayOnTarget;                                      // 0x18(0x1)
};


// Size 0x10
struct EventCancelForceFeedback
{
public:
	Class ForceFeedbackEffect*                                   ForceFeedbackEffect;                               // 0x0(0x8)
	struct FName                                                 Tag;                                               // 0x8(0x8)
};


// Size 0x18
struct EventTriggerForceFeedback
{
public:
	Class ForceFeedbackEffect*                                   ForceFeedbackEffect;                               // 0x0(0x8)
	bool                                                         Looping;                                           // 0x8(0x1)
	char                                                         pad0x3_PZ27P[0x3];                                 // 0x9(0x3)
	struct FName                                                 Tag;                                               // 0xc(0x8)
};


// Size 0x18
struct AthenaAsyncAssetLoaderWrapper
{
public:
};


// Size 0x1
struct EventMeshAssigned
{
public:
};


// Size 0x8
struct InlineUserDefinedStructDetails
{
public:
	Class ScriptStruct*                                          Struct;                                            // 0x0(0x8)
};


// Size 0x8
struct NativeAndUserDefinedStructSelector
{
public:
	Class ScriptStruct*                                          Struct;                                            // 0x0(0x8)
};


}