#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "OnUnsubscribeItemAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnsubscribeItemAsyncDelegate, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);

