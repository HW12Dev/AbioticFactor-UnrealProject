#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryEligiblePromoItemDefIDs.h"
#include "OnRequestEligiblePromoItemDefinitionsIDsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestEligiblePromoItemDefinitionsIDs, const FSteamInventoryEligiblePromoItemDefIDs&, Data, bool, bWasSuccessful);

