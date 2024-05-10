#pragma once
#include "CoreMinimal.h"
#include "EVanityUrlType.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionResolveVanityURL.generated.h"

class UObject;
class USteamCoreWebAsyncActionResolveVanityURL;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionResolveVanityURL();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(UObject* WorldContextObject, const FString& Key, const FString& VanityURL, EVanityUrlType URLType);
    
};

