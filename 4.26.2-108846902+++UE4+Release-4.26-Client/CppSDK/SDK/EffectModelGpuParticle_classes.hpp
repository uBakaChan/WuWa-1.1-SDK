#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectModelGpuParticle

#include "Basic.hpp"

#include "KuroCurve_structs.hpp"
#include "KuroGameplay_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass EffectModelGpuParticle.EffectModelGpuParticle_C
// 0x05A0 (0x05F8 - 0x0058)
class UEffectModelGpuParticle_C final : public UEffectModelBase
{
public:
	class UKuroGPUParticleDA*                     Data;                                              // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Loop;                                              // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ReversePlay;                                       // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKuroCurveVector                       Location;                                          // 0x0068(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKuroCurveVector                       Rotation;                                          // 0x0210(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKuroCurveVector                       Scale;                                             // 0x03B8(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKuroCurveFloat                        TimeScaler;                                        // 0x0560(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         PingPongTime;                                      // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnablePingPong;                                    // 0x05F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EffectModelGpuParticle_C">();
	}
	static class UEffectModelGpuParticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffectModelGpuParticle_C>();
	}
};
static_assert(alignof(UEffectModelGpuParticle_C) == 0x000008, "Wrong alignment on UEffectModelGpuParticle_C");
static_assert(sizeof(UEffectModelGpuParticle_C) == 0x0005F8, "Wrong size on UEffectModelGpuParticle_C");
static_assert(offsetof(UEffectModelGpuParticle_C, Data) == 0x000058, "Member 'UEffectModelGpuParticle_C::Data' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, Loop) == 0x000060, "Member 'UEffectModelGpuParticle_C::Loop' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, ReversePlay) == 0x000061, "Member 'UEffectModelGpuParticle_C::ReversePlay' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, Location) == 0x000068, "Member 'UEffectModelGpuParticle_C::Location' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, Rotation) == 0x000210, "Member 'UEffectModelGpuParticle_C::Rotation' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, Scale) == 0x0003B8, "Member 'UEffectModelGpuParticle_C::Scale' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, TimeScaler) == 0x000560, "Member 'UEffectModelGpuParticle_C::TimeScaler' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, PingPongTime) == 0x0005F0, "Member 'UEffectModelGpuParticle_C::PingPongTime' has a wrong offset!");
static_assert(offsetof(UEffectModelGpuParticle_C, EnablePingPong) == 0x0005F4, "Member 'UEffectModelGpuParticle_C::EnablePingPong' has a wrong offset!");

}
