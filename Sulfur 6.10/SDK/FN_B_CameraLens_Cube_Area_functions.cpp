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

// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CameraLens_Cube_Area_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.UserConstructionScript");

	AB_CameraLens_Cube_Area_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Cube_Area_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ReceiveBeginPlay");

	AB_CameraLens_Cube_Area_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ExecuteUbergraph_B_CameraLens_Cube_Area
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraLens_Cube_Area_C::ExecuteUbergraph_B_CameraLens_Cube_Area(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ExecuteUbergraph_B_CameraLens_Cube_Area");

	AB_CameraLens_Cube_Area_C_ExecuteUbergraph_B_CameraLens_Cube_Area_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
