#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageUnsubscribePublishedFileResult.h"
#include "OnRemoteStorageUnsubscribePublishedFileResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStorageUnsubscribePublishedFileResult, const FRemoteStorageUnsubscribePublishedFileResult&, Data);

