#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyCameraModify

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SCameraModifier_Condition_structs.hpp"
#include "SCameraModifier_Settings_structs.hpp"
#include "ECameraAnsEffectiveClientType_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyCameraModify.TsAnimNotifyCameraModify_C
// 0x0138 (0x0180 - 0x0048)
class UTsAnimNotifyCameraModify_C final : public UKuroAnimNotify
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0048(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                         ____;                                              // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _e__;                                              // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _____0;                                            // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         S_____;                                            // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSCameraModifier_Settings              ___9Mn;                                            // 0x0068(0x00F0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ECameraAnsEffectiveClientType                 _H_7___;                                           // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CameraAttachSocket;                                // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSCameraModifier_Condition>     A_;                                                // 0x0170(0x0010)(Edit, BlueprintVisible)

public:
	bool K2_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyCameraModify_C">();
	}
	static class UTsAnimNotifyCameraModify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyCameraModify_C>();
	}
};
static_assert(alignof(UTsAnimNotifyCameraModify_C) == 0x000008, "Wrong alignment on UTsAnimNotifyCameraModify_C");
static_assert(sizeof(UTsAnimNotifyCameraModify_C) == 0x000180, "Wrong size on UTsAnimNotifyCameraModify_C");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, Tag) == 0x000048, "Member 'UTsAnimNotifyCameraModify_C::Tag' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, ____) == 0x000054, "Member 'UTsAnimNotifyCameraModify_C::____' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, _e__) == 0x000058, "Member 'UTsAnimNotifyCameraModify_C::_e__' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, _____0) == 0x00005C, "Member 'UTsAnimNotifyCameraModify_C::_____0' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, S_____) == 0x000060, "Member 'UTsAnimNotifyCameraModify_C::S_____' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, ___9Mn) == 0x000068, "Member 'UTsAnimNotifyCameraModify_C::___9Mn' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, _H_7___) == 0x000158, "Member 'UTsAnimNotifyCameraModify_C::_H_7___' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, CameraAttachSocket) == 0x000160, "Member 'UTsAnimNotifyCameraModify_C::CameraAttachSocket' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyCameraModify_C, A_) == 0x000170, "Member 'UTsAnimNotifyCameraModify_C::A_' has a wrong offset!");

}
