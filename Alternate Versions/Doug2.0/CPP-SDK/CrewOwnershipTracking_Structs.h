namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class CrewTrackedItemOwnershipSet: public None
{
public:
	Class Actor*                                       Item                                               // 0x0(0x8)
	Struct Guid                                        CrewId                                             // 0x8(0x10)
};


// Size 0x30
class CrewTrackedItemOwnershipChanged: public None
{
public:
	Class Actor*                                       Item                                               // 0x0(0x8)
	Struct Guid                                        CrewId                                             // 0x8(0x10)
	Struct Guid                                        PreviousCrewId                                     // 0x18(0x10)
	bool                                               IsFirstTimeOwnedByThisCrew                         // 0x28(0x1)
};


// Size 0x10
class OwnerListEntry: public None
{
public:
	TArray<Struct TrackItemOwnershipEvent>             OwnerList                                          // 0x0(0x10)
};


// Size 0x18
class TrackItemOwnershipEvent: public None
{
public:
	Class Actor*                                       TrackedItem                                        // 0x0(0x8)
};


}