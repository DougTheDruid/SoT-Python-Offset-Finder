// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct ClueDestinationToTextIndex
{
public:
	class UClass*                                                DestinationType;                                   // 0x0(0x8)
	char                                                         pad0x20_J8294[0x20];                               // 0x8(0x20)
};


// Size 0x10
struct ClueDestinationChoice
{
public:
	class ClueDestinationDescriptor*                             Destination;                                       // 0x0(0x8)
	char                                                         pad0x8_FEHPL[0x8];                                 // 0x8(0x8)
};


// Size 0x70
struct GenderSpecificTextPairings
{
public:
	struct FText                                                 MasculineClueDestinationDescription;               // 0x0(0x38)
	struct FText                                                 FeminineClueDestinationDescription;                // 0x38(0x38)
};


// Size 0x78
struct TextEntryWithLayout
{
public:
	struct FText                                                 TextEntry;                                         // 0x0(0x38)
	struct TreasureMapWidgetText                                 TextLayout;                                        // 0x38(0x3c)
	char                                                         pad0x4_VAG0K[0x4];                                 // 0x74(0x4)
};


// Size 0x18
struct MapRadialIconData
{
public:
	struct StringAssetReference                                  AssetReference;                                    // 0x0(0x10)
	float                                                        Rotation;                                          // 0x10(0x4)
	char                                                         pad0x4_T7RWF[0x4];                                 // 0x14(0x4)
};


// Size 0x40
struct ExistingNPCToPhasedNPC
{
public:
	char                                                         pad0x40_HO2SW[0x40];                               // 0x0(0x40)
};


}