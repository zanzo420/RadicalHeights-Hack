// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoPickup_45.AmmoPickup_44_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AAmmoPickup_44_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoPickup_45.AmmoPickup_44_C.UserConstructionScript");

	AAmmoPickup_44_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
