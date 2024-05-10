#pragma once
#include "CoreMinimal.h"
#include "JoinPartyData.h"
#include "OnJoinPartyCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinPartyCallback, const FJoinPartyData&, Data, bool, bWasSuccessful);

