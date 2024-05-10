#pragma once
#include "CoreMinimal.h"
#include "OnSteamAppInstalledDelegate.h"
#include "OnSteamAppUninstalledDelegate.h"
#include "SteamCoreSubsystem.h"
#include "AppList.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UAppList : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamAppInstalled SteamAppInstalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamAppUninstalled SteamAppUninstalled;
    
    UAppList();

    UFUNCTION(BlueprintCallable)
    int32 GetNumInstalledApps();
    
    UFUNCTION(BlueprintCallable)
    int32 GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppName(int32 AppID, FString& Name);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppInstallDir(int32 AppID, FString& Directory);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppBuildId(int32 AppID);
    
};

