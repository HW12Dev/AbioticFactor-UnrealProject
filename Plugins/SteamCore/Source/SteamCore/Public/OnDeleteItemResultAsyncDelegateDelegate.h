#pragma once
#include "CoreMinimal.h"
#include "UGCDeleteItemResult.h"
#include "OnDeleteItemResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeleteItemResultAsyncDelegate, const FUGCDeleteItemResult&, Data, bool, bWasSuccessful);

