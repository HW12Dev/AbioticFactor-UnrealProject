#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGrantPackage.generated.h"

class UObject;
class USteamCoreWebAsyncActionGrantPackage;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGrantPackage();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 PackageId, const FString& Ipaddress, const FString& ThirdPartyKey, int32 ThirdPartyAppId);
    
};

