#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SettingUpdatedDelegateDelegate.h"
#include "SandboxPreviewSubsystem.generated.h"

UCLASS(Blueprintable)
class AUTOSETTINGS_API USandboxPreviewSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingUpdatedDelegate OnSettingUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> SandboxPreviewSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> SandboxPreviewDefaultSettings;
    
public:
    USandboxPreviewSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSandboxPreviewSettings(const TMap<FName, FString>& Settings, const TMap<FName, FString>& DefaultSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreviewSettingModified(FName SettingName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FString> GetModifiedPreviewSettings() const;
    
};

