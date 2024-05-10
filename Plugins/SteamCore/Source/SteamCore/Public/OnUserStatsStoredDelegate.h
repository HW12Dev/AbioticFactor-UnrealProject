#pragma once
#include "CoreMinimal.h"
#include "UserStatsStored.h"
#include "OnUserStatsStoredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserStatsStored, const FUserStatsStored&, Data);

