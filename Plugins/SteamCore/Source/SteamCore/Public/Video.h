#pragma once
#include "CoreMinimal.h"
#include "OnGetOPFSettingsResultDelegate.h"
#include "OnGetVideoURLResultDelegate.h"
#include "SteamCoreSubsystem.h"
#include "Video.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UVideo : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetOPFSettingsResult GetOPFSettingsResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetVideoURLResult GetVideoURLResult;
    
    UVideo();

    UFUNCTION(BlueprintCallable)
    static bool IsBroadcasting(int32& NumViewers);
    
    UFUNCTION(BlueprintCallable)
    static void GetVideoURL(int32 VideoAppID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOPFStringForApp(int32 VideoAppID, FString& OutBuffer);
    
    UFUNCTION(BlueprintCallable)
    static void GetOPFSettings(int32 VideoAppID);
    
};

