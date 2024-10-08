#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class GetVeilOfTheAncientsStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableActor                                    QuestVeil;                                         // 0x80(0x30)
};


// Size 0x120 (Full Size[0x180] - InheritedSize[0x60]
class VeilService: public TaleQuestService
{
public:
	class World*                                                 World;                                             // 0x80(0x8)
	class GameState*                                             GameState;                                         // 0x88(0x8)
	class VeilOfTheAncients*                                     TrackedVeil;                                       // 0x98(0x8)
	class Ship*                                                  Ship;                                              // 0xa0(0x8)
};


// Size 0x18 (Full Size[0x410] - InheritedSize[0x3f8]
class VeilOfTheAncients: public InteractableBase
{
public:
	float                                                        NumberOfGems;                                      // 0x3f8(0x4)
	class LockComponent*                                         LockComponent;                                     // 0x400(0x8)
	class StaticMeshComponent*                                   StaticMeshComponent;                               // 0x408(0x8)
};


