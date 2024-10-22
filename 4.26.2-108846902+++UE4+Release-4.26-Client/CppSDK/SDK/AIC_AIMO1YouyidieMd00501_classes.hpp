#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_AIMO1YouyidieMd00501

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_AIMO1YouyidieMd00501.AIC_AIMO1YouyidieMd00501_C
// 0x0008 (0x0788 - 0x0780)
class AAIC_AIMO1YouyidieMd00501_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_AIMO1YouyidieMd00501_C;         // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AIC_AIMO1YouyidieMd00501(int32 EntryPoint);
	void OnStart();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_AIMO1YouyidieMd00501_C">();
	}
	static class AAIC_AIMO1YouyidieMd00501_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_AIMO1YouyidieMd00501_C>();
	}
};
static_assert(alignof(AAIC_AIMO1YouyidieMd00501_C) == 0x000008, "Wrong alignment on AAIC_AIMO1YouyidieMd00501_C");
static_assert(sizeof(AAIC_AIMO1YouyidieMd00501_C) == 0x000788, "Wrong size on AAIC_AIMO1YouyidieMd00501_C");
static_assert(offsetof(AAIC_AIMO1YouyidieMd00501_C, UberGraphFrame_AIC_AIMO1YouyidieMd00501_C) == 0x000780, "Member 'AAIC_AIMO1YouyidieMd00501_C::UberGraphFrame_AIC_AIMO1YouyidieMd00501_C' has a wrong offset!");

}

