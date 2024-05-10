#pragma once
#include "CoreMinimal.h"
#include "SteamInventoryResultReady.h"
#include "OnSteamInventoryResultReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryResultReady, const FSteamInventoryResultReady&, Data);

