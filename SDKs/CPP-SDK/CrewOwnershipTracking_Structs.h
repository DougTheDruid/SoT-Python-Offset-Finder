#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18
struct CrewTrackedItemOwnershipSet
{
public:
	class Actor*                                                 Item;                                              // 0x0(0x8)
	struct Guid                                                  CrewId;                                            // 0x8(0x10)
};


// Size 0x18
struct TrackItemOwnershipEvent
{
public:
	class Actor*                                                 TrackedItem;                                       // 0x0(0x8)
	interface                                                    CrewMembershipInterface;                           // 0x8(0x10)
};


// Size 0x30
struct CrewTrackedItemOwnershipChanged
{
public:
	class Actor*                                                 Item;                                              // 0x0(0x8)
	struct Guid                                                  CrewId;                                            // 0x8(0x10)
	struct Guid                                                  PreviousCrewId;                                    // 0x18(0x10)
	bool                                                         IsFirstTimeOwnedByThisCrew;                        // 0x28(0x1)
};


// Size 0x10
struct OwnerListEntry
{
public:
	TArray<struct Guid>                                          OwnerList;                                         // 0x0(0x10)
};


