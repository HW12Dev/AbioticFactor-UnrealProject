#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageDownloadUGCResult.h"
#include "OnUGCDownloadAsyncDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUGCDownloadAsync, const FRemoteStorageDownloadUGCResult&, Data, bool, bWasSuccessful);

