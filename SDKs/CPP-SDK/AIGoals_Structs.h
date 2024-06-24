#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x40
struct HasAllActionContextTagsCondition
{
public:
	TArray<class Class*>                                         RequiredContextTags;                               // 0x28(0x10)
	bool                                                         ExpectedValue;                                     // 0x38(0x1)
};


// Size 0x34
struct BestActionSpotSelectionCriteria
{
public:
	bool                                                         PreferActionSpotsRelativeToTargetForwardFacingDirection; // 0x0(0x1)
	float                                                        ForwardFacingPreferenceMinAngleInDegrees;          // 0x4(0x4)
	float                                                        ForwardFacingPreferenceMaxAngleInDegrees;          // 0x8(0x4)
	float                                                        ForwardFacingPreferenceMinDistance;                // 0xc(0x4)
	float                                                        ForwardFacingPreferenceMaxDistance;                // 0x10(0x4)
	bool                                                         PreferStayingAtCurrentSpotOverMovingToNewSpot;     // 0x14(0x1)
	float                                                        StayingPreferenceDistance;                         // 0x18(0x4)
	bool                                                         PreferActionSpotsCloserToSelf;                     // 0x1c(0x1)
	float                                                        MaximumDistanceAllowedFromTarget;                  // 0x20(0x4)
	bool                                                         ShouldAlwaysRefreshWhileOwnerMoving;               // 0x24(0x1)
	bool                                                         ShouldRefreshAfterTargetMovesBeyondThreshold;      // 0x25(0x1)
	float                                                        TargetMovementRefreshThresholdDistance;            // 0x28(0x4)
	bool                                                         ShouldRefreshAfterStayingForTooLong;               // 0x2c(0x1)
	float                                                        RefreshTimeInSeconds;                              // 0x30(0x4)
};


