#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryEligiblePromoItemDefIDs.h"
#include "OnSteamInventoryEligiblePromoItemDefIDsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryEligiblePromoItemDefIDs, const FSteamInventoryEligiblePromoItemDefIDs&, Data);

