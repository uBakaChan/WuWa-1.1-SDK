#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Jueyuan

#include "Basic.hpp"

#include "BP_Jueyuan_classes.hpp"
#include "BP_Jueyuan_parameters.hpp"


namespace SDK
{

// Function BP_Jueyuan.BP_Jueyuan_C.ExecuteUbergraph_BP_Jueyuan
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Jueyuan_C::ExecuteUbergraph_BP_Jueyuan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jueyuan_C", "ExecuteUbergraph_BP_Jueyuan");

	Params::BP_Jueyuan_C_ExecuteUbergraph_BP_Jueyuan Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Jueyuan.BP_Jueyuan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Jueyuan_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jueyuan_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Jueyuan.BP_Jueyuan_C.&��>z-��
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Jueyuan_C::_____zMinus__()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jueyuan_C", "&��>z-��");

	Params::BP_Jueyuan_C______zMinus__ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Jueyuan.BP_Jueyuan_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Jueyuan_C::FightCommand(bool IsInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jueyuan_C", "FightCommand");

	Params::BP_Jueyuan_C_FightCommand Parms{};

	Parms.IsInAir = IsInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}
