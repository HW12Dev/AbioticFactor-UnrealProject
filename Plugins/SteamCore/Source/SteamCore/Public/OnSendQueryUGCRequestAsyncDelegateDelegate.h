#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryCompleted.h"
#include "OnSendQueryUGCRequestAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSendQueryUGCRequestAsyncDelegate, const FSteamUGCQueryCompleted&, Data, bool, bWasSuccessful);

