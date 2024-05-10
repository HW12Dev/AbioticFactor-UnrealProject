#pragma once
#include "CoreMinimal.h"
#include "UserFavoriteItemsListChanged.h"
#include "OnAddItemToFavoritesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAddItemToFavorites, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);

