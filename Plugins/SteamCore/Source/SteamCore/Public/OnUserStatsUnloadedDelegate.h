#pragma once
#include "CoreMinimal.h"
#include "UserStatsUnloaded.h"
#include "OnUserStatsUnloadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserStatsUnloaded, const FUserStatsUnloaded&, Data);

