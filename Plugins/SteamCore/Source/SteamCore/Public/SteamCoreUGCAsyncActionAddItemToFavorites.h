#pragma once
#include "CoreMinimal.h"
#include "OnAddItemToFavoritesAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreAsyncAction.h"
#include "UserFavoriteItemsListChanged.h"
#include "SteamCoreUGCAsyncActionAddItemToFavorites.generated.h"

class UObject;
class USteamCoreUGCAsyncActionAddItemToFavorites;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddItemToFavoritesAsyncDelegate OnCallback;
    
    USteamCoreUGCAsyncActionAddItemToFavorites();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(UObject* WorldContextObject, int32 AppID, FPublishedFileID PublishedFileID, float Timeout);
    
};

