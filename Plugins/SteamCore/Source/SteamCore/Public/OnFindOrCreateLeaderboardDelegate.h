#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardData.h"
#include "OnFindOrCreateLeaderboardDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFindOrCreateLeaderboard, const FFindOrCreateLeaderboardData&, Data, bool, bWasSuccessful);

