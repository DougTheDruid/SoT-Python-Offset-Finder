namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class LandscapeInfoLayerSettings: public None
{
public:
	Class LandscapeLayerInfoObject*                    LayerInfoObj                                       // 0x0(0x8)
	struct FName                                       LayerName                                          // 0x8(0x8)
};


// Size 0x10
class WeightmapLayerAllocationInfo: public None
{
public:
	Class LandscapeLayerInfoObject*                    LayerInfo                                          // 0x0(0x8)
	byte                                               WeightmapTextureIndex                              // 0x8(0x1)
	byte                                               WeightmapTextureChannel                            // 0x9(0x1)
	byte                                               GrassMapChannelIndex                               // 0xa(0x1)
};


// Size 0x50
class GizmoSelectData: public None
{
public:
};


// Size 0x30
class GrassVariety: public None
{
public:
	Class StaticMesh*                                  GrassMesh                                          // 0x0(0x8)
	float                                              GrassDensity                                       // 0x8(0x4)
	bool                                               bUseGrid                                           // 0xc(0x1)
	float                                              PlacementJitter                                    // 0x10(0x4)
	int                                                StartCullDistance                                  // 0x14(0x4)
	int                                                EndCullDistance                                    // 0x18(0x4)
	int                                                MinLOD                                             // 0x1c(0x4)
	bool                                               RandomRotation                                     // 0x20(0x1)
	float                                              AlignToSurface                                     // 0x24(0x4)
	float                                              ScaleVariationMin                                  // 0x28(0x4)
	float                                              ScaleVariationMax                                  // 0x2c(0x4)
};


// Size 0x1
class LandscapeImportLayerInfo: public None
{
public:
};


// Size 0x8
class LandscapeLayerStruct: public None
{
public:
	Class LandscapeLayerInfoObject*                    LayerInfoObj                                       // 0x0(0x8)
};


// Size 0x1
class LandscapeEditorLayerSettings: public None
{
public:
};


// Size 0x20
class LandscapeWeightmapUsage: public None
{
public:
	Class LandscapeComponent*                          ChannelUsage                                       // 0x0(0x8)
};


// Size 0x38
class LandscapeSplineMeshEntry: public None
{
public:
	Class StaticMesh*                                  Mesh                                               // 0x0(0x8)
	TArray<class MaterialOverrides*>                   MaterialOverrides                                  // 0x8(0x10)
	bool                                               bCenterH                                           // 0x18(0x1)
	Struct Vector2D                                    CenterAdjust                                       // 0x1c(0x8)
	bool                                               bScaleToWidth                                      // 0x24(0x1)
	Struct Vector                                      Scale                                              // 0x28(0xc)
	byte                                               Orientation                                        // 0x34(0x1)
	byte                                               ForwardAxis                                        // 0x35(0x1)
	byte                                               UpAxis                                             // 0x36(0x1)
};


// Size 0x18
class LandscapeSplineSegmentConnection: public None
{
public:
	Class LandscapeSplineControlPoint*                 ControlPoint                                       // 0x0(0x8)
	float                                              TangentLen                                         // 0x8(0x4)
	struct FName                                       SocketName                                         // 0xc(0x8)
};


// Size 0x40
class LandscapeSplineInterpPoint: public None
{
public:
	Struct Vector                                      Center                                             // 0x0(0xc)
	Struct Vector                                      Left                                               // 0xc(0xc)
	Struct Vector                                      Right                                              // 0x18(0xc)
	Struct Vector                                      FalloffLeft                                        // 0x24(0xc)
	Struct Vector                                      FalloffRight                                       // 0x30(0xc)
	float                                              StartEndFalloff                                    // 0x3c(0x4)
};


// Size 0x10
class LandscapeSplineConnection: public None
{
public:
	Class LandscapeSplineSegment*                      Segment                                            // 0x0(0x8)
	bool                                               End                                                // 0x8(0x1)
};


// Size 0x1
class ForeignWorldSplineData: public None
{
public:
};


// Size 0x1
class ForeignSplineSegmentData: public None
{
public:
};


// Size 0x1
class ForeignControlPointData: public None
{
public:
};


// Size 0x48
class GrassInput: public None
{
public:
	struct FName                                       Name                                               // 0x0(0x8)
	Class LandscapeGrassType*                          GrassType                                          // 0x8(0x8)
	Struct ExpressionInput                             Input                                              // 0x10(0x38)
};


// Size 0x98
class LayerBlendInput: public None
{
public:
	struct FName                                       LayerName                                          // 0x0(0x8)
	byte                                               BlendType                                          // 0x8(0x1)
	Struct ExpressionInput                             LayerInput                                         // 0x10(0x38)
	Struct ExpressionInput                             HeightInput                                        // 0x48(0x38)
	float                                              PreviewWeight                                      // 0x80(0x4)
	Struct Vector                                      ConstLayerInput                                    // 0x84(0xc)
	float                                              ConstHeightInput                                   // 0x90(0x4)
};


}