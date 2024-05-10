#pragma once
#include "CoreMinimal.h"
#include "LeaderboardFindResult.h"
#include "OnFindLeaderboardAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFindLeaderboardAsyncDelegate, const FLeaderboardFindResult&, Data, bool, bWasSuccessful);

