#pragma once
#include "CoreMinimal.h"
#include "AchievementRowHandle.h"
#include "AchievementUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAchievementUnlocked, FAchievementRowHandle, Achievement);

