#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "FavoritesListAccountsUpdated.generated.h"

USTRUCT(BlueprintType)
struct FFavoritesListAccountsUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    STEAMCORE_API FFavoritesListAccountsUpdated();
};

