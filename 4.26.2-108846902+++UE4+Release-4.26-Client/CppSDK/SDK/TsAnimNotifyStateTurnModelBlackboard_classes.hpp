#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateTurnModelBlackboard

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateTurnModelBlackboard.TsAnimNotifyStateTurnModelBlackboard_C
// 0x0028 (0x0070 - 0x0048)
class UTsAnimNotifyStateTurnModelBlackboard_C final : public UKuroAnimNotifyState
{
public:
	class UCurveFloat*                            Curve;                                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   TurnModelKey;                                      // 0x0050(0x0018)(Edit, BlueprintVisible, UObjectWrapper)
	bool                                          TurnActorOnEnd;                                    // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Absolute;                                          // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateTurnModelBlackboard_C">();
	}
	static class UTsAnimNotifyStateTurnModelBlackboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateTurnModelBlackboard_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateTurnModelBlackboard_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateTurnModelBlackboard_C");
static_assert(sizeof(UTsAnimNotifyStateTurnModelBlackboard_C) == 0x000070, "Wrong size on UTsAnimNotifyStateTurnModelBlackboard_C");
static_assert(offsetof(UTsAnimNotifyStateTurnModelBlackboard_C, Curve) == 0x000048, "Member 'UTsAnimNotifyStateTurnModelBlackboard_C::Curve' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateTurnModelBlackboard_C, TurnModelKey) == 0x000050, "Member 'UTsAnimNotifyStateTurnModelBlackboard_C::TurnModelKey' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateTurnModelBlackboard_C, TurnActorOnEnd) == 0x000068, "Member 'UTsAnimNotifyStateTurnModelBlackboard_C::TurnActorOnEnd' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateTurnModelBlackboard_C, Absolute) == 0x000069, "Member 'UTsAnimNotifyStateTurnModelBlackboard_C::Absolute' has a wrong offset!");

}
