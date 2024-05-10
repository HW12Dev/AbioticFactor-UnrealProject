#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryStartPurchaseResult.h"
#include "OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamInventoryStartPurchaseResultAsyncDelegate, const FSteamInventoryStartPurchaseResult&, Data, bool, bWasSuccessful);

