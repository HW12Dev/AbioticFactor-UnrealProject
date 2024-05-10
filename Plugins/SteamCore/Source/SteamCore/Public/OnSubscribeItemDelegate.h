#pragma once
#include "CoreMinimal.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "OnSubscribeItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSubscribeItem, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);

