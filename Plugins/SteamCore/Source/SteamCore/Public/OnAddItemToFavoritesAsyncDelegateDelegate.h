#pragma once
#include "CoreMinimal.h"
#include "UserFavoriteItemsListChanged.h"
#include "OnAddItemToFavoritesAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddItemToFavoritesAsyncDelegate, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);

