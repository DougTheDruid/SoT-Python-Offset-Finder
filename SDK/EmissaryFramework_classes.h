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

// Class EmissaryFramework.EmissaryLevelServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmissaryLevelServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryFramework.EmissaryLevelServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryFramework.EmissaryParticipantInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmissaryParticipantInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EmissaryFramework.EmissaryParticipantInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
