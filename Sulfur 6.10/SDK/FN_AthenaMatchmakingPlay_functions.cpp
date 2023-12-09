// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::OpenPlayOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions");

	UAthenaMatchmakingPlay_C_OpenPlayOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingPlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct");

	UAthenaMatchmakingPlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
// (Event, Public, BlueprintEvent)

void UAthenaMatchmakingPlay_C::OnAvailablePlaylistsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated");

	UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShowPlayButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::OnPlayButtonUpdated(bool* bShowPlayButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated");

	UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params params;
	params.bShowPlayButton = bShowPlayButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetPlayButtonText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  PlayButtonText                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlay_C::OnSetPlayButtonText(struct FText* PlayButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetPlayButtonText");

	UAthenaMatchmakingPlay_C_OnSetPlayButtonText_Params params;
	params.PlayButtonText = PlayButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetCancelButtonText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  CancelButtonText               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlay_C::OnSetCancelButtonText(struct FText* CancelButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetCancelButtonText");

	UAthenaMatchmakingPlay_C_OnSetCancelButtonText_Params params;
	params.CancelButtonText = CancelButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData*  NewPlaylist                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  PlaylistCMSOverrideName        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EFortLobbyType*                LobbyType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::PlaylistChanged(struct FPlaylistFrontEndData* NewPlaylist, struct FText* PlaylistCMSOverrideName, EFortLobbyType* LobbyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChanged");

	UAthenaMatchmakingPlay_C_PlaylistChanged_Params params;
	params.NewPlaylist = NewPlaylist;
	params.PlaylistCMSOverrideName = PlaylistCMSOverrideName;
	params.LobbyType = LobbyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetSquadFillText
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InCurrentSquadFill             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::SetSquadFillText(bool* InCurrentSquadFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetSquadFillText");

	UAthenaMatchmakingPlay_C_SetSquadFillText_Params params;
	params.InCurrentSquadFill = InCurrentSquadFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnNewModeViolatorUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::OnNewModeViolatorUpdated(bool* bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnNewModeViolatorUpdated");

	UAthenaMatchmakingPlay_C_OnNewModeViolatorUpdated_Params params;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Animate
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::Animate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Animate");

	UAthenaMatchmakingPlay_C_Animate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.UpdateCustomViolatorText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  ModeName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  SubText                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlay_C::UpdateCustomViolatorText(struct FText* ModeName, struct FText* SubText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.UpdateCustomViolatorText");

	UAthenaMatchmakingPlay_C_UpdateCustomViolatorText_Params params;
	params.ModeName = ModeName;
	params.SubText = SubText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::ExecuteUbergraph_AthenaMatchmakingPlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay");

	UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlaylistChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData   Playlist_Data                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Playlist_CMS_Override_Name     (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortLobbyType                 Lobby_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, const struct FText& Playlist_CMS_Override_Name, EFortLobbyType Lobby_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlaylistChanged__DelegateSignature");

	UAthenaMatchmakingPlay_C_OnPlaylistChanged__DelegateSignature_Params params;
	params.Playlist_Data = Playlist_Data;
	params.Playlist_CMS_Override_Name = Playlist_CMS_Override_Name;
	params.Lobby_Type = Lobby_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::PlaylistsUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature");

	UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
