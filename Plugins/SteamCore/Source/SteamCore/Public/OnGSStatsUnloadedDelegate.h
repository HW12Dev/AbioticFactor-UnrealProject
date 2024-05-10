#pragma once
#include "CoreMinimal.h"
#include "GSStatsUnloaded.h"
#include "OnGSStatsUnloadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSStatsUnloaded, const FGSStatsUnloaded&, Data);

