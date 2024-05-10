#pragma once
#include "CoreMinimal.h"
#include "SetUserItemVoteResult.h"
#include "OnSetUserItemVoteAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSetUserItemVoteAsyncDelegate, const FSetUserItemVoteResult&, Data, bool, bWasSuccessful);

