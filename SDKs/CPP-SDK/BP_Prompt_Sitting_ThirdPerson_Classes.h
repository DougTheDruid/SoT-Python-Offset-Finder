// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x152 (Full Size[0x26a] - InheritedSize[0x118]
class BP_Prompt_Sitting_ThirdPerson_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	char                                                         pad0x93_DE4DY[0x93];                               // 0x120(0x93)
	Struct ObjectMessagingHandle                                 Handle_LocalPlayerEnteredSittingState;             // 0x120(0x48)
	Struct PrioritisedPromptWithHandle                           Prompt_ThirdPerson;                                // 0x168(0x68)
	float                                                        PromptDisplayDuration;                             // 0x1d0(0x4)
	bool                                                         CrewInRadius;                                      // 0x1d4(0x1)
	bool                                                         PromptOnCooldown;                                  // 0x1d5(0x1)
	char                                                         pad0x2_0IYKO[0x2];                                 // 0x1d6(0x2)
	Struct ObjectMessagingHandle                                 Handle_LocalPlayerExitedSittingState;              // 0x1d8(0x48)
	Struct ObjectMessagingHandle                                 Handle_LocalPlayerEnteredSittingThirdPersonCameraState; // 0x220(0x48)
	bool                                                         PlayerOnSeat;                                      // 0x268(0x1)
	bool                                                         PromptEvaluated;                                   // 0x269(0x1)
};


}