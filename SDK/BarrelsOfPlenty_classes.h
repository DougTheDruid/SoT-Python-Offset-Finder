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

// Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class ABarrelsOfPlentyDebugSpawnLocation : public AActor
{
public:
	TArray<struct FBarrelsOfPlentyDebugLocationEntry>  Objects;                                                   // 0x03D0(0x0010) (Net, ZeroConstructor)
	struct FVector                                     SpawnCentre;                                               // 0x03E0(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x03EC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class ABarrelsOfPlentySpawnProxy : public AActor
{
public:
	class AShip*                                       Ship;                                                      // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D04K[0x18];                                    // 0x03D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class USpawnBarrelsOfPlentyStep : public UTaleQuestStep
{
public:
	class USpawnBarrelsOfPlentyStepDesc*               Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpawnBarrelsOfPlentyStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        LocatorVar;                                                // 0x0030(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
