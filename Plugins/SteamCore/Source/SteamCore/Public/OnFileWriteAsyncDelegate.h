#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageFileWriteAsyncComplete.h"
#include "OnFileWriteAsyncDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileWriteAsync, const FRemoteStorageFileWriteAsyncComplete&, Data, bool, bWasSuccessful);

