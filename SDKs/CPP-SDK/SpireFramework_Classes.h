// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class HeightTriggerableAudioComponentParams: public DataAsset
{
public:
	class WwiseObjectPoolWrapper*                                Pool;                                              // 0x28(0x8)
	class WwiseEvent*                                            RisingOneShot;                                     // 0x30(0x8)
	class WwiseEvent*                                            RisingStart;                                       // 0x38(0x8)
	class WwiseEvent*                                            RisingStop;                                        // 0x40(0x8)
	class WwiseEvent*                                            LoweringStart;                                     // 0x48(0x8)
	class WwiseEvent*                                            LoweringStop;                                      // 0x50(0x8)
};


// Size 0x90 (Full Size[0x158] - InheritedSize[0xc8]
class HeightTriggerableEffectsComponent: public ActorComponent
{
public:
	class HeightTriggerableAudioComponentParams*                 AudioParams;                                       // 0xc8(0x8)
	struct ActorComponentSelector                                EmitterOwner;                                      // 0xd0(0x10)
	struct Vector                                                EmitterOffset;                                     // 0xe0(0xc)
	bool                                                         UseParentEmitter;                                  // 0xec(0x1)
	char                                                         pad0x3_LVU8P[0x3];                                 // 0xed(0x3)
	float                                                        RisingAudioTriggerValue;                           // 0xf0(0x4)
	char                                                         pad0x4_FX4A1[0x4];                                 // 0xf4(0x4)
	class UClass*                                                CameraShake;                                       // 0xf8(0x8)
	float                                                        ShakeInnerRadius;                                  // 0x100(0x4)
	float                                                        ShakeOuterRadius;                                  // 0x104(0x4)
	char                                                         pad0x50_CV86W[0x50];                               // 0x108(0x50)
};


// Size 0x10 (Full Size[0x3d8] - InheritedSize[0x3c8]
class SpireResource: public Actor
{
public:
	char                                                         pad0x10_E9VLI[0x10];                               // 0x3c8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SpireServiceInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class SpireServiceParams: public DataAsset
{
public:
	class ActorSpawnData*                                        OnCancelFakeSpire;                                 // 0x28(0x8)
};


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class SpireService: public Actor
{
public:
	char                                                         pad0x8_NL4XE[0x8];                                 // 0x3c8(0x8)
	class SpireServiceParams*                                    Params;                                            // 0x3d0(0x8)
	TArray<struct ServerSpireInfo>                               ServerOnlySpireInfo;                               // 0x3d8(0x10)
	TArray<struct SpireInfo>                                     SpireLevels;                                       // 0x3e8(0x10)
	char                                                         pad0x68_YNCX6[0x68];                               // 0x3f8(0x68)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class SpireStreamedLevelDataAsset: public DataAsset
{
public:
	class AthenaStreamedLevelDataAsset*                          StreamedLevel;                                     // 0x28(0x8)
	TArray<struct SpireEntry>                                    Entries;                                           // 0x30(0x10)
	struct FName                                                 FeatureToggle;                                     // 0x40(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SpireSettingsInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x3e8] - InheritedSize[0x3d8]
class SpireShippingDrawDebugActorSphereCollection: public ShippingDebugActorSphereCollection
{
public:
	TArray<Weakclass SpireList>                                  SpireList;                                         // 0x3d8(0x10)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleLoadSpireStep: public TaleQuestStep
{
public:
};


// Size 0x48 (Full Size[0xa8] - InheritedSize[0x60]
class TaleSpireService: public TaleQuestService
{
public:
	char                                                         pad0x48_AJHJO[0x48];                               // 0x60(0x48)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TaleSpireServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class TaleLoadSpireStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleMakeSpireVisibleStep: public TaleQuestStep
{
public:
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class TaleMakeSpireVisibleStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x10 (Full Size[0xa8] - InheritedSize[0x98]
class TaleRegisterSpireStep: public TaleQuestStep
{
public:
	class TaleRegisterSpireStepDesc*                             StepDesc;                                          // 0x98(0x8)
	char                                                         pad0x8_MJPAB[0x8];                                 // 0xa0(0x8)
};


// Size 0xc0 (Full Size[0x140] - InheritedSize[0x80]
class TaleRegisterSpireStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableVector                                   SelectionOriginPoint;                              // 0x80(0x30)
	struct QuestVariableFloat                                    PlayerExclusionSelectionRadius;                    // 0xb0(0x30)
	struct QuestVariableTaleResourceHandle                       AllocatedSpireHandle;                              // 0xe0(0x30)
	struct QuestVariableVector                                   AllocatedSpireLocation;                            // 0x110(0x30)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleReleaseSpireStep: public TaleQuestStep
{
public:
	char                                                         pad0x8_R1DNH[0x8];                                 // 0x98(0x8)
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleReleaseSpireStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableTaleResourceHandle                       SpireHandle;                                       // 0x80(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleUnloadSpireStep: public TaleQuestStep
{
public:
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class TaleUnloadSpireStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x50 (Full Size[0xe8] - InheritedSize[0x98]
class TaleWaitForSpireToLoadStep: public TaleQuestStep
{
public:
	char                                                         pad0x50_4RNRU[0x50];                               // 0x98(0x50)
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class TaleWaitForSpireToLoadStepDesc: public TaleQuestStepDesc
{
public:
};


}