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

// Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ShockGrenade_RemoveFX_C::OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E");

	UGA_Athena_ShockGrenade_RemoveFX_C_OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_ShockGrenade_RemoveFX_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.K2_ActivateAbility");

	UGA_Athena_ShockGrenade_RemoveFX_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ShockGrenade_RemoveFX_C::ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX");

	UGA_Athena_ShockGrenade_RemoveFX_C_ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
