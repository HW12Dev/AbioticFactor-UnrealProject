#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "OnRemoteStorageSubscribePublishedFileResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStorageSubscribePublishedFileResult, const FRemoteStorageSubscribePublishedFileResult&, Data);

