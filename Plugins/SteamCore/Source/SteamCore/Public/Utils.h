#pragma once
#include "CoreMinimal.h"
#include "ESteamGamepadTextInputLineMode.h"
#include "ESteamGamepadTextInputMode.h"
#include "ESteamNotificationPosition.h"
#include "ESteamUniverse.h"
#include "OnCheckFileSignatureDelegate.h"
#include "OnGamepadTextInputDismissedDelegate.h"
#include "OnIPCountryDelegate.h"
#include "OnLowBatteryPowerDelegate.h"
#include "OnSteamShutdownDelegate.h"
#include "SteamCoreSubsystem.h"
#include "Utils.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UUtils : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckFileSignature CheckFileSignature;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamepadTextInputDismissed GamepadTextInputDismissed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIPCountry IPCountry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLowBatteryPower LowBatteryPower;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamShutdown SteamShutdown;
    
    UUtils();

    UFUNCTION(BlueprintCallable)
    static void StartVRDashboard();
    
    UFUNCTION(BlueprintCallable)
    static bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, const FString& Description, int32 CharMax, const FString& ExistingText);
    
    UFUNCTION(BlueprintCallable)
    static void SetVRHeadsetStreamingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVRHeadsetStreamingEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsSteamRunningOnSteamDeck();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSteamRunningInVR();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSteamInBigPictureMode();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSteamChinaLauncher();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOverlayEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool InitFilterText();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamUILanguage();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetServerRealTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSecondsSinceComputerActive();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSecondsSinceAppActive();
    
    UFUNCTION(BlueprintCallable)
    static FString GetIPCountry();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIPCCallCount();
    
    UFUNCTION(BlueprintCallable)
    static bool GetImageSize(int32 iImage, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable)
    static bool GetImageRGBA(int32 iImage, TArray<uint8>& OutBuffer);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEnteredGamepadTextLength();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnteredGamepadTextInput(FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentBatteryPower();
    
    UFUNCTION(BlueprintCallable)
    static ESteamUniverse GetConnectedUniverse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAppID_Pure();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAppID();
    
    UFUNCTION(BlueprintCallable)
    static bool BOverlayNeedsPresent();
    
};

