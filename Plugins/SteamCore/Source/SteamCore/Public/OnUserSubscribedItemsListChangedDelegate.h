#pragma once
#include "CoreMinimal.h"
#include "UserSubscribedItemsListChanged.h"
#include "OnUserSubscribedItemsListChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserSubscribedItemsListChanged, const FUserSubscribedItemsListChanged&, Data);

