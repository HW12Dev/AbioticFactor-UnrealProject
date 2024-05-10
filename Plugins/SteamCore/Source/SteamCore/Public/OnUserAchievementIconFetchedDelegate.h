#pragma once
#include "CoreMinimal.h"
#include "UserAchievementIconFetched.h"
#include "OnUserAchievementIconFetchedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserAchievementIconFetched, const FUserAchievementIconFetched&, Data);

