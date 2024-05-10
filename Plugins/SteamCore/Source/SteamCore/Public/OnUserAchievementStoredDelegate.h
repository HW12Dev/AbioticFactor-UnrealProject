#pragma once
#include "CoreMinimal.h"
#include "UserAchievementStored.h"
#include "OnUserAchievementStoredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserAchievementStored, const FUserAchievementStored&, Data);

