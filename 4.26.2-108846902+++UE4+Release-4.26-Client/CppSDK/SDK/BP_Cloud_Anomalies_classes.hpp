#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cloud_Anomalies

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CloudPrefab_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Cloud_Anomalies.BP_Cloud_Anomalies_C
// 0x0010 (0x03C8 - 0x03B8)
class ABP_Cloud_Anomalies_C final : public ABP_CloudPrefab_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Cloud_Anomalies_C;               // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cloud_Anomalies;                                   // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Cloud_Anomalies(int32 EntryPoint);
	void EditorTick(float DeltaSeconds);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Cloud_Anomalies_C">();
	}
	static class ABP_Cloud_Anomalies_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cloud_Anomalies_C>();
	}
};
static_assert(alignof(ABP_Cloud_Anomalies_C) == 0x000008, "Wrong alignment on ABP_Cloud_Anomalies_C");
static_assert(sizeof(ABP_Cloud_Anomalies_C) == 0x0003C8, "Wrong size on ABP_Cloud_Anomalies_C");
static_assert(offsetof(ABP_Cloud_Anomalies_C, UberGraphFrame_BP_Cloud_Anomalies_C) == 0x0003B8, "Member 'ABP_Cloud_Anomalies_C::UberGraphFrame_BP_Cloud_Anomalies_C' has a wrong offset!");
static_assert(offsetof(ABP_Cloud_Anomalies_C, Cloud_Anomalies) == 0x0003C0, "Member 'ABP_Cloud_Anomalies_C::Cloud_Anomalies' has a wrong offset!");

}
