#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Saomiao

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function GA_Role_Saomiao.GA_Role_Saomiao_C.ExecuteUbergraph_GA_Role_Saomiao
// 0x00C0 (0x00C0 - 0x0000)
struct GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> ___delegate_Variable;                              // 0x0010(0x0028)(ConstParm, ZeroConstructor)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0xF];                                       // 0x0071(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGamePlayScan_C*                        CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao) == 0x000010, "Wrong alignment on GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao");
static_assert(sizeof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao) == 0x0000C0, "Wrong size on GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, EntryPoint) == 0x000000, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, ___delegate_Variable) == 0x000010, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::___delegate_Variable' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, ___bool_Has_Been_Initd_Variable) == 0x000038, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc_PostEvent_ReturnValue) == 0x00003C, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, ___bool_IsClosed_Variable) == 0x000040, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc__________) == 0x000048, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000050, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, K2Node_DynamicCast_AsTs_Base_Character) == 0x000068, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000080, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'GA_Role_Saomiao_C_ExecuteUbergraph_GA_Role_Saomiao::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

