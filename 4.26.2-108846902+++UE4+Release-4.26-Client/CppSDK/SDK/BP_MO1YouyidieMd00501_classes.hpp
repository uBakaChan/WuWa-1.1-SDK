#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MO1YouyidieMd00501

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MO1YouyidieMd00501.BP_MO1YouyidieMd00501_C
// 0x0010 (0x0790 - 0x0780)
class ABP_MO1YouyidieMd00501_C final : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_771[0x7];                                      // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MO1YouyidieMd00501_C;            // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Bone_Body04;                                       // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MO1YouyidieMd00501(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MO1YouyidieMd00501_C">();
	}
	static class ABP_MO1YouyidieMd00501_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MO1YouyidieMd00501_C>();
	}
};
static_assert(alignof(ABP_MO1YouyidieMd00501_C) == 0x000010, "Wrong alignment on ABP_MO1YouyidieMd00501_C");
static_assert(sizeof(ABP_MO1YouyidieMd00501_C) == 0x000790, "Wrong size on ABP_MO1YouyidieMd00501_C");
static_assert(offsetof(ABP_MO1YouyidieMd00501_C, UberGraphFrame_BP_MO1YouyidieMd00501_C) == 0x000778, "Member 'ABP_MO1YouyidieMd00501_C::UberGraphFrame_BP_MO1YouyidieMd00501_C' has a wrong offset!");
static_assert(offsetof(ABP_MO1YouyidieMd00501_C, Bone_Body04) == 0x000780, "Member 'ABP_MO1YouyidieMd00501_C::Bone_Body04' has a wrong offset!");

}
