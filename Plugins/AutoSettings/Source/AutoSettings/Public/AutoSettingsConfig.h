#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AutoSettingsConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class AUTOSETTINGS_API UAutoSettingsConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SettingsIniName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SettingsSectionName;
    
    UAutoSettingsConfig();

};

