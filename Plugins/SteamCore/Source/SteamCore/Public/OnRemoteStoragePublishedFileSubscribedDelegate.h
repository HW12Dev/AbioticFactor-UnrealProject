#pragma once
#include "CoreMinimal.h"
#include "RemoteStoragePublishedFileSubscribed.h"
#include "OnRemoteStoragePublishedFileSubscribedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStoragePublishedFileSubscribed, const FRemoteStoragePublishedFileSubscribed&, Data);

