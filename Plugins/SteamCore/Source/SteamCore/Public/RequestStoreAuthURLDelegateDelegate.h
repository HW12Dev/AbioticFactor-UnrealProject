#pragma once
#include "CoreMinimal.h"
#include "StoreAuthURLResponse.h"
#include "RequestStoreAuthURLDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestStoreAuthURLDelegate, const FStoreAuthURLResponse&, Data, bool, bWasSuccessful);

