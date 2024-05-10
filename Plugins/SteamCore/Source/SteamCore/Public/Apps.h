#pragma once
#include "CoreMinimal.h"
#include "OnDLCInstalledDelegate.h"
#include "OnFileDetailsResultDelegate.h"
#include "OnFileDetailsResultDelegateDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "Apps.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UApps : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDLCInstalled DLCInstalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFileDetailsResultDelegate FileDetailsResultDelegate;
    
    UApps();

    UFUNCTION(BlueprintCallable)
    static void UninstallDLC(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static bool MarkContentCorrupt(bool bMissingFilesOnly);
    
    UFUNCTION(BlueprintCallable)
    static void InstallDLC(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLaunchQueryParam(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLaunchCommandLine(FString& CommandLine);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>& Depots);
    
    UFUNCTION(BlueprintCallable)
    void GetFileDetails(const FOnFileDetailsResult& Callback, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEarliestPurchaseUnixTime(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& BytesTotal);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDLCCount();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentGameLanguage();
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentBetaName(FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAvailableGameLanguages();
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetAppOwner();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAppInstallDir(int32 AppID, FString& Folder);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAppBuildId();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsVACBanned();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsTimedTrial(int32& SecondsAllowed, int32& SecondsPlayed);
    
    UFUNCTION(BlueprintCallable)
    static bool BIsSubscribedFromFreeWeekend();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsSubscribedFromFamilySharing();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsSubscribedApp(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static bool BIsSubscribed();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsLowViolence();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsDlcInstalled(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static bool BIsCybercafe();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsAppInstalled(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static bool BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name);
    
};

