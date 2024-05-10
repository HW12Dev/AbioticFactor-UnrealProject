#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryStartPurchaseResult.h"
#include "OnSteamInventoryStartPurchaseResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamInventoryStartPurchaseResult, const FSteamInventoryStartPurchaseResult&, Data, bool, bWasSuccessful);

