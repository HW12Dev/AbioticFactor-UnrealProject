#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "OnSubscribeItemAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSubscribeItemAsyncDelegate, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);

