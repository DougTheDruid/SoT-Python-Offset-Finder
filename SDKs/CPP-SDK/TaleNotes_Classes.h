// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x230 (Full Size[0x9d0] - InheritedSize[0x7a0]
class TaleNote: public SkeletalMeshWieldableItem
{
public:
	char                                                         pad0x10_2N5TI[0x10];                               // 0x7a0(0x10)
	int                                                          CanvasWidth;                                       // 0x7b0(0x4)
	int                                                          CanvasHeight;                                      // 0x7b4(0x4)
	float                                                        FontScale;                                         // 0x7b8(0x4)
	char                                                         pad0x4_CFA0P[0x4];                                 // 0x7bc(0x4)
	Class Font*                                                  Font;                                              // 0x7c0(0x8)
	Struct TreasureMapWidgetStreamedTexture                      Image;                                             // 0x7c8(0x30)
	Struct TreasureMapWidgetText                                 TitleWidgetText;                                   // 0x7f8(0x38)
	Struct TreasureMapWidgetText                                 BodyWidgetText;                                    // 0x830(0x38)
	float                                                        NoteWidth;                                         // 0x868(0x4)
	float                                                        NoteLineSpacingMultiplier;                         // 0x86c(0x4)
	Struct FText                                                 Title;                                             // 0x870(0x38)
	Struct FText                                                 Body;                                              // 0x8a8(0x38)
	Class MaybeCompressedCanvasRenderTarget2D*                   RenderTarget;                                      // 0x8e0(0x8)
	Class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x8e8(0x8)
	Class InventoryItemComponent*                                InventoryItemComponent;                            // 0x8f0(0x8)
	Class ZoomInOnWieldableItemComponent*                        ZoomInOnWieldableComponent;                        // 0x8f8(0x8)
	char                                                         pad0xe0_T1OOL[0xe0];                               // 0x8fe(0xe0)
};


}