#pragma once
#include "CoreMinimal.h"
#include "UGCDeleteItemResult.h"
#include "OnDeleteItemResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDeleteItemResult, const FUGCDeleteItemResult&, Data, bool, bWasSuccessful);

