#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "OnDownloadItemResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadItemResult, const FDownloadItemResult&, Data);

