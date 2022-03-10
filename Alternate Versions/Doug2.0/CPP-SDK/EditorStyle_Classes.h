namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68
class EditorStyleSettings: public Object
{
public:
	Struct LinearColor                                 SelectionColor                                     // 0x28(0x10)
	Struct LinearColor                                 PressedSelectionColor                              // 0x38(0x10)
	Struct LinearColor                                 InactiveSelectionColor                             // 0x48(0x10)
	Struct LinearColor                                 KeyboardFocusColor                                 // 0x58(0x10)
	byte                                               ColorVisionDeficiencyPreviewType                   // 0x68(0x1)
	bool                                               bUseSmallToolBarIcons                              // 0x6c(0x1)
	bool                                               bEnableWindowAnimations                            // 0x6c(0x1)
	bool                                               bShowFriendlyNames                                 // 0x6c(0x1)
	bool                                               bExpandConfigurationMenus                          // 0x6c(0x1)
	bool                                               bShowProjectMenus                                  // 0x6c(0x1)
	bool                                               bShowLaunchMenus                                   // 0x6c(0x1)
	byte                                               LogTimestampMode                                   // 0x70(0x1)
	bool                                               bOpenAssetEditorTabsInNewWindow                    // 0x71(0x1)
};


}