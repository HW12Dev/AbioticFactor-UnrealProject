#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "OnDownloadItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadItem, const FDownloadItemResult&, Data, bool, bWasSuccessful);

