#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsResult.h"
#include "OnDownloadClanActivityCountsAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadClanActivityCountsAsyncDelegate, const FDownloadClanActivityCountsResult&, Data, bool, bWasSuccessful);

