#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisionLocalVariables

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisionLocalVariables.BP_VisionLocalVariables_C
// 0x0018 (0x0050 - 0x0038)
class UBP_VisionLocalVariables_C final : public UPrimaryDataAsset
{
public:
	struct FVector                                _____P_;                                           // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                _____P__0;                                         // 0x0044(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisionLocalVariables_C">();
	}
	static class UBP_VisionLocalVariables_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisionLocalVariables_C>();
	}
};
static_assert(alignof(UBP_VisionLocalVariables_C) == 0x000008, "Wrong alignment on UBP_VisionLocalVariables_C");
static_assert(sizeof(UBP_VisionLocalVariables_C) == 0x000050, "Wrong size on UBP_VisionLocalVariables_C");
static_assert(offsetof(UBP_VisionLocalVariables_C, _____P_) == 0x000038, "Member 'UBP_VisionLocalVariables_C::_____P_' has a wrong offset!");
static_assert(offsetof(UBP_VisionLocalVariables_C, _____P__0) == 0x000044, "Member 'UBP_VisionLocalVariables_C::_____P__0' has a wrong offset!");

}
