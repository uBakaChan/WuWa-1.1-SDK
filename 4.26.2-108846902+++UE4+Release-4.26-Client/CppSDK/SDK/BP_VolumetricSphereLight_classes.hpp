#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolumetricSphereLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VolumetricSphereLight.BP_VolumetricSphereLight_C
// 0x0088 (0x0330 - 0x02A8)
class ABP_VolumetricSphereLight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SphereLightStaticMesh;                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      SphereLightMat;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReverseCulling;                                  // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsWholeDay;                                        // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutDistanceFade;                                   // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ApplyFog;                                          // 0x02CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         FogInt;                                            // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         FogPower;                                          // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightInt;                                       // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightOffset;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InsideColor;                                       // 0x02DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutSideColor;                                      // 0x02EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SphereRadius;                                      // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightStart;                                        // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NearFadeStart;                                     // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FullIntLength;                                     // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FarFadeLength;                                     // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstanceDynamic;                           // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      SphereLightMatWithOutDF;                           // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      SphereLightMatWithOutFog;                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      SphereLightMatWithOutDFWithOutFog;                 // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VolumetricSphereLight(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdateVolumetricSphereLight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VolumetricSphereLight_C">();
	}
	static class ABP_VolumetricSphereLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VolumetricSphereLight_C>();
	}
};
static_assert(alignof(ABP_VolumetricSphereLight_C) == 0x000008, "Wrong alignment on ABP_VolumetricSphereLight_C");
static_assert(sizeof(ABP_VolumetricSphereLight_C) == 0x000330, "Wrong size on ABP_VolumetricSphereLight_C");
static_assert(offsetof(ABP_VolumetricSphereLight_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_VolumetricSphereLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_VolumetricSphereLight_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SphereLightStaticMesh) == 0x0002B8, "Member 'ABP_VolumetricSphereLight_C::SphereLightStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SphereLightMat) == 0x0002C0, "Member 'ABP_VolumetricSphereLight_C::SphereLightMat' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, IsReverseCulling) == 0x0002C8, "Member 'ABP_VolumetricSphereLight_C::IsReverseCulling' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, IsWholeDay) == 0x0002C9, "Member 'ABP_VolumetricSphereLight_C::IsWholeDay' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, OutDistanceFade) == 0x0002CA, "Member 'ABP_VolumetricSphereLight_C::OutDistanceFade' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, ApplyFog) == 0x0002CB, "Member 'ABP_VolumetricSphereLight_C::ApplyFog' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, FogInt) == 0x0002CC, "Member 'ABP_VolumetricSphereLight_C::FogInt' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, FogPower) == 0x0002D0, "Member 'ABP_VolumetricSphereLight_C::FogPower' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SkyLightInt) == 0x0002D4, "Member 'ABP_VolumetricSphereLight_C::SkyLightInt' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SkyLightOffset) == 0x0002D8, "Member 'ABP_VolumetricSphereLight_C::SkyLightOffset' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, InsideColor) == 0x0002DC, "Member 'ABP_VolumetricSphereLight_C::InsideColor' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, OutSideColor) == 0x0002EC, "Member 'ABP_VolumetricSphereLight_C::OutSideColor' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SphereRadius) == 0x0002FC, "Member 'ABP_VolumetricSphereLight_C::SphereRadius' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, LightStart) == 0x000300, "Member 'ABP_VolumetricSphereLight_C::LightStart' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, NearFadeStart) == 0x000304, "Member 'ABP_VolumetricSphereLight_C::NearFadeStart' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, FullIntLength) == 0x000308, "Member 'ABP_VolumetricSphereLight_C::FullIntLength' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, FarFadeLength) == 0x00030C, "Member 'ABP_VolumetricSphereLight_C::FarFadeLength' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, MaterialInstanceDynamic) == 0x000310, "Member 'ABP_VolumetricSphereLight_C::MaterialInstanceDynamic' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SphereLightMatWithOutDF) == 0x000318, "Member 'ABP_VolumetricSphereLight_C::SphereLightMatWithOutDF' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SphereLightMatWithOutFog) == 0x000320, "Member 'ABP_VolumetricSphereLight_C::SphereLightMatWithOutFog' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricSphereLight_C, SphereLightMatWithOutDFWithOutFog) == 0x000328, "Member 'ABP_VolumetricSphereLight_C::SphereLightMatWithOutDFWithOutFog' has a wrong offset!");

}

