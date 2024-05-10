#pragma once
#include "CoreMinimal.h"
#include "LeaderboardFindResult.h"
#include "OnFindLeaderboardDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFindLeaderboard, const FLeaderboardFindResult&, Data, bool, bWasSuccessful);

