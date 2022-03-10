namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class ContextualTutorialPromptDesc: public None
{
public:
	class                                              PromptActorClass                                   // 0x0(0x8)
	class                                              AccessKey                                          // 0x8(0x8)
	struct FName                                       FeatureName                                        // 0x10(0x8)
	int                                                MustBeUnderCount                                   // 0x18(0x4)
};


// Size 0x1
class EventTutorialTypeDecided: public None
{
public:
	byte                                               TutorialType                                       // 0x0(0x1)
};


// Size 0x18
class BeachNPCSpawnFlowNetworkEvent: public None
{
public:
	bool                                               HasTaleCheckpointVoyage                            // 0x10(0x1)
};


// Size 0x28
class TutorialStepEndedTelemetryEvent: public None
{
public:
	Struct FString                                     SequenceName                                       // 0x0(0x10)
	Struct FString                                     StepName                                           // 0x10(0x10)
	bool                                               StepCompleted                                      // 0x20(0x1)
	bool                                               IsFinalStep                                        // 0x21(0x1)
};


// Size 0x1
class TutorialShowTutorialLegendaryTavernStrangerEvent: public None
{
public:
};


}