// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x88 (Full Size[0x668] - InheritedSize[0x5e0]
class BP_CustomisableSovereignLadder_C: public Ladder
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x5e0(0x8)
	class InteractableComponent*                                 InteractableComponent;                             // 0x5e8(0x8)
	class StaticMeshComponent*                                   Ladder Cap;                                        // 0x5f0(0x8)
	struct CustomisableLadderDefinitionStruct                    LadderCustomisationDefinition;                     // 0x5f8(0x20)
	TArray<struct Vector>                                        OffTopSplineComponentPositions;                    // 0x618(0x10)
	TArray<struct Vector>                                        OnTopSplineComponentPositions;                     // 0x628(0x10)
	int                                                          Steps;                                             // 0x638(0x4)
	char                                                         pad0x4_HG4XW[0x4];                                 // 0x63c(0x4)
	class MaterialInterface*                                     Material Override;                                 // 0x640(0x8)
	float                                                        StepHeight;                                        // 0x648(0x4)
	struct Vector                                                Interactable Position;                             // 0x64c(0xc)
	struct Vector                                                Interactable Scale;                                // 0x658(0xc)
	int                                                          Minimum Steps;                                     // 0x664(0x4)
};


}