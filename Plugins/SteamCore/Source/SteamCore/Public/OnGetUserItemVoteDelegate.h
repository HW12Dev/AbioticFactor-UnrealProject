#pragma once
#include "CoreMinimal.h"
#include "GetUserItemVoteResult.h"
#include "OnGetUserItemVoteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetUserItemVote, const FGetUserItemVoteResult&, Data, bool, bWasSuccessful);

