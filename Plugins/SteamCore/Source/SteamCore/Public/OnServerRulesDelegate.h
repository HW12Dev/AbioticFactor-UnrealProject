#pragma once
#include "CoreMinimal.h"
#include "GameServerRule.h"
#include "OnServerRulesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerRules, const TArray<FGameServerRule>&, Data, bool, bWasSuccessful);

