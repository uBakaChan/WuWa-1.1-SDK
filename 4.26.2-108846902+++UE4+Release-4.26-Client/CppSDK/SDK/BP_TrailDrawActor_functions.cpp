#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrailDrawActor

#include "Basic.hpp"

#include "BP_TrailDrawActor_classes.hpp"
#include "BP_TrailDrawActor_parameters.hpp"


namespace SDK
{

// Function BP_TrailDrawActor.BP_TrailDrawActor_C.IsEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TrailDrawActor_C::IsEnable(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrailDrawActor_C", "IsEnable");

	Params::BP_TrailDrawActor_C_IsEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}

}
