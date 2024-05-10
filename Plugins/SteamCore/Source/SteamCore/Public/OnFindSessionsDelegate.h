#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "OnFindSessionsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFindSessions, const TArray<FBlueprintSessionResult>&, Data, bool, bWasSuccessful);

