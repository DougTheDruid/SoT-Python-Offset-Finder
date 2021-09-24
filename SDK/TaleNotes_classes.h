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

// Class TaleNotes.TaleNote
// 0x0200 (FullSize[0x0970] - InheritedSize[0x0770])
class ATaleNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData_QU1W[0x10];                                    // 0x0770(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CanvasWidth;                                               // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CanvasHeight;                                              // 0x0784(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FontScale;                                                 // 0x0788(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OGU8[0x4];                                     // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFont*                                       Font;                                                      // 0x0790(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTreasureMapWidgetStreamedTexture           Image;                                                     // 0x0798(0x0030) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      TitleWidgetText;                                           // 0x07C8(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      BodyWidgetText;                                            // 0x07E8(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                 // 0x0808(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_99EX[0x4];                                     // 0x080C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Title;                                                     // 0x0810(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_MWF4[0x20];                                    // 0x080C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Body;                                                      // 0x0848(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_Q0EI[0x20];                                    // 0x0848(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                              // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                           // 0x0888(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                  // 0x0890(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UInventoryItemComponent*                     InventoryItemComponent;                                    // 0x0898(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JX8K[0xD0];                                    // 0x08A0(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleNotes.TaleNote");
		return ptr;
	}



	void OnTextCanvasUpdate(class UCanvas* InCanvas, int InWidth, int InHeight);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
