#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_BindStateTag

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_BindStateTag.BP_SM_BindStateTag_C
// 0x0010 (0x0040 - 0x0030)
class UBP_SM_BindStateTag_C final : public UASMBindState
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0030(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_BindStateTag_C">();
	}
	static class UBP_SM_BindStateTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_BindStateTag_C>();
	}
};
static_assert(alignof(UBP_SM_BindStateTag_C) == 0x000008, "Wrong alignment on UBP_SM_BindStateTag_C");
static_assert(sizeof(UBP_SM_BindStateTag_C) == 0x000040, "Wrong size on UBP_SM_BindStateTag_C");
static_assert(offsetof(UBP_SM_BindStateTag_C, Tag) == 0x000030, "Member 'UBP_SM_BindStateTag_C::Tag' has a wrong offset!");

}
