#pragma once
#include "CoreMinimal.h"
#include "JoinPartyData.h"
#include "OnJoinPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnJoinParty, const FJoinPartyData&, Data, bool, bWasSuccessful);

