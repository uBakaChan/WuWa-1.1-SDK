#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MO1YouyidieMd00501

#include "Basic.hpp"

#include "BP_MO1YouyidieMd00501_classes.hpp"
#include "BP_MO1YouyidieMd00501_parameters.hpp"


namespace SDK
{

// Function BP_MO1YouyidieMd00501.BP_MO1YouyidieMd00501_C.ExecuteUbergraph_BP_MO1YouyidieMd00501
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MO1YouyidieMd00501_C::ExecuteUbergraph_BP_MO1YouyidieMd00501(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MO1YouyidieMd00501_C", "ExecuteUbergraph_BP_MO1YouyidieMd00501");

	Params::BP_MO1YouyidieMd00501_C_ExecuteUbergraph_BP_MO1YouyidieMd00501 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MO1YouyidieMd00501.BP_MO1YouyidieMd00501_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MO1YouyidieMd00501_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MO1YouyidieMd00501_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

