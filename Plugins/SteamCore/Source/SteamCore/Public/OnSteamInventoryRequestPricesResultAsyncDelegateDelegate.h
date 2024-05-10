#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryRequestPricesResult.h"
#include "OnSteamInventoryRequestPricesResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamInventoryRequestPricesResultAsyncDelegate, const FSteamInventoryRequestPricesResult&, Data, bool, bWasSuccessful);

