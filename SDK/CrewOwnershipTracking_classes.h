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
// Classes
//---------------------------------------------------------------------------

// Class CrewOwnershipTracking.CrewOwnershipTrackingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrewOwnershipTrackingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CrewOwnershipTracking.CrewSpawnOwnershipTrackingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrewSpawnOwnershipTrackingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewSpawnOwnershipTrackingInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CrewOwnershipTracking.CustomCrewTrackingInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomCrewTrackingInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CrewOwnershipTracking.CustomCrewTrackingInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CrewOwnershipTracking.CrewOwnershipTrackingComponent
// 0x00A8 (FullSize[0x0170] - InheritedSize[0x00C8])
class UCrewOwnershipTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_WIZ1[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       SpawningCrewId;                                            // 0x00E0(0x0010) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGuid                                       CurrentOwnedByCrewId;                                      // 0x00F0(0x0010) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FOwnerListEntry                             PreviousOwnedByCrewIdList;                                 // 0x0100(0x0010) (Net)
	TMap<struct FName, struct FOwnerListEntry>         CustomTrackingMap;                                         // 0x0110(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData_Q8DP[0x10];                                    // 0x0160(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrewOwnershipTrackingControlInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CrewOwnershipTracking.CrewOwnershipTrackingControlInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
