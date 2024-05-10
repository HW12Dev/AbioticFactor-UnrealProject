#pragma once
#include "CoreMinimal.h"
#include "UserFavoriteItemsListChanged.h"
#include "OnRemoveItemFromFavoritesAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveItemFromFavoritesAsyncDelegate, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);

