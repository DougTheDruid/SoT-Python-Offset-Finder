#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CrewOwnershipTracking.OwnerListEntry
// 0x0010
struct FOwnerListEntry
{
	TArray<struct FGuid>                               OwnerList;                                                 // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipSet
// 0x0018
struct FCrewTrackedItemOwnershipSet
{
	class AActor*                                      Item;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CrewOwnershipTracking.CrewTrackedItemOwnershipChanged
// 0x0030
struct FCrewTrackedItemOwnershipChanged
{
	class AActor*                                      Item;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       PreviousCrewId;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsFirstTimeOwnedByThisCrew;                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8CR6[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CrewOwnershipTracking.TrackItemOwnershipEvent
// 0x0018
struct FTrackItemOwnershipEvent
{
	class AActor*                                      TrackedItem;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      CrewMembershipInterface[0x10];                             // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty CrewOwnershipTracking.TrackItemOwnershipEvent.CrewMembershipInterface

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
