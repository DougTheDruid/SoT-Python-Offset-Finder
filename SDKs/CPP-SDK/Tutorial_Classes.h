#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Tutorial_Structs.h"


// Size 0xb8 (Full Size[0xe0] - InheritedSize[0x28]
class CompanyTutorialVoyageProgress: public Object
{
public:
	class UClass*                                                AssignedVoyageProposalDescClass;                   // 0x28(0x8)
	class UClass*                                                AssignedTaleRankDescClass;                         // 0x30(0x8)
};


// Size 0x78 (Full Size[0x140] - InheritedSize[0xc8]
class ContextualTutorialComponent: public ActorComponent
{
public:
	TArray<struct ContextualTutorialPromptDesc>                  ContextualTutorialClasses;                         // 0xc8(0x10)
	TArray<class Actor*>                                         SpawnedPromptActors;                               // 0xd8(0x10)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class TutorialStarter: public Object
{
public:
	class AthenaPlayerController*                                AthenaPlayerController;                            // 0x28(0x8)
	bool                                                         ShouldPlayIntroAnimatic;                           // 0x30(0x1)
	bool                                                         ShouldDisableAllIntroBehaviour;                    // 0x31(0x1)
	struct FirstPersonAnimaticSettings                           IntroAnimationSettings;                            // 0x34(0x2c)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class HasTutorialStarterBegunNPCDialogConditional: public NPCDialogConditional
{
public:
	char                                                         TutorialStarterType;                               // 0x30(0x1)
};


// Size 0x78 (Full Size[0x140] - InheritedSize[0xc8]
class TutorialManager: public ActorComponent
{
public:
	class UClass*                                                CompanyOnboardingStarterClass;                     // 0xd0(0x8)
	class UClass*                                                MaidenVoyageStarterClass;                          // 0xd8(0x8)
	class UClass*                                                BeachNPCSpawnFlowStarterClass;                     // 0xe0(0x8)
	class UClass*                                                IntroductionToSOTFlowStarterClass;                 // 0xe8(0x8)
	class UClass*                                                CaptaincyStarterClass;                             // 0xf0(0x8)
	class UClass*                                                CaptaincyNewShipStarterClass;                      // 0xf8(0x8)
	class UClass*                                                CaptaincyWithBeachNPCSpawnStarterClass;            // 0x100(0x8)
	class UClass*                                                SelectedTutorialClass;                             // 0x108(0x8)
	class TutorialStarter*                                       SelectedTutorial;                                  // 0x110(0x8)
	char                                                         TutorialType;                                      // 0x118(0x1)
	bool                                                         HasEverPlayedFirstPersonAnimation;                 // 0x119(0x1)
	bool                                                         HasStartedTutorial;                                // 0x11a(0x1)
	bool                                                         HasReceivedEntitlements;                           // 0x11b(0x1)
	bool                                                         HasPosessedPawn;                                   // 0x11c(0x1)
	bool                                                         HasPlayerFinshedSpawning;                          // 0x11d(0x1)
	bool                                                         IsPlayerWaitingForCaptaincySessionResponse;        // 0x11e(0x1)
	bool                                                         HasPlayerPromptsServiceSetup;                      // 0x11f(0x1)
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class Tutorial2019Component: public ActorComponent
{
public:
	bool                                                         IsEnabledByServer;                                 // 0xc8(0x1)
	bool                                                         IsInTutorialTale;                                  // 0xc9(0x1)
};


// Size 0x78 (Full Size[0xd8] - InheritedSize[0x60]
class IntroductionToSOTFlowStarter: public TutorialStarter
{
public:
	class VoyageDescDataAsset*                                   TutorialTale;                                      // 0x60(0x8)
	TArray<struct IntroductionToSOTIntroAnimatic>                ShipSizeBasedIntroAnimatics;                       // 0x68(0x10)
};


// Size 0x8 (Full Size[0xd8] - InheritedSize[0xd0]
class Tutorial2019ContextualDelegatingComponent: public Tutorial2019Component
{
public:
	class ContextualTutorialComponent*                           ContextualTutorialComponent;                       // 0xd0(0x8)
};


// Size 0x98 (Full Size[0xf8] - InheritedSize[0x60]
class CaptaincyStarter: public TutorialStarter
{
public:
	class VoyageDescDataAsset*                                   TutorialTale;                                      // 0x60(0x8)
	bool                                                         CheckIfShipNeverSetSail;                           // 0x68(0x1)
	bool                                                         CheckIfPlayerInOutpost;                            // 0x69(0x1)
	bool                                                         CheckIfPlayerIsInCaptain;                          // 0x6a(0x1)
	class UClass*                                                CheckIfEntitlementIsOwned;                         // 0x70(0x8)
	bool                                                         CheckIfCaptainingANewShip;                         // 0x78(0x1)
	struct FName                                                 FeatureToggle;                                     // 0x7c(0x8)
	bool                                                         CheckIfPlayerHasMadeAttempts;                      // 0x84(0x1)
	class UClass*                                                PromptCounterKey;                                  // 0x88(0x8)
	int                                                          MaxAttemptCount;                                   // 0x90(0x4)
};


