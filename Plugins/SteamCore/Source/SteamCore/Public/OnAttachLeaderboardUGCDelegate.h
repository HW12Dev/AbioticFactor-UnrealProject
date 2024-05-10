#pragma once
#include "CoreMinimal.h"
#include "AttachLeaderboardUGCData.h"
#include "OnAttachLeaderboardUGCDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAttachLeaderboardUGC, const FAttachLeaderboardUGCData&, Data, bool, bWasSuccessful);

