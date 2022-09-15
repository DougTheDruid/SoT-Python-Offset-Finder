// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1db
class BP_CliffGenerator_C: public Actor
{
public:
	Class SplineComponent*                                       Base_Spline;                                       // 0x3c8(0x8)
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3d0(0x8)
	bool                                                         Use Specific Start Actor;                          // 0x3d8(0x1)
	Class StaticMesh*                                            Source Start Actor;                                // 0x3e0(0x8)
	bool                                                         Use Specific End Actor;                            // 0x3e8(0x1)
	Class StaticMesh*                                            Source End Actor;                                  // 0x3f0(0x8)
	TArray<class StaticMesh*>                                    Source Actors;                                     // 0x3f8(0x10)
	float                                                        MaxTopSplineHeight;                                // 0x408(0x4)
	bool                                                         SpecifyNumberOfElements;                           // 0x40c(0x1)
	int                                                          NumberOfElements;                                  // 0x410(0x4)
	float                                                        ObjectSpacer;                                      // 0x414(0x4)
	float                                                        TangetWeights;                                     // 0x418(0x4)
	int                                                          Random_Seed;                                       // 0x41c(0x4)
	TArray<Struct BP_CliffGenerator_Struct>                      DataArray;                                         // 0x420(0x10)
	bool                                                         Use_Deformable(SplineMesh);                        // 0x430(0x1)
	bool                                                         Instance_Meshes;                                   // 0x431(0x1)
	bool                                                         Flip_Meshes;                                       // 0x432(0x1)
	Struct RandomStream                                          ArrayStore;                                        // 0x434(0x8)
	float                                                        SplineRemaninderScale;                             // 0x43c(0x4)
	int                                                          NumElementsNeeded;                                 // 0x440(0x4)
	Struct BP_CliffGenerator_Struct                              Default_Mesh;                                      // 0x444(0x10)
	Struct Vector                                                BlueprintPosition;                                 // 0x454(0xc)
	Struct Rotator                                               InverseBlueprintRotation;                          // 0x460(0xc)
	bool                                                         UseSpecifiedMeshAtIndex;                           // 0x46c(0x1)
	bool                                                         LoopDataArraySize;                                 // 0x46d(0x1)
	bool                                                         Collisions;                                        // 0x46e(0x1)
	bool                                                         [DEBUG ] SplineNumbers;                            // 0x46f(0x1)
	bool                                                         [DEBUG ] Flip Text;                                // 0x470(0x1)
	bool                                                         IsStartIndex;                                      // 0x471(0x1)
	bool                                                         IsEndIndex;                                        // 0x472(0x1)
	Class SplineComponent*                                       GeneratedTopSpline;                                // 0x478(0x8)
	float                                                        MinTopSplineHeight;                                // 0x480(0x4)
	bool                                                         AllowTerrainToDrop;                                // 0x484(0x1)
	bool                                                         AllowTerrainToRaise;                               // 0x485(0x1)
	bool                                                         IgnoreTerrainForTopSpline;                         // 0x486(0x1)
	float                                                        TerrainBlendWidth;                                 // 0x488(0x4)
	float                                                        TerrainBlendFallOff;                               // 0x48c(0x4)
	float                                                        TopSplineRollAmount;                               // 0x490(0x4)
	float                                                        IntersectionAmount;                                // 0x494(0x4)
	bool                                                         [[-----REBUILD SPLINE ----]];                      // 0x498(0x1)
	Class Landscape*                                             terrain_component;                                 // 0x4a0(0x8)
	bool                                                         UseDetailedTopSpline;                              // 0x4a8(0x1)
	int                                                          NumberOfDetailedSplinePoints;                      // 0x4ac(0x4)
	bool                                                         [DEBUG ] Display Intersection Names;               // 0x4b0(0x1)
	Struct FString                                               TagToIgnore;                                       // 0x4b8(0x10)
	TArray<class Actor*>                                         ActorsToIgnore;                                    // 0x4c8(0x10)
	bool                                                         [[------DEFORM TERRAIN ------]];                   // 0x4d8(0x1)
	Struct HitResult                                             HirResult;                                         // 0x4dc(0x80)
	TArray<Struct Vector>                                        TopSplineIntersectionPoints;                       // 0x560(0x10)
	TArray<class Actor*>                                         Local_InternalActorsToIgnore;                      // 0x570(0x10)
	Struct LinearColor                                           TopSplineColour;                                   // 0x580(0x10)
	Struct LinearColor                                           BottomSplineColour;                                // 0x590(0x10)
	bool                                                         Is Reflected;                                      // 0x5a0(0x1)
	byte                                                         DrawDebugLines;                                    // 0x5a1(0x1)
	bool                                                         Affect Rain;                                       // 0x5a2(0x1)
};


}