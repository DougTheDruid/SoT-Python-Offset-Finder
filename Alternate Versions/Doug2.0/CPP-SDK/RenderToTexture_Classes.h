namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class RenderToTextureFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x80
class RenderToTextureSceneDetails: public Object
{
public:
	class                                              ClassToSpawn                                       // 0x28(0x8)
	Struct IntPoint                                    Resolution                                         // 0x30(0x8)
	Class World*                                       World                                              // 0x38(0x8)
	Class TextureRenderTarget2D*                       RenderTarget                                       // 0x50(0x8)
};


}