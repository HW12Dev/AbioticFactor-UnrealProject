#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "OnUnsubscribeItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUnsubscribeItem, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);

