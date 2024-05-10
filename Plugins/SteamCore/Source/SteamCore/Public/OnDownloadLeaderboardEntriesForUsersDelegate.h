#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoresDownloadedForUsers.h"
#include "OnDownloadLeaderboardEntriesForUsersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadLeaderboardEntriesForUsers, const FLeaderboardScoresDownloadedForUsers&, Data, bool, bWasSuccessful);

