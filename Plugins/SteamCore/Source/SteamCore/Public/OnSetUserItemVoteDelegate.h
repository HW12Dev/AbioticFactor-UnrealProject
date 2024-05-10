#pragma once
#include "CoreMinimal.h"
#include "SetUserItemVoteResult.h"
#include "OnSetUserItemVoteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSetUserItemVote, const FSetUserItemVoteResult&, Data, bool, bWasSuccessful);

