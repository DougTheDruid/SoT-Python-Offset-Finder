#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0xa0 (Full Size[0xa70] - InheritedSize[0x9d0]
class BP_Mast_C: public Mast
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x9d0(0x8)
	class StaticMeshComponent*                                   MastTopComponent;                                  // 0x9d8(0x8)
	class ChildActorComponent*                                   TopgallantActor;                                   // 0x9e0(0x8)
	class ChildActorComponent*                                   MainsailActor;                                     // 0x9e8(0x8)
	class ChildActorComponent*                                   TopsailActor;                                      // 0x9f0(0x8)
	class StaticMeshComponent*                                   Main Yard;                                         // 0x9f8(0x8)
	class StaticMeshComponent*                                   Topgallant Yard;                                   // 0xa00(0x8)
	class StaticMeshComponent*                                   Top Yard;                                          // 0xa08(0x8)
	class StaticMeshComponent*                                   MastBaseComponent;                                 // 0xa10(0x8)
	TArray<struct BP_SailStructure>                              Sail Parameters;                                   // 0xa18(0x10)
	TArray<class StaticMeshComponent*>                           Yards;                                             // 0xa28(0x10)
	TArray<class ChildActorComponent*>                           Sails;                                             // 0xa38(0x10)
	class MaterialInstance*                                      Sail Material;                                     // 0xa48(0x8)
	TArray<class BP_Sail_C*>                                     SailActors;                                        // 0xa50(0x10)
	class DecalComponent*                                        DamageDecalRight;                                  // 0xa60(0x8)
	class DecalComponent*                                        DamageDecalLeft;                                   // 0xa68(0x8)
};


