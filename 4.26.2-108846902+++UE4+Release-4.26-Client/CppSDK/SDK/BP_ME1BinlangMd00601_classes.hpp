#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ME1BinlangMd00601

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ME1BinlangMd00601.BP_ME1BinlangMd00601_C
// 0x0060 (0x07E0 - 0x0780)
class ABP_ME1BinlangMd00601_C final : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_771[0x7];                                      // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroAdjustableBoxComponent*            Root;                                              // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LCalf;                                       // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001RCalf;                                       // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LForearm;                                    // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001RForearm;                                    // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001Spine2;                                      // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bone_weiba03;                                      // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001Spine1;                                      // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001Head;                                        // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SocketNames;                                       // 0x07C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        Size;                                              // 0x07D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ME1BinlangMd00601_C">();
	}
	static class ABP_ME1BinlangMd00601_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ME1BinlangMd00601_C>();
	}
};
static_assert(alignof(ABP_ME1BinlangMd00601_C) == 0x000010, "Wrong alignment on ABP_ME1BinlangMd00601_C");
static_assert(sizeof(ABP_ME1BinlangMd00601_C) == 0x0007E0, "Wrong size on ABP_ME1BinlangMd00601_C");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Root) == 0x000778, "Member 'ABP_ME1BinlangMd00601_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bip001LCalf) == 0x000780, "Member 'ABP_ME1BinlangMd00601_C::Bip001LCalf' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bip001RCalf) == 0x000788, "Member 'ABP_ME1BinlangMd00601_C::Bip001RCalf' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bip001LForearm) == 0x000790, "Member 'ABP_ME1BinlangMd00601_C::Bip001LForearm' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bip001RForearm) == 0x000798, "Member 'ABP_ME1BinlangMd00601_C::Bip001RForearm' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bip001Spine2) == 0x0007A0, "Member 'ABP_ME1BinlangMd00601_C::Bip001Spine2' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bone_weiba03) == 0x0007A8, "Member 'ABP_ME1BinlangMd00601_C::Bone_weiba03' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bip001Spine1) == 0x0007B0, "Member 'ABP_ME1BinlangMd00601_C::Bip001Spine1' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Bip001Head) == 0x0007B8, "Member 'ABP_ME1BinlangMd00601_C::Bip001Head' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, SocketNames) == 0x0007C0, "Member 'ABP_ME1BinlangMd00601_C::SocketNames' has a wrong offset!");
static_assert(offsetof(ABP_ME1BinlangMd00601_C, Size) == 0x0007D0, "Member 'ABP_ME1BinlangMd00601_C::Size' has a wrong offset!");

}
