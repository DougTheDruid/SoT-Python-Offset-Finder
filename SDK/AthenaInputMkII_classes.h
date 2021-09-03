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

// Class AthenaInputMkII.AthenaCharacterBaseMovementComponent
// 0x0128 (FullSize[0x0278] - InheritedSize[0x0150])
class UAthenaCharacterBaseMovementComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_D50T[0x128];                                   // 0x0150(0x0128) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInputMkII.AthenaCharacterBaseMovementComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UAthenaCharacterBaseMovementComponentWithInterference : public UAthenaCharacterBaseMovementComponent
{
public:
	unsigned char                                      UnknownData_7VJC[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInputMkII.MovementInterferenceComponent
// 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
class UMovementInterferenceComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_JFYZ[0x20];                                    // 0x0150(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInputMkII.MovementInterferenceComponent");
		return ptr;
	}



	void OnMoveRightInput(float Value);
	void OnMoveForwardInput(float Value);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
