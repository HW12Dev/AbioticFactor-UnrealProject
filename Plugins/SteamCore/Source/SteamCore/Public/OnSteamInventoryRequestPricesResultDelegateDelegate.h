#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryRequestPricesResult.h"
#include "OnSteamInventoryRequestPricesResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryRequestPricesResultDelegate, const FSteamInventoryRequestPricesResult&, Data);

