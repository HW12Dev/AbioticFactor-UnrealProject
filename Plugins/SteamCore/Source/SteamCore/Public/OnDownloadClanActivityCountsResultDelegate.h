#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsResult.h"
#include "OnDownloadClanActivityCountsResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadClanActivityCountsResult, const FDownloadClanActivityCountsResult&, Data);

