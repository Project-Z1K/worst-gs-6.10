#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CustomFilterRow.CustomFilterRow_C
// 0x0030 (0x0B48 - 0x0B18)
class UCustomFilterRow_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B18(0x0008) (Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                       CheckStateSwitcher;                                       // 0x0B20(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            FilterText;                                               // 0x0B28(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsChecked;                                               // 0x0B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortInventoryCustomFilter                         Filter;                                                   // 0x0B31(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B32(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCustomFilterToggled;                                    // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomFilterRow.CustomFilterRow_C");
		return ptr;
	}


	void SetCheckedState(bool IsChecked);
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void BP_OnClicked();
	void ExecuteUbergraph_CustomFilterRow(int EntryPoint);
	void OnCustomFilterToggled__DelegateSignature(EFortInventoryCustomFilter Filter, bool IsChecked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
