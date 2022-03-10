namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class GetRivalCrewIdForInvasionStep: public TaleQuestStep
{
public:
};


// Size 0x0
class InvasionServiceInterface: public Interface
{
public:
};


// Size 0x58
class InvasionService: public Actor
{
public:
};


// Size 0x40
class GetRivalCrewIdForInvasionStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                           RivalCrewId                                        // 0x80(0x20)
	Struct QuestVariableActor                          RivalCrewShip                                      // 0xa0(0x20)
};


// Size 0x8
class NotifyCrewOfInvasionStep: public TaleQuestStep
{
public:
	Class NotifyCrewOfInvasionStepDesc*                StepDesc                                           // 0x90(0x8)
};


// Size 0x20
class NotifyCrewOfInvasionStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                           RivalCrewId                                        // 0x80(0x20)
};


// Size 0x8
class TeleportShipToRivalCrewStep: public TaleQuestStep
{
public:
	Class TeleportShipToRivalCrewStepDesc*             StepDesc                                           // 0x90(0x8)
};


// Size 0x28
class TeleportShipToRivalCrewStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                           RivalCrewId                                        // 0x80(0x20)
	float                                              DistanceOffsetMetres                               // 0xa0(0x4)
};


}