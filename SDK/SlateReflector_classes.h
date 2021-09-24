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

// Class SlateReflector.WidgetReflectorNodeBase
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UWidgetReflectorNodeBase : public UObject
{
public:
	struct FGeometry                                   Geometry;                                                  // 0x0028(0x0034) (IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_EY0J[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWidgetReflectorNodeBase*>            ChildNodes;                                                // 0x0060(0x0010) (ZeroConstructor, Protected)
	struct FLinearColor                                Tint;                                                      // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateReflector.WidgetReflectorNodeBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateReflector.LiveWidgetReflectorNode
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class ULiveWidgetReflectorNode : public UWidgetReflectorNodeBase
{
public:
	unsigned char                                      UnknownData_F5CS[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateReflector.LiveWidgetReflectorNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateReflector.SnapshotWidgetReflectorNode
// 0x0118 (FullSize[0x0198] - InheritedSize[0x0080])
class USnapshotWidgetReflectorNode : public UWidgetReflectorNodeBase
{
public:
	struct FText                                       CachedWidgetType;                                          // 0x0080(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_63OQ[0x20];                                    // 0x0080(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CachedWidgetVisibilityText;                                // 0x00B8(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_SVBL[0x20];                                    // 0x00B8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CachedWidgetReadableLocation;                              // 0x00F0(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_9X24[0x20];                                    // 0x00F0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     CachedWidgetFile;                                          // 0x0128(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                CachedWidgetLineNumber;                                    // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CachedWidgetAssetName;                                     // 0x013C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   CachedWidgetDesiredSize;                                   // 0x0144(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IWKX[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 CachedWidgetForegroundColor;                               // 0x0150(0x0030)
	struct FString                                     CachedWidgetAddress;                                       // 0x0180(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               CachedWidgetEnabled;                                       // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0QAO[0x7];                                     // 0x0191(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateReflector.SnapshotWidgetReflectorNode");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
