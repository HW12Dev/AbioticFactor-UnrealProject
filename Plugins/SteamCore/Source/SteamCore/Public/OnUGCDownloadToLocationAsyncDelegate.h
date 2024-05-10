#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageDownloadUGCResult.h"
#include "OnUGCDownloadToLocationAsyncDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUGCDownloadToLocationAsync, const FRemoteStorageDownloadUGCResult&, Data, bool, bWasSuccessful);

