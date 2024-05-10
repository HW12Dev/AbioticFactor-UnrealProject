#pragma once
#include "CoreMinimal.h"
#include "GameServerRule.h"
#include "OnServerRuleAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnServerRuleAsyncDelegate, const TArray<FGameServerRule>&, Data, bool, bWasSuccessful);

