namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xe0
class BreakableActorAudioComponent: public ActorComponent
{
public:
	bool                                               UseParentEmitter                                   // 0xc8(0x1)
	Class WwiseObjectPoolWrapper*                      AudioPool                                          // 0xd0(0x8)
	Class WwiseEvent*                                  PlayMusicEvent                                     // 0xd8(0x8)
	Class WwiseEvent*                                  StopMusicEvent                                     // 0xe0(0x8)
	Class WwiseEvent*                                  PlayDamagedEvent                                   // 0xe8(0x8)
	Class WwiseEvent*                                  PlayDestroyedEvent                                 // 0xf0(0x8)
};


// Size 0x180
class BreakableActorBase: public Actor
{
public:
	float                                              DespawnDelay                                       // 0x3f0(0x4)
	Class PrimitiveComponent*                          ThirdPersonMesh                                    // 0x418(0x8)
	Class HealthComponent*                             HealthComponent                                    // 0x420(0x8)
	Class BreakableActorAudioComponent*                AudioComponent                                     // 0x428(0x8)
	Class BreakableActorVfxComponent*                  VFXComponent                                       // 0x430(0x8)
	Class BreakableActorDynamicMaterialComponent*      DamageMaterialComponent                            // 0x438(0x8)
	Class ActorDamageableComponent*                    DamageableComponent                                // 0x440(0x8)
};


// Size 0x0
class BreakableSarcophagus: public BreakableActorBase
{
public:
};


// Size 0x128
class BreakableActorDynamicMaterialComponent: public ActorComponent
{
public:
	struct FName                                       MagicColourPropertyName                            // 0xcc(0x8)
	struct FName                                       DamageLevelPropertyName                            // 0xd4(0x8)
	struct FName                                       TimeBasedPropertyName                              // 0xdc(0x8)
	struct FName                                       HitPositionPropertyName                            // 0xe4(0x8)
	struct FName                                       CollapseStartTimePropertyName                      // 0xec(0x8)
	Class PrimitiveComponent*                          TargetMesh                                         // 0xf8(0x8)
	TArray<class DynamicMaterials*>                    DynamicMaterials                                   // 0x100(0x10)
	Class BreakableActorBase*                          BreakableActor                                     // 0x110(0x8)
};


// Size 0x70
class BreakableActorItemSpawnComponent: public ItemSpawnComponent
{
public:
};


// Size 0xd8
class BreakableActorVfxComponent: public ActorComponent
{
public:
	Struct Color                                       VFXTintColour                                      // 0xc8(0x4)
	Class Object*                                      DamagedParticleSystem                              // 0xd0(0x8)
	Class Object*                                      DestroyedParticleSystem                            // 0xd8(0x8)
	int                                                GlowMaterialIndex                                  // 0xe0(0x4)
	struct FName                                       GlowMaterialPropertyName                           // 0xe4(0x8)
	float                                              GlowMaterialScale                                  // 0xec(0x4)
	float                                              GlowMaterialBias                                   // 0xf0(0x4)
	float                                              GlowUpdateSpeed                                    // 0xf4(0x4)
	Class BreakableActorBase*                          BreakableActor                                     // 0xf8(0x8)
	Class MaterialInstanceDynamic*                     GlowMaterial                                       // 0x100(0x8)
};


}