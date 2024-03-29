#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x270 (Full Size[0xa50] - InheritedSize[0x7e0]
class TaleNote: public SkeletalMeshWieldableItem
{
public:
	char                                                         pad0x10_1U7J2[0x10];                               // 0x7e0(0x10)
	int                                                          CanvasWidth;                                       // 0x7f0(0x4)
	int                                                          CanvasHeight;                                      // 0x7f4(0x4)
	float                                                        FontScale;                                         // 0x7f8(0x4)
	char                                                         pad0x4_HA4CP[0x4];                                 // 0x7fc(0x4)
	class Font*                                                  Font;                                              // 0x800(0x8)
	struct TreasureMapWidgetStreamedTexture                      Image;                                             // 0x808(0x38)
	struct TreasureMapWidgetText                                 TitleWidgetText;                                   // 0x840(0x3c)
	struct TreasureMapWidgetText                                 BodyWidgetText;                                    // 0x87c(0x3c)
	TArray<struct TreasureMapWidgetText>                         AdditionalBodyWidgetText;                          // 0x8b8(0x10)
	float                                                        NoteWidth;                                         // 0x8c8(0x4)
	float                                                        NoteLineSpacingMultiplier;                         // 0x8cc(0x4)
	struct FText                                                 Title;                                             // 0x8d0(0x38)
	struct FText                                                 Body;                                              // 0x908(0x38)
	TArray<struct Text>                                          AdditionalBody;                                    // 0x940(0x10)
	class MaybeCompressedCanvasRenderTarget2D*                   RenderTarget;                                      // 0x950(0x8)
	class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x958(0x8)
	class InventoryItemComponent*                                InventoryItemComponent;                            // 0x960(0x8)
	class ZoomInOnWieldableItemComponent*                        ZoomInOnWieldableComponent;                        // 0x968(0x8)
	char                                                         pad0xe0_01BXW[0xe0];                               // 0x970(0xe0)
};


