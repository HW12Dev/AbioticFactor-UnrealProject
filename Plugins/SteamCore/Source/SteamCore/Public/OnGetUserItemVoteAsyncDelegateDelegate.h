#pragma once
#include "CoreMinimal.h"
#include "GetUserItemVoteResult.h"
#include "OnGetUserItemVoteAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetUserItemVoteAsyncDelegate, const FGetUserItemVoteResult&, Data, bool, bWasSuccessful);

