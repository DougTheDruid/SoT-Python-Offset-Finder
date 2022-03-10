namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x119
class BP_Prompt_TavernBoard_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	Struct ObjectMessagingHandle                       WieldableItemUseEvent                              // 0x120(0x48)
	class                                              TavernBoardPromptAccessKey                         // 0x168(0x8)
	Struct PrioritisedPromptWithHandle                 Prompt                                             // 0x170(0x68)
	bool                                               InRangeOfTavernBoard                               // 0x1d8(0x1)
	Struct ObjectMessagingHandle                       ApproachedTavernBoardHandle                        // 0x1e0(0x48)
	Struct ObjectMessagingDispatcherHandle             CharacterDispatcher                                // 0x228(0x8)
	bool                                               HasShown                                           // 0x230(0x1)
};


}