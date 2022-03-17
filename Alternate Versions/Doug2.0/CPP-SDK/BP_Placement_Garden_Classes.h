// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa5
class BP_Placement_Garden_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3d0(0x8)
	Class BillboardComponent*                                    Billboard;                                         // 0x3d8(0x8)
	Class SphereComponent*                                       Spherical Volume;                                  // 0x3e0(0x8)
	Class SceneComponent*                                        Scene;                                             // 0x3e8(0x8)
	TArray<Struct None>                                          Meshes;                                            // 0x3f0(0x10)
	float                                                        Radius;                                            // 0x400(0x4)
	bool                                                         Radius Visible;                                    // 0x404(0x1)
	float                                                        Spawn Density;                                     // 0x408(0x4)
	float                                                        Spawn Clustering;                                  // 0x40c(0x4)
	int                                                          Seed;                                              // 0x410(0x4)
	TArray<class Physical Materials*>                            Physical Materials;                                // 0x418(0x10)
	bool                                                         Update On Drag;                                    // 0x428(0x1)
	TArray<Float Mesh Probabilities>                             Mesh Probabilities;                                // 0x430(0x10)
	TArray<class Instanced Meshes*>                              Instanced Meshes;                                  // 0x440(0x10)
	Struct RandomStream                                          Random;                                            // 0x450(0x8)
	int                                                          Instance Count;                                    // 0x458(0x4)
	TArray<Struct Instanced Meshes>                              Mesh Radii;                                        // 0x460(0x10)
	float                                                        Max Draw Distance;                                 // 0x470(0x4)
	bool                                                         Cast Shadows;                                      // 0x474(0x1)
};


}