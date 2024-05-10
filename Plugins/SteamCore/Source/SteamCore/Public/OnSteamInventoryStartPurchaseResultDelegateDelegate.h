#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryStartPurchaseResult.h"
#include "OnSteamInventoryStartPurchaseResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryStartPurchaseResultDelegate, const FSteamInventoryStartPurchaseResult&, Data);

