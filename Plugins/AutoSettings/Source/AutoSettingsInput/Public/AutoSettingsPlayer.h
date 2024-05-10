#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputMappingPreset.h"
#include "PlayerInputMappings.h"
#include "AutoSettingsPlayer.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAutoSettingsPlayer : public UInterface {
    GENERATED_BODY()
};

class IAutoSettingsPlayer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveInputMappings(FPlayerInputMappings InputMappings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetUniquePlayerIdentifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetInputMappings(FPlayerInputMappings& InputMappings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInputMappingPreset GetDefaultInputMappingPreset() const;
    
};

