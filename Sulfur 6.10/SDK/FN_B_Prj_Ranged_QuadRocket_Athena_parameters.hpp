#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.UserConstructionScript
struct AB_Prj_Ranged_QuadRocket_Athena_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.PPFader__FinishedFunc
struct AB_Prj_Ranged_QuadRocket_Athena_C_PPFader__FinishedFunc_Params
{
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.PPFader__UpdateFunc
struct AB_Prj_Ranged_QuadRocket_Athena_C_PPFader__UpdateFunc_Params
{
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnBounce
struct AB_Prj_Ranged_QuadRocket_Athena_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnStop
struct AB_Prj_Ranged_QuadRocket_Athena_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveBeginPlay
struct AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.FuseTimerMax
struct AB_Prj_Ranged_QuadRocket_Athena_C_FuseTimerMax_Params
{
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnExploded
struct AB_Prj_Ranged_QuadRocket_Athena_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveTick
struct AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveDestroyed
struct AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnTouched
struct AB_Prj_Ranged_QuadRocket_Athena_C_OnTouched_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveHit
struct AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_QuadRocket_Athena
struct AB_Prj_Ranged_QuadRocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_QuadRocket_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
