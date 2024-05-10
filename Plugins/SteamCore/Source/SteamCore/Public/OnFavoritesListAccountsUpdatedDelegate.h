#pragma once
#include "CoreMinimal.h"
#include "FavoritesListAccountsUpdated.h"
#include "OnFavoritesListAccountsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFavoritesListAccountsUpdated, const FFavoritesListAccountsUpdated&, Data);

