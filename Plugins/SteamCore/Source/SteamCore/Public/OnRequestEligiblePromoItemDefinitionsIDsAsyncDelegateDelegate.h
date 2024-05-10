#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryEligiblePromoItemDefIDs.h"
#include "OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, const FSteamInventoryEligiblePromoItemDefIDs&, Data, bool, bWasSuccessful);

