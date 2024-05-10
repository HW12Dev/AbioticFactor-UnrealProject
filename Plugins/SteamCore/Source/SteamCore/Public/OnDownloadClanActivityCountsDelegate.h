#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsResult.h"
#include "OnDownloadClanActivityCountsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadClanActivityCounts, const FDownloadClanActivityCountsResult&, Data, bool, bWasSuccessful);

