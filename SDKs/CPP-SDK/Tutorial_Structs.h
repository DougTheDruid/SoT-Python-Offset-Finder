// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
struct ContextualTutorialPromptDesc
{
public:
	char                                                         pad0x20_ETBSO[0x20];                               // 0x0(0x20)
	class UClass*                                                AccessKey;                                         // 0x20(0x8)
	struct FeatureFlag                                           Feature;                                           // 0x28(0xc)
	int                                                          MustBeUnderCount;                                  // 0x34(0x4)
};


// Size 0x1
struct EventTutorialTypeDecided
{
public:
	byte                                                         TutorialType;                                      // 0x0(0x1)
};


// Size 0x38
struct IntroductionToSOTIntroAnimatic
{
public:
	class UClass*                                                ShipSize;                                          // 0x0(0x8)
	struct FirstPersonAnimaticSettings                           IntroAnimationSettings;                            // 0x8(0x2c)
	char                                                         pad0x4_S5HGP[0x4];                                 // 0x34(0x4)
};


// Size 0x18
struct BeachNPCSpawnFlowNetworkEvent
{
public:
	char                                                         pad0x10_DKYJL[0x10];                               // 0x0(0x10)
	bool                                                         HasTaleCheckpointVoyage;                           // 0x10(0x1)
	char                                                         pad0x7_NFE00[0x7];                                 // 0x11(0x7)
};


// Size 0x30
struct HasTutorialStarterBegunCondition
{
public:
	char                                                         pad0x28_0IRHG[0x28];                               // 0x0(0x28)
	byte                                                         TutorialStarterType;                               // 0x28(0x1)
	char                                                         pad0x7_S6EPA[0x7];                                 // 0x29(0x7)
};


// Size 0x28
struct TutorialStepEndedTelemetryEvent
{
public:
	struct FString                                               SequenceName;                                      // 0x0(0x10)
	struct FString                                               StepName;                                          // 0x10(0x10)
	bool                                                         StepCompleted;                                     // 0x20(0x1)
	bool                                                         IsFinalStep;                                       // 0x21(0x1)
	char                                                         pad0x6_CV0HL[0x6];                                 // 0x22(0x6)
};


// Size 0x1
struct TutorialShowTutorialLegendaryTavernStrangerEvent
{
public:
	char                                                         pad0x1_TITZL[0x1];                                 // 0x0(0x1)
};


}