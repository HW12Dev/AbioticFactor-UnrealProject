#pragma once
#include "CoreMinimal.h"
#include "GlobalStatsReceived.h"
#include "OnRequestGlobalStatsAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestGlobalStatsAsyncDelegate, const FGlobalStatsReceived&, Data, bool, bWasSuccessful);

