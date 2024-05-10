#pragma once
#include "CoreMinimal.h"
#include "StoreAuthURLResponse.h"
#include "OnStoreAuthURLResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStoreAuthURLResponse, const FStoreAuthURLResponse&, Data, bool, bWasSuccessful);

