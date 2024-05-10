#pragma once
#include "CoreMinimal.h"
#include "CreateItemResult.h"
#include "OnCreateItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCreateItem, const FCreateItemResult&, Data, bool, bWasSuccessful);

