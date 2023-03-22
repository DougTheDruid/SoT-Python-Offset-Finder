// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WarMapStateInterface: public Interface
{
public:
};


// Size 0xa0 (Full Size[0x1c8] - InheritedSize[0x128]
class WarMapInteractionComponent: public InteractableComponent
{
public:
	char                                                         pad0x8_Y17YH[0x8];                                 // 0x128(0x8)
	Struct FText                                                 OpenMapInteractionText;                            // 0x130(0x38)
	Struct FText                                                 CannotOpenMapInteractionText;                      // 0x168(0x38)
	class                                                        OpenMapInputId;                                    // 0x1a0(0x8)
	char                                                         pad0x20_ACAT5[0x20];                               // 0x1a8(0x20)
};


// Size 0x10 (Full Size[0x160] - InheritedSize[0x150]
class WarMapInteractionVoteComponent: public InlineVotingInteractionComponent
{
public:
};


// Size 0xe8 (Full Size[0x118] - InheritedSize[0x30]
class WarMapVoteConsumerBase: public VoteConsumerInlineBase
{
public:
	Class WarMapVoteValidatorBase*                               Validator;                                         // 0x30(0x8)
	Class Actor*                                                 OwningActor;                                       // 0x38(0x8)
	bool                                                         IsHardMode;                                        // 0x40(0x1)
	char                                                         pad0x67_KUKK2[0x67];                               // 0x41(0x67)
	TArray<class PlayerState*>                                   Votes;                                             // 0xa8(0x10)
	Class BoxedRpcDispatcherComponent*                           RpcDispatcher;                                     // 0xb8(0x8)
	char                                                         pad0x58_NZMK3[0x58];                               // 0xc0(0x58)
};


// Size 0x1c0 (Full Size[0x2d8] - InheritedSize[0x118]
class StartWarMapVoyageVoteConsumer: public WarMapVoteConsumerBase
{
public:
	Struct FText                                                 WarMapVotingCastVote;                              // 0x118(0x38)
	Struct FText                                                 WarMapVotingCantVote;                              // 0x150(0x38)
	Struct FText                                                 WarMapVotingRemoveVote;                            // 0x188(0x38)
	Struct FText                                                 WarMapVotingCantRemoveVote;                        // 0x1c0(0x38)
	Struct FText                                                 WarMapVotingCantVoteReasonCrewOnInvasion;          // 0x1f8(0x38)
	Struct FText                                                 WarMapVotingCantVoteReasonNearbyRivalShip;         // 0x230(0x38)
	Struct FText                                                 WarMapVotingCantVoteReasonCrewIsInPVEEncounter;    // 0x268(0x38)
	Struct FText                                                 WarMapVotingCantVoteReasonInTunnelOfTheDamned;     // 0x2a0(0x38)
};


// Size 0xe0 (Full Size[0x1f8] - InheritedSize[0x118]
class StopWarMapVoyageVoteConsumer: public WarMapVoteConsumerBase
{
public:
	Struct FText                                                 WarMapVotingCastVote;                              // 0x118(0x38)
	Struct FText                                                 WarMapVotingCantVote;                              // 0x150(0x38)
	Struct FText                                                 WarMapVotingRemoveVote;                            // 0x188(0x38)
	Struct FText                                                 WarMapVotingCantRemoveVote;                        // 0x1c0(0x38)
};


// Size 0x248 (Full Size[0x610] - InheritedSize[0x3c8]
class WarMapVoteInteractionActor: public Actor
{
public:
	char                                                         pad0x10_3TWB5[0x10];                               // 0x3c8(0x10)
	float                                                        TooltipUIFadeDuration;                             // 0x3d8(0x4)
	Struct Vector2D                                              TooltipUIScreenSpaceOffsetRatio;                   // 0x3dc(0x8)
	char                                                         pad0x4_8R1S7[0x4];                                 // 0x3e4(0x4)
	Class StaticMeshComponent*                                   InvasionActiveMesh;                                // 0x3e8(0x8)
	TArray<struct FactionInfos>                                  FactionInfos;                                      // 0x3f0(0x10)
	TArray<struct FactionInfoPtrs>                               FactionInfoPtrs;                                   // 0x400(0x10)
	char                                                         pad0x200_HCAOT[0x200];                             // 0x410(0x200)
};


// Size 0xe8 (Full Size[0x118] - InheritedSize[0x30]
class WarMapVoteValidatorBase: public VoteValidatorInlineBase
{
public:
	Class WarMapVoteConsumerBase*                                Consumer;                                          // 0x30(0x8)
	Class Actor*                                                 OwningActor;                                       // 0x38(0x8)
	float                                                        UpdateIsCrewInPVEEncounterInterval;                // 0x40(0x4)
	bool                                                         IsCrewInPVEEncounterCached;                        // 0x44(0x1)
	bool                                                         ShowWithHardMode;                                  // 0x45(0x1)
	char                                                         pad0xd2_KEBX2[0xd2];                               // 0x46(0xd2)
};


// Size 0x0 (Full Size[0x118] - InheritedSize[0x118]
class StartWarMapVoyageVoteValidator: public WarMapVoteValidatorBase
{
public:
};


// Size 0x8 (Full Size[0x120] - InheritedSize[0x118]
class StopWarMapVoyageVoteValidator: public WarMapVoteValidatorBase
{
public:
	bool                                                         ShowWhenInHardModeMatchmaking;                     // 0x118(0x1)
	char                                                         pad0x7_F2P0X[0x7];                                 // 0x119(0x7)
};


}