#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryFullUpdate.h"
#include "OnSteamInventoryFullUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryFullUpdate, const FSteamInventoryFullUpdate&, Data);

