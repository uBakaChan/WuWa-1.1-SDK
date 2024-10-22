#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lingyang

#include "Basic.hpp"

#include "BP_Lingyang_classes.hpp"
#include "BP_Lingyang_parameters.hpp"


namespace SDK
{

// Function BP_Lingyang.BP_Lingyang_C.ExecuteUbergraph_BP_Lingyang
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lingyang_C::ExecuteUbergraph_BP_Lingyang(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lingyang_C", "ExecuteUbergraph_BP_Lingyang");

	Params::BP_Lingyang_C_ExecuteUbergraph_BP_Lingyang Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lingyang.BP_Lingyang_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lingyang_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lingyang_C", "ReceiveTick");

	Params::BP_Lingyang_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lingyang.BP_Lingyang_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Lingyang_C::FightCommand(bool IsInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lingyang_C", "FightCommand");

	Params::BP_Lingyang_C_FightCommand Parms{};

	Parms.IsInAir = IsInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}

