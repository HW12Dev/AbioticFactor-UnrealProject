#pragma once
#include "CoreMinimal.h"
#include "FavoritesListChanged.h"
#include "OnFavoritesListChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFavoritesListChanged, const FFavoritesListChanged&, Data);

