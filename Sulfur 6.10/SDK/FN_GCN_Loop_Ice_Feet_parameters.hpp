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

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.UserConstructionScript
struct AGCN_Loop_Ice_Feet_C_UserConstructionScript_Params
{
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.OnLoopingStart
struct AGCN_Loop_Ice_Feet_C_OnLoopingStart_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>*           ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>*                    AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.OnRemoval
struct AGCN_Loop_Ice_Feet_C_OnRemoval_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>*           ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>*                    AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake**                               BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor**                                BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.BeginExpireTell
struct AGCN_Loop_Ice_Feet_C_BeginExpireTell_Params
{
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.ClearExpireTell
struct AGCN_Loop_Ice_Feet_C_ClearExpireTell_Params
{
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.ExpireWarningTick
struct AGCN_Loop_Ice_Feet_C_ExpireWarningTick_Params
{
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.On Player Step
struct AGCN_Loop_Ice_Feet_C_On_Player_Step_Params
{
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.On Target Pawn Hit Event
struct AGCN_Loop_Ice_Feet_C_On_Target_Pawn_Hit_Event_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.ReceiveTick
struct AGCN_Loop_Ice_Feet_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.On Target Pawn Landed
struct AGCN_Loop_Ice_Feet_C_On_Target_Pawn_Landed_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.On Target Pawn Movement Mode Changed
struct AGCN_Loop_Ice_Feet_C_On_Target_Pawn_Movement_Mode_Changed_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.ReceiveHit
struct AGCN_Loop_Ice_Feet_C_ReceiveHit_Params
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

// Function GCN_Loop_Ice_Feet.GCN_Loop_Ice_Feet_C.ExecuteUbergraph_GCN_Loop_Ice_Feet
struct AGCN_Loop_Ice_Feet_C_ExecuteUbergraph_GCN_Loop_Ice_Feet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
