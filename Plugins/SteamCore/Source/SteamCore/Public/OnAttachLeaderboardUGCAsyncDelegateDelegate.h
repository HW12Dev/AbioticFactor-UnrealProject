#pragma once
#include "CoreMinimal.h"
#include "AttachLeaderboardUGCData.h"
#include "OnAttachLeaderboardUGCAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttachLeaderboardUGCAsyncDelegate, const FAttachLeaderboardUGCData&, Data, bool, bWasSuccessful);

