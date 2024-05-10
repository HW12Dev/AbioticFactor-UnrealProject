#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "InputMappingPreset.h"
#include "OnMappingsChangedDelegate.h"
#include "PlayerInputMappings.h"
#include "InputMappingManager.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable, Config=Settings)
class AUTOSETTINGSINPUT_API UInputMappingManager : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappingsChanged OnMappingsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerInputMappings> PlayerInputOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> RegisteredPlayerControllers;
    
public:
    UInputMappingManager();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerKeyGroupStatic(APlayerController* Player, FGameplayTag KeyGroup);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerInputPresetStatic(APlayerController* Player, FInputMappingPreset Preset);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerInputPresetByTag(APlayerController* Player, FGameplayTag PresetTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRegisteredPlayerControllerDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool InitializePlayerInputOverridesStatic(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerMappingsByKey(APlayerController* Player, FKey Key, TArray<FInputActionKeyMapping>& Actions, TArray<FInputAxisKeyMapping>& Axes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerInputMappings GetPlayerInputMappingsStatic(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputAxisKeyMapping GetPlayerAxisMappingStatic(APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetPlayerAxisMappings(APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputAxisKeyMapping GetPlayerAxisMapping(APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputActionKeyMapping GetPlayerActionMappingStatic(APlayerController* Player, FName ActionName, int32 MappingGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetPlayerActionMappings(APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputActionKeyMapping GetPlayerActionMapping(APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FInputMappingPreset> GetDefaultInputPresets();
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerAxisOverrideStatic(APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerAxisOverride(APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup, bool bClear);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerActionOverrideStatic(APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerActionOverride(APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup, bool bClear);
    
};

