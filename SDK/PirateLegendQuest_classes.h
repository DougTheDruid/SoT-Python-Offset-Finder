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

// Class PirateLegendQuest.VeilOfTheAncients
// 0x0018 (FullSize[0x0410] - InheritedSize[0x03F8])
class AVeilOfTheAncients : public AInteractableBase
{
public:
	float                                              NumberOfGems;                                              // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5Z7E[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULockComponent*                              LockComponent;                                             // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PirateLegendQuest.VeilOfTheAncients");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PirateLegendQuest.VeilService
// 0x0100 (FullSize[0x0160] - InheritedSize[0x0060])
class UVeilService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData_YWJZ[0x20];                                    // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorld*                                      World;                                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameState*                                  GameState;                                                 // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_960T[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVeilOfTheAncients*                          TrackedVeil;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AShip*                                       Ship;                                                      // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9FEJ[0xB8];                                    // 0x00A8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PirateLegendQuest.VeilService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PirateLegendQuest.GetVeilOfTheAncientsStep
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UGetVeilOfTheAncientsStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PirateLegendQuest.GetVeilOfTheAncientsStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PirateLegendQuest.VeilOfTheAncientsServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVeilOfTheAncientsServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PirateLegendQuest.VeilOfTheAncientsServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PirateLegendQuest.GetVeilOfTheAncientsStepDesc
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UGetVeilOfTheAncientsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         QuestVeil;                                                 // 0x0080(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PirateLegendQuest.GetVeilOfTheAncientsStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
