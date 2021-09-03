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

// Class Slate.ButtonWidgetStyle
// 0x02A8 (FullSize[0x02D8] - InheritedSize[0x0030])
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                               // 0x0030(0x02A8) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.CheckBoxWidgetStyle
// 0x05F0 (FullSize[0x0620] - InheritedSize[0x0030])
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                             // 0x0030(0x05F0) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ComboBoxWidgetStyle
// 0x0428 (FullSize[0x0458] - InheritedSize[0x0030])
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                             // 0x0030(0x0428) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ComboButtonWidgetStyle
// 0x03E0 (FullSize[0x0410] - InheritedSize[0x0030])
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                          // 0x0030(0x03E0) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.EditableTextBoxWidgetStyle
// 0x0860 (FullSize[0x0890] - InheritedSize[0x0030])
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                      // 0x0030(0x0860) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.EditableTextWidgetStyle
// 0x0228 (FullSize[0x0258] - InheritedSize[0x0030])
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                         // 0x0030(0x0228) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ProgressWidgetStyle
// 0x01B8 (FullSize[0x01E8] - InheritedSize[0x0030])
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                          // 0x0030(0x01B8) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ScrollBarWidgetStyle
// 0x0518 (FullSize[0x0548] - InheritedSize[0x0030])
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0030(0x0518) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ScrollBoxWidgetStyle
// 0x0248 (FullSize[0x0278] - InheritedSize[0x0030])
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                            // 0x0030(0x0248) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.SpinBoxWidgetStyle
// 0x0318 (FullSize[0x0348] - InheritedSize[0x0030])
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                              // 0x0030(0x0318) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.TextBlockWidgetStyle
// 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                            // 0x0030(0x0160) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
