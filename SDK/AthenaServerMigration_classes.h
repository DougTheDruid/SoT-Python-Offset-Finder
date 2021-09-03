#pragma once

// Name: SoT, Version: 2.2.1.1


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

// Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaServerMigrationGameAuthorityProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaServerMigration.AthenaServerMigrationGameAuthorityProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaServerMigration.MigrationServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMigrationServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaServerMigration.MigrationServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaServerMigration.RegisterServerMigrationPointOfInterestComponent
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
class URegisterServerMigrationPointOfInterestComponent : public UActorComponent
{
public:
	float                                              MigrationRadius;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2NAB[0x1C];                                    // 0x00CC(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaServerMigration.RegisterServerMigrationPointOfInterestComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaServerMigration.ServerMigrationGatherableActorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServerMigrationGatherableActorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaServerMigration.ServerMigrationGatherableActorInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
