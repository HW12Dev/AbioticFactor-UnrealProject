#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoresDownloaded.h"
#include "OnDownloadLeaderboardEntriesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadLeaderboardEntries, const FLeaderboardScoresDownloaded&, Data, bool, bWasSuccessful);

