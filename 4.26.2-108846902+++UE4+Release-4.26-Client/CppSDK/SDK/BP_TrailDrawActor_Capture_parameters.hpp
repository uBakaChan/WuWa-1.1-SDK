#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrailDrawActor_Capture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_TrailDrawActor_Capture.BP_TrailDrawActor_Capture_C.UserConstructionScript
// 0x000C (0x000C - 0x0000)
struct BP_TrailDrawActor_Capture_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsEnable_Ret;                             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrailDrawActor_Capture_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_TrailDrawActor_Capture_C_UserConstructionScript");
static_assert(sizeof(BP_TrailDrawActor_Capture_C_UserConstructionScript) == 0x00000C, "Wrong size on BP_TrailDrawActor_Capture_C_UserConstructionScript");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_UserConstructionScript, CallFunc_IsEnable_Ret) == 0x000000, "Member 'BP_TrailDrawActor_Capture_C_UserConstructionScript::CallFunc_IsEnable_Ret' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'BP_TrailDrawActor_Capture_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function BP_TrailDrawActor_Capture.BP_TrailDrawActor_Capture_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_TrailDrawActor_Capture_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrailDrawActor_Capture_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_TrailDrawActor_Capture_C_ReceiveTick");
static_assert(sizeof(BP_TrailDrawActor_Capture_C_ReceiveTick) == 0x000004, "Wrong size on BP_TrailDrawActor_Capture_C_ReceiveTick");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_TrailDrawActor_Capture_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_TrailDrawActor_Capture.BP_TrailDrawActor_Capture_C.ExecuteUbergraph_BP_TrailDrawActor_Capture
// 0x0440 (0x0440 - 0x0000)
struct BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetConsoleVariableIntValue_ReturnValue;   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_Origin;                    // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;                 // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 K2Node_DynamicCast_As______2D;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ___object_Variable;                                // 0x0058(0x0010)(ConstParm, ReferenceParm)
	bool                                          ___bool_Variable;                                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0080(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E3[0x1];                                       // 0x00E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnable_Ret;                             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0118(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnable_Ret_1;                           // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALandscape*                             K2Node_DynamicCast_As__;                           // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALandscapeStreamingProxy*               K2Node_DynamicCast_As______;                       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x3];                                      // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x025C(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x02F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x02FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0xC];                                      // 0x0304(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0310(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x0340(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_3D4[0xC];                                      // 0x03D4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x03E0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0410(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x041C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0428(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture) == 0x000010, "Wrong alignment on BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture");
static_assert(sizeof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture) == 0x000440, "Wrong size on BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, EntryPoint) == 0x000000, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_GetConsoleVariableIntValue_ReturnValue) == 0x000004, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_GetConsoleVariableIntValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_Conv_IntToBool_ReturnValue) == 0x000008, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_FTrunc_ReturnValue) == 0x00001C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000020, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_CreateRenderTarget2D_ReturnValue_1) == 0x000028, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_CreateRenderTarget2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_GetActorBounds_Origin) == 0x000030, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_GetActorBounds_BoxExtent) == 0x00003C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_DynamicCast_As______2D) == 0x000048, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_DynamicCast_As______2D' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, ___object_Variable) == 0x000058, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::___object_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, ___bool_Variable) == 0x000068, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::___bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_GetPlayerPawn_ReturnValue) == 0x000070, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_GetTransform_ReturnValue) == 0x000080, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakTransform_Location) == 0x0000B0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakTransform_Rotation) == 0x0000BC, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakTransform_Scale) == 0x0000C8, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_Select_Default) == 0x0000D4, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_IsValid_ReturnValue_1) == 0x0000E0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x0000E1, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_IsValid_ReturnValue_2) == 0x0000E2, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_MakeVector_ReturnValue) == 0x0000E4, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_Add_VectorVector_ReturnValue) == 0x0000F0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_MakeVector_ReturnValue_1) == 0x0000FC, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_IsEnable_Ret) == 0x000108, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_IsEnable_Ret' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00010C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000118, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0001AC, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_IsEnable_Ret_1) == 0x0001AD, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_IsEnable_Ret_1' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_bBlockingHit) == 0x0001AE, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001AF, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_Time) == 0x0001B0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_Distance) == 0x0001B4, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_Location) == 0x0001B8, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_ImpactPoint) == 0x0001C4, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_Normal) == 0x0001D0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_ImpactNormal) == 0x0001DC, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_PhysMat) == 0x0001E8, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_HitActor) == 0x0001F0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_HitComponent) == 0x0001F8, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_HitBoneName) == 0x000200, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_HitItem) == 0x00020C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_FaceIndex) == 0x000210, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_TraceStart) == 0x000214, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakHitResult_TraceEnd) == 0x000220, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_DynamicCast_As__) == 0x000230, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_DynamicCast_As__' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_DynamicCast_bSuccess_1) == 0x000238, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_DynamicCast_As______) == 0x000240, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_DynamicCast_As______' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, K2Node_DynamicCast_bSuccess_2) == 0x000248, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakVector_X) == 0x00024C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakVector_Y) == 0x000250, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakVector_Z) == 0x000254, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_Add_FloatFloat_ReturnValue) == 0x000258, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x00025C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_MakeVector_ReturnValue_2) == 0x0002F0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_MakeVector2D_ReturnValue) == 0x0002FC, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_MakeTransform_ReturnValue) == 0x000310, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000340, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0003E0, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakTransform_Location_1) == 0x000410, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakTransform_Rotation_1) == 0x00041C, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture, CallFunc_BreakTransform_Scale_1) == 0x000428, "Member 'BP_TrailDrawActor_Capture_C_ExecuteUbergraph_BP_TrailDrawActor_Capture::CallFunc_BreakTransform_Scale_1' has a wrong offset!");

}
