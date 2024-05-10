#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoreUploaded.h"
#include "OnUploadLeaderboardScoreAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUploadLeaderboardScoreAsyncDelegate, const FLeaderboardScoreUploaded&, Data, bool, bWasSuccessful);

