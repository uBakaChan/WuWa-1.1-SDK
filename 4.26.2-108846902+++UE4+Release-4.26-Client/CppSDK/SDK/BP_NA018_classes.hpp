#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NA018

#include "Basic.hpp"

#include "BP_CommonBigAnimal_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NA018.BP_NA018_C
// 0x0030 (0x07B0 - 0x0780)
class ABP_NA018_C final : public ABP_CommonBigAnimal_C
{
public:
	class UCapsuleComponent*                      Bip001Spine1;                                      // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001Head;                                        // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SocketNames;                                       // 0x0790(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                        Size;                                              // 0x07A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NA018_C">();
	}
	static class ABP_NA018_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NA018_C>();
	}
};
static_assert(alignof(ABP_NA018_C) == 0x000010, "Wrong alignment on ABP_NA018_C");
static_assert(sizeof(ABP_NA018_C) == 0x0007B0, "Wrong size on ABP_NA018_C");
static_assert(offsetof(ABP_NA018_C, Bip001Spine1) == 0x000780, "Member 'ABP_NA018_C::Bip001Spine1' has a wrong offset!");
static_assert(offsetof(ABP_NA018_C, Bip001Head) == 0x000788, "Member 'ABP_NA018_C::Bip001Head' has a wrong offset!");
static_assert(offsetof(ABP_NA018_C, SocketNames) == 0x000790, "Member 'ABP_NA018_C::SocketNames' has a wrong offset!");
static_assert(offsetof(ABP_NA018_C, Size) == 0x0007A0, "Member 'ABP_NA018_C::Size' has a wrong offset!");

}
