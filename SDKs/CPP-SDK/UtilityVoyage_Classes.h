#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class DispatchUtilityVoyageTaleStep: public TaleQuestStep
{
public:
	class DispatchUtilityVoyageTaleStepDesc*                     StepDesc;                                          // 0x98(0x8)
};


// Size 0xb0 (Full Size[0xd8] - InheritedSize[0x28]
class UtilityVoyageService: public Object
{
public:
	TArray<class CrewVoyageParticipant*>                         Participants;                                      // 0xb8(0x10)
	TArray<struct UtilityVoyageData>                             Voyages;                                           // 0xc8(0x10)
};


// Size 0x10 (Full Size[0x90] - InheritedSize[0x80]
class DispatchUtilityVoyageTaleStepDesc: public TaleQuestStepDesc
{
public:
	class VoyageDescDataAsset*                                   UtilityVoyageDesc;                                 // 0x80(0x8)
	bool                                                         Migratable;                                        // 0x88(0x1)
};


