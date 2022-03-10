namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class BP_Seagull01_8POI_C: public Seagulls
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x428(0x8)
	Class WwiseEmitterComponent*                       WwiseEmitter1                                      // 0x430(0x8)
	Class WwiseEmitterComponent*                       WwiseEmitter                                       // 0x438(0x8)
	Class StaticMeshComponent*                         wil_seagull_01_ProcAnim8                           // 0x440(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x448(0x8)
	Class MaterialInterface*                           seagulls_MI                                        // 0x450(0x8)
	Class MaterialInstanceDynamic*                     seagulls_MT                                        // 0x458(0x8)
	float                                              FadeTime                                           // 0x460(0x4)
	Class MaterialInterface*                           seagulls_MI_LOD                                    // 0x468(0x8)
	Class MaterialInstanceDynamic*                     seagulls_MT_LOD                                    // 0x470(0x8)
	Class WwiseEvent*                                  WwiseEvent                                         // 0x478(0x8)
};


// Size 0x0
class BP_Seagulls_Barrels_C: public BP_Seagull01_8POI_C
{
public:
};


// Size 0x28
class BP_Seagull01_32POI_Circling_Shipwreck_C: public Actor
{
public:
	Class WwiseEmitterComponent*                       WwiseEmitter2                                      // 0x3d0(0x8)
	Class WwiseEmitterComponent*                       WwiseEmitter1                                      // 0x3d8(0x8)
	Class WwiseEmitterComponent*                       WwiseEmitter                                       // 0x3e0(0x8)
	Class StaticMeshComponent*                         wil_seagull_01_ProcAnim32                          // 0x3e8(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x3f0(0x8)
};


}