#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BaseNPC

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "KuroAnim_structs.hpp"
#include "KuroAnim_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "ECharState_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_BaseNPC.ABP_BaseNPC_C
// 0x1A80 (0x1EE0 - 0x0460)
class UABP_BaseNPC_C : public UKuroAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0468(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x04A0(0x0060)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x0500(0x0070)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0570(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0598(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x05C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x05E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0610(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0638(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0660(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x06F0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0728(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x07B8(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x07F0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x0880(0x0038)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x08B8(0x00F8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x09B0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x09E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0A10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0A38(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0A60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0A88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0AB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0AD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0B00(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0B28(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0BB8(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0BF0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0C80(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0CB8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0D48(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0D80(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0E10(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x0E48(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0F90(0x0038)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0FC8(0x00F8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x10C0(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x10F8(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1240(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1278(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x13C0(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x13F8(0x0148)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x1540(0x0060)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x15A0(0x00D0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x1670(0x0060)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x16D0(0x00D0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x17A0(0x0038)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x17D8(0x00C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1898(0x0060)()
	struct FAnimNode_SightLock                    AnimGraphNode_SightLock;                           // 0x18F8(0x01B8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1AB0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1AD0(0x0020)()
	struct FAnimNode_RBF                          AnimGraphNode_RBF;                                 // 0x1AF0(0x0150)()
	struct FAnimNode_TextureFace                  AnimGraphNode_TextureFace;                         // 0x1C40(0x00C0)(ContainsInstancedReference)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1D00(0x0090)()
	struct FAnimNode_CombineCurves                AnimGraphNode_CombineCurves;                       // 0x1D90(0x0060)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1DF0(0x0060)()
	class ABP_BaseNPC_C*                          _r__;                                              // 0x1E50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ___e__;                                            // 0x1E58(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __;                                                // 0x1E64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____e;                                            // 0x1E68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IfPlayIdleAction;                                  // 0x1E69(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E6A[0x6];                                     // 0x1E6A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimMontage*>                   IdleMontageArray;                                  // 0x1E70(0x0010)(Edit, BlueprintVisible)
	class USkeletalMeshComponent*                 _rMesh;                                            // 0x1E80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __0l_;                                             // 0x1E88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E89[0x3];                                     // 0x1E89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _l____;                                            // 0x1E8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ____l__;                                           // 0x1E90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SightDirect;                                       // 0x1E94(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeingImpacted;                                   // 0x1EA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBeingAttacked;                                   // 0x1EA1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESightLockMode                                SightLockMode;                                     // 0x1EA2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EA3[0x1];                                     // 0x1EA3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         P___;                                              // 0x1EA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTurnLeft;                                        // 0x1EA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EA9[0x3];                                     // 0x1EA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               _r_l;                                              // 0x1EAC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         NpcEntityId;                                       // 0x1EB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionStrength;                                 // 0x1EBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionDirection;                                // 0x1EC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomEpresionEndTime;                             // 0x1EC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ______;                                            // 0x1EC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Dn_______;                                         // 0x1ECC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpresionAlpha;                                    // 0x1ED0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __Minus;                                           // 0x1ED4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Cache_0l_;                                         // 0x1ED5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ABP_BaseNPC(int32 EntryPoint);
	void AnimNotify_OnHitAnimEnd();
	void AnimNotify_OnHitAnimBegin();
	void AnimNotify_OnCollisionAnimBegin();
	void AnimNotify_OnCollisionAnimEnd();
	void ClimbDash();
	void InterfaceSimulateJump(float Speed);
	void InterfaceFixHookDirect(const struct FVector& Offset);
	void OnComponentStart();
	void AnimNotify_PlayMontage();
	void InterfaceManipulateInteractDirection(float Param___);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_9C70E8254D0EAC25ED9262AE4741EA01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_29ED077D4A98A4CA0111C685D4416D03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_FDBBD5E7477AD7967C489DA71407AA47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_489651114DF56F56400B5085D579A175();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_2178FF404602F078D81CDF8AB475F43F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_6917C8F64FE3C0CDC8A3E6A7ED7D503C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_0965F59C484C38E57DB2959A3E4DB3D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_C0B8FDED431127A2A5FDC1A72CAE78C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TextureFace_C2CE9AB24BDEE4700DCED0ADCBA33FA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseNPC_AnimGraphNode_TransitionResult_2C6793D9468B9D59C335F9B7E06CA14C();
	void OnNotifyEnd_712E5DC7440577B25761868E65201677(class FName NotifyName);
	void OnNotifyBegin_712E5DC7440577B25761868E65201677(class FName NotifyName);
	void OnInterrupted_712E5DC7440577B25761868E65201677(class FName NotifyName);
	void OnBlendOut_712E5DC7440577B25761868E65201677(class FName NotifyName);
	void OnCompleted_712E5DC7440577B25761868E65201677(class FName NotifyName);
	void ___r_o();
	void _____0();
	void ___r___0();
	void ___r__();
	void ___rl_();
	void _AIq_(bool* Result);
	void HasInputRotate(bool* Output_Get);
	void ____();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void __B(struct FPoseLink* Param___B);
	void InterfaceJumpPressed(float* Speed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_BaseNPC_C">();
	}
	static class UABP_BaseNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_BaseNPC_C>();
	}
};
static_assert(alignof(UABP_BaseNPC_C) == 0x000010, "Wrong alignment on UABP_BaseNPC_C");
static_assert(sizeof(UABP_BaseNPC_C) == 0x001EE0, "Wrong size on UABP_BaseNPC_C");
static_assert(offsetof(UABP_BaseNPC_C, UberGraphFrame) == 0x000460, "Member 'UABP_BaseNPC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Root_1) == 0x000468, "Member 'UABP_BaseNPC_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Slot_4) == 0x0004A0, "Member 'UABP_BaseNPC_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Inertialization) == 0x000500, "Member 'UABP_BaseNPC_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_13) == 0x000570, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_12) == 0x000598, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_11) == 0x0005C0, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_10) == 0x0005E8, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_9) == 0x000610, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_8) == 0x000638, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer_7) == 0x000660, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_11) == 0x0006F0, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer_6) == 0x000728, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_10) == 0x0007B8, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer_5) == 0x0007F0, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_9) == 0x000880, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0008B8, "Member 'UABP_BaseNPC_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_8) == 0x0009B0, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_7) == 0x0009E8, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_6) == 0x000A10, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_5) == 0x000A38, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_4) == 0x000A60, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_3) == 0x000A88, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_2) == 0x000AB0, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult_1) == 0x000AD8, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TransitionResult) == 0x000B00, "Member 'UABP_BaseNPC_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer_4) == 0x000B28, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_7) == 0x000BB8, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer_3) == 0x000BF0, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_6) == 0x000C80, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer_2) == 0x000CB8, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_5) == 0x000D48, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer_1) == 0x000D80, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_4) == 0x000E10, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateMachine_3) == 0x000E48, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_3) == 0x000F90, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_BlendSpacePlayer) == 0x000FC8, "Member 'UABP_BaseNPC_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_2) == 0x0010C0, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateMachine_2) == 0x0010F8, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult_1) == 0x001240, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateMachine_1) == 0x001278, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateResult) == 0x0013C0, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_StateMachine) == 0x0013F8, "Member 'UABP_BaseNPC_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Slot_3) == 0x001540, "Member 'UABP_BaseNPC_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_ApplyAdditive_1) == 0x0015A0, "Member 'UABP_BaseNPC_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Slot_2) == 0x001670, "Member 'UABP_BaseNPC_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_ApplyAdditive) == 0x0016D0, "Member 'UABP_BaseNPC_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Root) == 0x0017A0, "Member 'UABP_BaseNPC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_LinkedAnimLayer) == 0x0017D8, "Member 'UABP_BaseNPC_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Slot_1) == 0x001898, "Member 'UABP_BaseNPC_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SightLock) == 0x0018F8, "Member 'UABP_BaseNPC_C::AnimGraphNode_SightLock' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_LocalToComponentSpace) == 0x001AB0, "Member 'UABP_BaseNPC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_ComponentToLocalSpace) == 0x001AD0, "Member 'UABP_BaseNPC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_RBF) == 0x001AF0, "Member 'UABP_BaseNPC_C::AnimGraphNode_RBF' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_TextureFace) == 0x001C40, "Member 'UABP_BaseNPC_C::AnimGraphNode_TextureFace' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_SequencePlayer) == 0x001D00, "Member 'UABP_BaseNPC_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_CombineCurves) == 0x001D90, "Member 'UABP_BaseNPC_C::AnimGraphNode_CombineCurves' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, AnimGraphNode_Slot) == 0x001DF0, "Member 'UABP_BaseNPC_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, _r__) == 0x001E50, "Member 'UABP_BaseNPC_C::_r__' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, ___e__) == 0x001E58, "Member 'UABP_BaseNPC_C::___e__' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, __) == 0x001E64, "Member 'UABP_BaseNPC_C::__' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, _____e) == 0x001E68, "Member 'UABP_BaseNPC_C::_____e' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, IfPlayIdleAction) == 0x001E69, "Member 'UABP_BaseNPC_C::IfPlayIdleAction' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, IdleMontageArray) == 0x001E70, "Member 'UABP_BaseNPC_C::IdleMontageArray' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, _rMesh) == 0x001E80, "Member 'UABP_BaseNPC_C::_rMesh' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, __0l_) == 0x001E88, "Member 'UABP_BaseNPC_C::__0l_' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, _l____) == 0x001E8C, "Member 'UABP_BaseNPC_C::_l____' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, ____l__) == 0x001E90, "Member 'UABP_BaseNPC_C::____l__' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, SightDirect) == 0x001E94, "Member 'UABP_BaseNPC_C::SightDirect' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, IsBeingImpacted) == 0x001EA0, "Member 'UABP_BaseNPC_C::IsBeingImpacted' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, IsBeingAttacked) == 0x001EA1, "Member 'UABP_BaseNPC_C::IsBeingAttacked' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, SightLockMode) == 0x001EA2, "Member 'UABP_BaseNPC_C::SightLockMode' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, P___) == 0x001EA4, "Member 'UABP_BaseNPC_C::P___' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, IsTurnLeft) == 0x001EA8, "Member 'UABP_BaseNPC_C::IsTurnLeft' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, _r_l) == 0x001EAC, "Member 'UABP_BaseNPC_C::_r_l' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, NpcEntityId) == 0x001EB8, "Member 'UABP_BaseNPC_C::NpcEntityId' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, CollisionStrength) == 0x001EBC, "Member 'UABP_BaseNPC_C::CollisionStrength' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, CollisionDirection) == 0x001EC0, "Member 'UABP_BaseNPC_C::CollisionDirection' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, RandomEpresionEndTime) == 0x001EC4, "Member 'UABP_BaseNPC_C::RandomEpresionEndTime' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, ______) == 0x001EC8, "Member 'UABP_BaseNPC_C::______' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, Dn_______) == 0x001ECC, "Member 'UABP_BaseNPC_C::Dn_______' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, ExpresionAlpha) == 0x001ED0, "Member 'UABP_BaseNPC_C::ExpresionAlpha' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, __Minus) == 0x001ED4, "Member 'UABP_BaseNPC_C::__Minus' has a wrong offset!");
static_assert(offsetof(UABP_BaseNPC_C, Cache_0l_) == 0x001ED5, "Member 'UABP_BaseNPC_C::Cache_0l_' has a wrong offset!");

}
