#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoresDownloaded.h"
#include "OnDownloadLeaderboardEntriesAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadLeaderboardEntriesAsyncDelegate, const FLeaderboardScoresDownloaded&, Data, bool, bWasSuccessful);

