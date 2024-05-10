#pragma once
#include "CoreMinimal.h"
#include "OnRemoveItemFromFavoritesAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "UserFavoriteItemsListChanged.h"
#include "SteamCoreUGCAsyncActionRemoveItemFromFavorites.generated.h"

class UObject;
class USteamCoreUGCAsyncActionRemoveItemFromFavorites;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveItemFromFavoritesAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionRemoveItemFromFavorites();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32 AppID, FPublishedFileID PublishedFileID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
    
};

