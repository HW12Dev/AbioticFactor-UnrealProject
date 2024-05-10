#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageFileReadAsyncComplete.h"
#include "OnFileReadAsyncDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileReadAsync, const FRemoteStorageFileReadAsyncComplete&, Data, bool, bWasSuccessful);

