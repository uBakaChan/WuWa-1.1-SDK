#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CineCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CinematicCamera_structs.hpp"
#include "CinematicCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CineCamera.BP_CineCamera_C
// 0x00D0 (0x0A50 - 0x0980)
class ABP_CineCamera_C final : public ACineCameraActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0980(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ResolutionAdaptFactor;                             // 0x0988(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98C[0x4];                                      // 0x098C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    UiCameraAnimationRow;                              // 0x0990(0x0018)(Edit, BlueprintVisible, NoDestructor)
	bool                                          IsAutoTransform;                                   // 0x09A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A9[0x3];                                      // 0x09A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OffsetTime;                                        // 0x09AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxOffsetTime;                                     // 0x09B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCameraFilmbackSettings                Filmback;                                          // 0x09B4(0x000C)(Edit, BlueprintVisible, NoDestructor)
	bool                                          Constrain_Aspect_Ratio;                            // 0x09C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C1[0x3];                                      // 0x09C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Current_Focal_Length;                              // 0x09C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Current_Aperture;                                  // 0x09C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CC[0x4];                                      // 0x09CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraFocusSettings                   Focus_Settings;                                    // 0x09D0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCameraLensSettings                    Lens_Settings;                                     // 0x0A30(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ResetSeqCineCamSetting();
	void ApplyUiCameraSettings();
	void BeginAutoTransform(float TimeLength);
	void EndAutoTransform();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CineCamera(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CineCamera_C">();
	}
	static class ABP_CineCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CineCamera_C>();
	}
};
static_assert(alignof(ABP_CineCamera_C) == 0x000010, "Wrong alignment on ABP_CineCamera_C");
static_assert(sizeof(ABP_CineCamera_C) == 0x000A50, "Wrong size on ABP_CineCamera_C");
static_assert(offsetof(ABP_CineCamera_C, UberGraphFrame) == 0x000980, "Member 'ABP_CineCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, ResolutionAdaptFactor) == 0x000988, "Member 'ABP_CineCamera_C::ResolutionAdaptFactor' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, UiCameraAnimationRow) == 0x000990, "Member 'ABP_CineCamera_C::UiCameraAnimationRow' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, IsAutoTransform) == 0x0009A8, "Member 'ABP_CineCamera_C::IsAutoTransform' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, OffsetTime) == 0x0009AC, "Member 'ABP_CineCamera_C::OffsetTime' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, MaxOffsetTime) == 0x0009B0, "Member 'ABP_CineCamera_C::MaxOffsetTime' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Filmback) == 0x0009B4, "Member 'ABP_CineCamera_C::Filmback' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Constrain_Aspect_Ratio) == 0x0009C0, "Member 'ABP_CineCamera_C::Constrain_Aspect_Ratio' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Current_Focal_Length) == 0x0009C4, "Member 'ABP_CineCamera_C::Current_Focal_Length' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Current_Aperture) == 0x0009C8, "Member 'ABP_CineCamera_C::Current_Aperture' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Focus_Settings) == 0x0009D0, "Member 'ABP_CineCamera_C::Focus_Settings' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Lens_Settings) == 0x000A30, "Member 'ABP_CineCamera_C::Lens_Settings' has a wrong offset!");

}

