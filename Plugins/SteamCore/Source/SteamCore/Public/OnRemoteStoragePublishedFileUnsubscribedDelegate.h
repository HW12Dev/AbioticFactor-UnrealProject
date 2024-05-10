#pragma once
#include "CoreMinimal.h"
#include "RemoteStoragePublishedFileUnsubscribed.h"
#include "OnRemoteStoragePublishedFileUnsubscribedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStoragePublishedFileUnsubscribed, const FRemoteStoragePublishedFileUnsubscribed&, Data);

