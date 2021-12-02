#pragma once

// Name: SoT, Version: 2.4.0


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

// Class ShantyPuzzle.ShantyPuzzleInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShantyPuzzleInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShantyPuzzle.ShantyPuzzleInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ShantyPuzzle.ShantyPuzzleComponent
// 0x0110 (FullSize[0x03C0] - InheritedSize[0x02B0])
class UShantyPuzzleComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_BLZ7[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RequiredShantyItemDesc;                                    // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FShantyPuzzleInteractionZoneDefinition> ShantyPuzzleInteractionZoneDefinitions;                    // 0x02C0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Protected)
	bool                                               TimeLimited;                                               // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               ShouldMoveEnsembleToActorPosition;                         // 0x02D1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_VWXX[0x6];                                     // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameTimeRange                              ActiveTimeRange;                                           // 0x02D8(0x0010) (Edit, Protected)
	TArray<class UShantyPuzzleInteractionZoneComponent*> ShantyPuzzleInteractionZones;                              // 0x02E8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)
	class AEnsemble*                                   CurrentlyPlayingShantyPuzzleEnsemble;                      // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J9IB[0xC0];                                    // 0x0300(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShantyPuzzle.ShantyPuzzleComponent");
		return ptr;
	}



	void OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AfterRead();
	void BeforeDelete();

};

// Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class UShantyPuzzleInteractionZoneComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData_WL7D[0x20];                                    // 0x05B0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
