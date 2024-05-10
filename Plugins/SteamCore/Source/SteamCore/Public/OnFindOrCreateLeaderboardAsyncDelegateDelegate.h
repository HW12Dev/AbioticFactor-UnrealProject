#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardData.h"
#include "OnFindOrCreateLeaderboardAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFindOrCreateLeaderboardAsyncDelegate, const FFindOrCreateLeaderboardData&, Data, bool, bWasSuccessful);

