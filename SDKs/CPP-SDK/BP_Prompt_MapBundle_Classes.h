// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x140
class BP_Prompt_MapBundle_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	class                                                        MapBundlePromptAccessKey;                          // 0x120(0x8)
	Struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x128(0x68)
	bool                                                         MapBundleBecameVisible;                            // 0x190(0x1)
	Struct ObjectMessagingHandle                                 MapBundleAppearedHandle;                           // 0x198(0x48)
	Struct ObjectMessagingDispatcherHandle                       CharacterDispatcher;                               // 0x1e0(0x8)
	bool                                                         HasShown;                                          // 0x1e8(0x1)
	Struct PrioritisedPromptWithHandle                           StealPrompt;                                       // 0x1f0(0x68)
};


}