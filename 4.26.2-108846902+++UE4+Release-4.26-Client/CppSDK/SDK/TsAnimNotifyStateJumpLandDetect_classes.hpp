#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateJumpLandDetect

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateJumpLandDetect.TsAnimNotifyStateJumpLandDetect_C
// 0x0048 (0x0090 - 0x0048)
class UTsAnimNotifyStateJumpLandDetect_C final : public UKuroAnimNotifyState
{
public:
	float                                         MaxHeightOffset;                                   // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   IgnoreActorTag;                                    // 0x004C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RootLookName;                                      // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RootNameX;                                         // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RootNameY;                                         // 0x0070(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RootNameZ;                                         // 0x007C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyDown;                                          // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TsInited;                                          // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool K2_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	void Init();

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateJumpLandDetect_C">();
	}
	static class UTsAnimNotifyStateJumpLandDetect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateJumpLandDetect_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateJumpLandDetect_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateJumpLandDetect_C");
static_assert(sizeof(UTsAnimNotifyStateJumpLandDetect_C) == 0x000090, "Wrong size on UTsAnimNotifyStateJumpLandDetect_C");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, MaxHeightOffset) == 0x000048, "Member 'UTsAnimNotifyStateJumpLandDetect_C::MaxHeightOffset' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, IgnoreActorTag) == 0x00004C, "Member 'UTsAnimNotifyStateJumpLandDetect_C::IgnoreActorTag' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, RootLookName) == 0x000058, "Member 'UTsAnimNotifyStateJumpLandDetect_C::RootLookName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, RootNameX) == 0x000064, "Member 'UTsAnimNotifyStateJumpLandDetect_C::RootNameX' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, RootNameY) == 0x000070, "Member 'UTsAnimNotifyStateJumpLandDetect_C::RootNameY' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, RootNameZ) == 0x00007C, "Member 'UTsAnimNotifyStateJumpLandDetect_C::RootNameZ' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, OnlyDown) == 0x000088, "Member 'UTsAnimNotifyStateJumpLandDetect_C::OnlyDown' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateJumpLandDetect_C, TsInited) == 0x000089, "Member 'UTsAnimNotifyStateJumpLandDetect_C::TsInited' has a wrong offset!");

}
