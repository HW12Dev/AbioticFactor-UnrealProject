#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryRequestPricesResult.h"
#include "OnSteamInventoryRequestPricesResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamInventoryRequestPricesResult, const FSteamInventoryRequestPricesResult&, Data, bool, bWasSuccessful);

