#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "AutoSettingData.h"
#include "OnSettingSavedDelegate.h"
#include "SettingsManager.generated.h"

UCLASS(Blueprintable)
class AUTOSETTINGS_API USettingsManager : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingSaved OnSettingSaved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IniFilename;
    
public:
    USettingsManager();

    UFUNCTION(BlueprintCallable)
    static void SaveSettingStatic(FAutoSettingData SettingData);
    
    UFUNCTION(BlueprintCallable)
    void ResetSettings();
    
    UFUNCTION(BlueprintCallable)
    static void AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySettingStatic(FAutoSettingData SettingData);
    
};

