#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "BreakableActorFramework_Structs.h"


// Size 0x100 (Full Size[0x1c8] - InheritedSize[0xc8]
class BreakableActorAudioComponent: public ActorComponent
{
public:
	bool                                                         UseParentEmitter;                                  // 0xc8(0x1)
	class WwiseObjectPoolWrapper*                                AudioPool;                                         // 0xd0(0x8)
	class WwiseEvent*                                            PlayMusicEvent;                                    // 0xd8(0x8)
	class WwiseEvent*                                            StopMusicEvent;                                    // 0xe0(0x8)
	class WwiseEvent*                                            PlayDamagedEvent;                                  // 0xe8(0x8)
	class WwiseEvent*                                            PlayDestroyedEvent;                                // 0xf0(0x8)
};


// Size 0xf8 (Full Size[0x1c0] - InheritedSize[0xc8]
class BreakableActorVfxComponent: public ActorComponent
{
public:
	struct Color                                                 VFXTintColour;                                     // 0xc8(0x4)
	class Object*                                                DamagedParticleSystem;                             // 0xd0(0x8)
	class Object*                                                DestroyedParticleSystem;                           // 0xd8(0x8)
	int                                                          GlowMaterialIndex;                                 // 0xe0(0x4)
	struct FName                                                 GlowMaterialPropertyName;                          // 0xe4(0x8)
	float                                                        GlowMaterialScale;                                 // 0xec(0x4)
	float                                                        GlowMaterialBias;                                  // 0xf0(0x4)
	float                                                        GlowUpdateSpeed;                                   // 0xf4(0x4)
	class BreakableActorBase*                                    BreakableActor;                                    // 0xf8(0x8)
	class MaterialInstanceDynamic*                               GlowMaterial;                                      // 0x100(0x8)
};


// Size 0x158 (Full Size[0x220] - InheritedSize[0xc8]
class BreakableActorDynamicMaterialComponent: public ActorComponent
{
public:
	uint32                                                       MaterialElementIndex;                              // 0xc8(0x4)
	struct FName                                                 MagicColourPropertyName;                           // 0xcc(0x8)
	struct FName                                                 DamageLevelPropertyName;                           // 0xd4(0x8)
	struct FName                                                 TimeBasedPropertyName;                             // 0xdc(0x8)
	struct FName                                                 HitPositionPropertyName;                           // 0xe4(0x8)
	struct FName                                                 CollapseStartTimePropertyName;                     // 0xec(0x8)
	class PrimitiveComponent*                                    TargetMesh;                                        // 0xf8(0x8)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x100(0x10)
	class BreakableActorBase*                                    BreakableActor;                                    // 0x110(0x8)
};


// Size 0x190 (Full Size[0x558] - InheritedSize[0x3c8]
class BreakableActorBase: public Actor
{
public:
	float                                                        DespawnDelay;                                      // 0x3e8(0x4)
	multicastinlinedelegate                                      OnBreakableActorDamaged;                           // 0x3f0(0x10)
	multicastinlinedelegate                                      OnBreakableActorDestroyed;                         // 0x400(0x10)
	class PrimitiveComponent*                                    ThirdPersonMesh;                                   // 0x410(0x8)
	class HealthComponent*                                       HealthComponent;                                   // 0x418(0x8)
	class BreakableActorAudioComponent*                          AudioComponent;                                    // 0x420(0x8)
	class BreakableActorVfxComponent*                            VFXComponent;                                      // 0x428(0x8)
	class BreakableActorDynamicMaterialComponent*                DamageMaterialComponent;                           // 0x430(0x8)
	class ActorDamageableComponent*                              DamageableComponent;                               // 0x438(0x8)
};


