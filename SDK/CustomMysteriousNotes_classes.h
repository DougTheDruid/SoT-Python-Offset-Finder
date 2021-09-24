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

// Class CustomMysteriousNotes.CustomMysteriousNotesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomMysteriousNotesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomMysteriousNotes.CustomMysteriousNotesInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CustomMysteriousNotes.CustomMysteriousNotesService
// 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
class ACustomMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData_BK9D[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, struct FCustomPlayerNoteList>            CustomMysteriousNotes;                                     // 0x03D8(0x0050) (ZeroConstructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomMysteriousNotes.CustomMysteriousNotesService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
