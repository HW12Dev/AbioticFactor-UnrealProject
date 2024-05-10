#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "AutoSettingsInputConfig.h"
#include "AutoSettingsInputProjectConfig.generated.h"

class UTexture;

UCLASS(Blueprintable)
class AUTOSETTINGSINPUT_API UAutoSettingsInputProjectConfig : public UAutoSettingsInputConfig {
    GENERATED_BODY()
public:
    UAutoSettingsInputProjectConfig();

    UFUNCTION(BlueprintCallable)
    static TArray<UTexture*> LoadKeyIcons(FGameplayTagContainer KeyIconTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetKeyGroupStatic(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetKeyFriendlyNameStatic(FKey Key);
    
};

