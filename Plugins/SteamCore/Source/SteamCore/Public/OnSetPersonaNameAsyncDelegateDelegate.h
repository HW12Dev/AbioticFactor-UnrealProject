#pragma once
#include "CoreMinimal.h"
#include "SetPersonaNameResponse.h"
#include "OnSetPersonaNameAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSetPersonaNameAsyncDelegate, const FSetPersonaNameResponse&, Data, bool, bWasSuccessful);

