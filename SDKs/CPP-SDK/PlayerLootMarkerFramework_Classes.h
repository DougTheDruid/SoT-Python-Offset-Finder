// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayerLootMarkerServiceInterface: public Interface
{
public:
};


// Size 0x158 (Full Size[0x520] - InheritedSize[0x3c8]
class PlayerLootMarkerService: public Actor
{
public:
	char                                                         pad0x8_VW0VI[0x8];                                 // 0x3c8(0x8)
	Class PlayerLootMarkerServiceParams*                         Params;                                            // 0x3d0(0x8)
	char                                                         pad0x20_WRGX1[0x20];                               // 0x3d8(0x20)
	TArray<Weakclass ShortRangeMarkers>                          ShortRangeMarkers;                                 // 0x3f8(0x10)
	char                                                         pad0xf8_H7D7O[0xf8];                               // 0x408(0xf8)
	TArray<Struct PlayerLootMarkerWorldEdgeBatchData>            BatchData;                                         // 0x500(0x10)
	char                                                         pad0x30_LQVFY[0x30];                               // 0x50e(0x30)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class PlayerLootMarkerServiceParams: public DataAsset
{
public:
	Class ShortRangeMarkerDataAsset*                             MarkerDataAsset;                                   // 0x28(0x8)
	float                                                        JettisonMaxMarkerDistance;                         // 0x30(0x4)
	char                                                         pad0xc_2PL3R[0xc];                                 // 0x32(0xc)
};


}