#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoreUploaded.h"
#include "OnUploadLeaderboardScoreDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUploadLeaderboardScore, const FLeaderboardScoreUploaded&, Data, bool, bWasSuccessful);

