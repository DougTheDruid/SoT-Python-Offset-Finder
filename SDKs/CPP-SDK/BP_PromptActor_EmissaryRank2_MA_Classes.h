// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38 (Full Size[0x438] - InheritedSize[0x400]
class BP_PromptActor_EmissaryRank2_MA_C: public BP_PromptActorBase_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x400(0x8)
	BlueprintGeneratedClass BP_Prompt_EmissaryLevelRankChange_C* PromptCoordinator;                                 // 0x408(0x8)
	class                                                        PromptCounterAccessKey;                            // 0x410(0x8)
	class                                                        Company;                                           // 0x418(0x8)
	int                                                          ExpectedLevel;                                     // 0x420(0x4)
	char                                                         pad0x4_BVIS4[0x4];                                 // 0x424(0x4)
	TArray<Struct PrioritisedPromptWithHandle>                   Prompts;                                           // 0x428(0x10)
};


}