#pragma once
#include "CoreMinimal.h"
#include "RequestUserStatsData.h"
#include "OnRequestUserStatsAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestUserStatsAsyncDelegate, const FRequestUserStatsData&, Data, bool, bWasSuccessful);

