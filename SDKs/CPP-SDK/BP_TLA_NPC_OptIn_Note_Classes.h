#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0xe8 (Full Size[0x630] - InheritedSize[0x548]
class BP_TLA_NPC_OptIn_Note_C: public NPCOnSurface
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x548(0x8)
	class AppearComponent*                                       Appear;                                            // 0x550(0x8)
	class StaticMeshComponent*                                   shroud_mask;                                       // 0x558(0x8)
	class StaticMeshComponent*                                   Shroud;                                            // 0x560(0x8)
	class VoteAudioComponent*                                    VoteAudio;                                         // 0x568(0x8)
	class InlineVotingInteractionComponent*                      InlineVotingInteraction;                           // 0x570(0x8)
	class StaticMeshVoteVisualiserComponent*                     StaticMeshVoteVisualiser;                          // 0x578(0x8)
	class StaticMeshComponent*                                   StaticMesh4;                                       // 0x580(0x8)
	class StaticMeshComponent*                                   StaticMesh3;                                       // 0x588(0x8)
	class StaticMeshComponent*                                   StaticMesh2;                                       // 0x590(0x8)
	class StaticMeshComponent*                                   StaticMesh1;                                       // 0x598(0x8)
	class StaticMeshComponent*                                   StaticMesh;                                        // 0x5a0(0x8)
	class ParticleSystemComponent*                               ParticleSystem;                                    // 0x5a8(0x8)
	class ActionRulesInteractableComponent*                      ActionRulesInteractable;                           // 0x5b0(0x8)
	class ActionRulesComponent*                                  ActionRules;                                       // 0x5b8(0x8)
	class InteractableGrammaticalGenderComponent*                InteractableGrammaticalGender;                     // 0x5c0(0x8)
	class NPCDialogComponent*                                    NPCDialog;                                         // 0x5c8(0x8)
	class AnimNotifyWwiseEmitterComponent*                       AnimNotifyWwiseEmitter;                            // 0x5d0(0x8)
	float                                                        Timeline_1_GhostBloom_073EA3DB4C21DAE58AD21095DF12C67A; // 0x5d8(0x4)
	float                                                        Timeline_1_GhostOpacity_073EA3DB4C21DAE58AD21095DF12C67A; // 0x5dc(0x4)
	float                                                        Timeline_1_EffectScale_073EA3DB4C21DAE58AD21095DF12C67A; // 0x5e0(0x4)
	char                                                         Timeline_1__Direction_073EA3DB4C21DAE58AD21095DF12C67A; // 0x5e4(0x1)
	char                                                         pad0x3_7FU8Y[0x3];                                 // 0x5e5(0x3)
	class TimelineComponent*                                     Timeline;                                          // 0x5e8(0x8)
	float                                                        Timeline_0_GhostBloom_F50D254C4C6E160F3FF345A1BD22E356; // 0x5f0(0x4)
	float                                                        Timeline_0_GhostOpacity_F50D254C4C6E160F3FF345A1BD22E356; // 0x5f4(0x4)
	float                                                        Timeline_0_EffectScale_F50D254C4C6E160F3FF345A1BD22E356; // 0x5f8(0x4)
	char                                                         Timeline_0__Direction_F50D254C4C6E160F3FF345A1BD22E356; // 0x5fc(0x1)
	char                                                         pad0x3_PH3HQ[0x3];                                 // 0x5fd(0x3)
	class TimelineComponent*                                     Timeline;                                          // 0x600(0x8)
	bool                                                         IsPendragonVisible;                                // 0x608(0x1)
	char                                                         pad0x7_35L4S[0x7];                                 // 0x609(0x7)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x610(0x10)
	TArray<class MeshComponent*>                                 MeshComponentArray;                                // 0x620(0x10)
};


