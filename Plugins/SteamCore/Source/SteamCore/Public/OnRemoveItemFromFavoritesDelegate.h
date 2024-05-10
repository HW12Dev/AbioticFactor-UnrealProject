#pragma once
#include "CoreMinimal.h"
#include "UserFavoriteItemsListChanged.h"
#include "OnRemoveItemFromFavoritesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRemoveItemFromFavorites, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);

