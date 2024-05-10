#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoresDownloadedForUsers.h"
#include "OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadLeaderboardEntriesForUsersAsyncDelegate, const FLeaderboardScoresDownloadedForUsers&, Data, bool, bWasSuccessful);

