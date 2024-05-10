#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "OnDownloadItemResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadItemResultDelegate, const FDownloadItemResult&, Data, bool, bWasSuccessful);

