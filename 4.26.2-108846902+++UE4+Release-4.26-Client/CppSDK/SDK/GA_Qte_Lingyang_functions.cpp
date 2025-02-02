#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Qte_Lingyang

#include "Basic.hpp"

#include "GA_Qte_Lingyang_classes.hpp"
#include "GA_Qte_Lingyang_parameters.hpp"


namespace SDK
{

// Function GA_Qte_Lingyang.GA_Qte_Lingyang_C.ExecuteUbergraph_GA_Qte_Lingyang
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Qte_Lingyang_C::ExecuteUbergraph_GA_Qte_Lingyang(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Qte_Lingyang_C", "ExecuteUbergraph_GA_Qte_Lingyang");

	Params::GA_Qte_Lingyang_C_ExecuteUbergraph_GA_Qte_Lingyang Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Qte_Lingyang.GA_Qte_Lingyang_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Qte_Lingyang_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Qte_Lingyang_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

