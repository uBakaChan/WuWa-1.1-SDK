#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlyData

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OnlyData.OnlyData_C
// 0x0000 (0x0030 - 0x0030)
class UOnlyData_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetCommonNewBulletData(const class FString& DataName, class UObject* __WorldContext, bool* IsFind, struct FSReBulletDataMain* BulletData);
	static void GetCommonHitData(const class FString& DataName, class UObject* __WorldContext, bool* IsFind, struct FSHitEffect* HitData);
	static void GetCommonBulletData(const class FString& DataName, class UObject* __WorldContext, bool* IsFind, struct FSBulletDataMain* BulletData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnlyData_C">();
	}
	static class UOnlyData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlyData_C>();
	}
};
static_assert(alignof(UOnlyData_C) == 0x000008, "Wrong alignment on UOnlyData_C");
static_assert(sizeof(UOnlyData_C) == 0x000030, "Wrong size on UOnlyData_C");

}
