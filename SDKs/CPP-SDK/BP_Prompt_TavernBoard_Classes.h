// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x119 (Full Size[0x231] - InheritedSize[0x118]
class BP_Prompt_TavernBoard_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	char                                                         pad0x12a_AHPAA[0x12a];                             // 0x120(0x12a)
	Struct ObjectMessagingHandle                                 WieldableItemUseEvent;                             // 0x120(0x48)
	class                                                        TavernBoardPromptAccessKey;                        // 0x168(0x8)
	Struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x170(0x68)
	bool                                                         InRangeOfTavernBoard;                              // 0x1d8(0x1)
	char                                                         pad0x7_0Q1OV[0x7];                                 // 0x1d9(0x7)
	Struct ObjectMessagingHandle                                 ApproachedTavernBoardHandle;                       // 0x1e0(0x48)
	Struct ObjectMessagingDispatcherHandle                       CharacterDispatcher;                               // 0x228(0x8)
	bool                                                         HasShown;                                          // 0x230(0x1)
};


}