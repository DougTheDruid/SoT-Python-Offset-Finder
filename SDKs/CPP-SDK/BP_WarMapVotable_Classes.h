// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40
class BP_WarMapVotable_C: public WarMapVotableObjectView
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x4f0(0x8)
	Class StaticMesh*                                            Token Asset;                                       // 0x4f8(0x8)
	float                                                        Show Token Animation Time;                         // 0x500(0x4)
	Class MaterialInterface*                                     Token Material;                                    // 0x508(0x8)
	TArray<class StaticMeshComponent*>                           Tokens;                                            // 0x510(0x10)
	TArray<Struct Transform>                                     DaggerPositions;                                   // 0x520(0x10)
};


}