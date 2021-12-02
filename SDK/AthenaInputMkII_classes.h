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

// Class AthenaInputMkII.AthenaCharacterBaseMovementComponent
// 0x0128 (FullSize[0x0278] - InheritedSize[0x0150])
class UAthenaCharacterBaseMovementComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_S0JR[0x128];                                   // 0x0150(0x0128) MISSED OFFSET (PADDING)


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
	unsigned char                                      UnknownData_0MEV[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInputMkII.AthenaCharacterBaseMovementComponentWithInterference");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaInputMkII.MovementInterferenceComponent
// 0x0070 (FullSize[0x01C0] - InheritedSize[0x0150])
class UMovementInterferenceComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData_O6U1[0x70];                                    // 0x0150(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaInputMkII.MovementInterferenceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
