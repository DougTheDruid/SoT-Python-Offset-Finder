#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x78
struct TextEntryWithLayout
{
public:
	struct FText                                                 TextEntry;                                         // 0x0(0x38)
	struct TreasureMapWidgetText                                 TextLayout;                                        // 0x38(0x3c)
};


// Size 0x40
struct ExistingNPCToPhasedNPC
{
public:
	assetclass                                                   ExistingNPC;                                       // 0x0(0x20)
	assetclass                                                   PhasedNPC;                                         // 0x20(0x20)
};


// Size 0x10
struct ClueDestinationChoice
{
public:
	class ClueDestinationDescriptor*                             Destination;                                       // 0x0(0x8)
	int16                                                        ClueChoice;                                        // 0x8(0x2)
};


// Size 0x70
struct GenderSpecificTextPairings
{
public:
	struct FText                                                 MasculineClueDestinationDescription;               // 0x0(0x38)
	struct FText                                                 FeminineClueDestinationDescription;                // 0x38(0x38)
};


// Size 0x18
struct MapRadialIconData
{
public:
	struct StringAssetReference                                  AssetReference;                                    // 0x0(0x10)
	float                                                        Rotation;                                          // 0x10(0x4)
};


// Size 0x28
struct ClueDestinationToTextIndex
{
public:
	class UClass*                                                DestinationType;                                   // 0x0(0x8)
	assetobject                                                  RequiredIndexAsset;                                // 0x8(0x20)
};


