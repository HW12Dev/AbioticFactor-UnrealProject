#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageFileShareResult.h"
#include "OnFileShareAsyncDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileShareAsync, const FRemoteStorageFileShareResult&, Data, bool, bWasSuccessful);

