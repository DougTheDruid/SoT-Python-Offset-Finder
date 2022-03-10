namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class ClueDestinationToTextIndex: public None
{
public:
	class                                              DestinationType                                    // 0x0(0x8)
};


// Size 0x10
class ClueDestinationChoice: public None
{
public:
	Class ClueDestinationDescriptor*                   Destination                                        // 0x0(0x8)
};


// Size 0x70
class GenderSpecificTextPairings: public None
{
public:
	Struct FText                                       MasculineClueDestinationDescription                // 0x0(0x38)
	Struct FText                                       FeminineClueDestinationDescription                 // 0x38(0x38)
};


// Size 0x70
class TextEntryWithLayout: public None
{
public:
	Struct FText                                       TextEntry                                          // 0x0(0x38)
	Struct TreasureMapWidgetText                       TextLayout                                         // 0x38(0x38)
};


// Size 0x18
class MapRadialIconData: public None
{
public:
	Struct StringAssetReference                        AssetReference                                     // 0x0(0x10)
	float                                              Rotation                                           // 0x10(0x4)
};


// Size 0x40
class ExistingNPCToPhasedNPC: public None
{
public:
};


}