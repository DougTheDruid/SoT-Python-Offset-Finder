namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x179
class BP_Prompt_BuryingItem_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x118(0x8)
	Struct ObjectMessagingHandle                       WieldableItemUseEvent                              // 0x120(0x48)
	class                                              NotificationInputId                                // 0x168(0x8)
	class                                              BuryingItemPromptAccessKey                         // 0x170(0x8)
	Struct ObjectMessagingHandle                       WieldableItemEquipEvent                            // 0x178(0x48)
	Struct PrioritisedPromptWithHandle                 Prompt                                             // 0x1c0(0x68)
	bool                                               WieldingShovel                                     // 0x228(0x1)
	Struct ObjectMessagingHandle                       WieldableItemStow                                  // 0x230(0x48)
	class                                              In                                                 // 0x278(0x8)
	bool                                               UsingSecondaryInput                                // 0x280(0x1)
	bool                                               StatCompleted                                      // 0x281(0x1)
	Struct ObjectMessagingDispatcherHandle             CharacterDispatcher                                // 0x288(0x8)
	bool                                               HasShown                                           // 0x290(0x1)
};


}