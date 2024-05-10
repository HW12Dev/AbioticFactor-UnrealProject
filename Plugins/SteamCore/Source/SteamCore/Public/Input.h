#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreControllerPad.h"
#include "ESteamCoreInputActionOrigin.h"
#include "ESteamCoreInputLEDFlag.h"
#include "ESteamCoreInputType.h"
#include "ESteamCoreXboxOrigin.h"
#include "InputActionSetHandle.h"
#include "InputAnalogActionData.h"
#include "InputAnalogActionHandle.h"
#include "InputDigitalActionData.h"
#include "InputDigitalActionHandle.h"
#include "InputHandle.h"
#include "InputMotionData.h"
#include "SteamCoreSubsystem.h"
#include "Input.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UInput : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UInput();

    UFUNCTION(BlueprintCallable)
    void TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed);
    
    UFUNCTION(BlueprintCallable)
    void TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags);
    
    UFUNCTION(BlueprintCallable)
    void TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESteamCoreInputActionOrigin> TranslateActionOrigin(ESteamCoreInputType DestinationInputType, TEnumAsByte<ESteamCoreInputActionOrigin> SourceOrigin);
    
    UFUNCTION(BlueprintCallable)
    void StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction);
    
    UFUNCTION(BlueprintCallable)
    bool Shutdown();
    
    UFUNCTION(BlueprintCallable)
    bool ShowBindingPanel(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreInputLEDFlag Flags);
    
    UFUNCTION(BlueprintCallable)
    bool Init();
    
    UFUNCTION(BlueprintCallable)
    FString GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringForActionOrigin(TEnumAsByte<ESteamCoreInputActionOrigin> Origin);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemotePlaySessionID(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FInputMotionData GetMotionData(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    ESteamCoreInputType GetInputTypeForHandle(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    FString GetGlyphForActionOrigin(TEnumAsByte<ESteamCoreInputActionOrigin> Origin);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGamepadIndexForController(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<TEnumAsByte<ESteamCoreInputActionOrigin>>& OriginsOut);
    
    UFUNCTION(BlueprintCallable)
    FInputDigitalActionHandle GetDigitalActionHandle(const FString& PszActionName);
    
    UFUNCTION(BlueprintCallable)
    FInputDigitalActionData GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle);
    
    UFUNCTION(BlueprintCallable)
    bool GetDeviceBindingRevision(FInputHandle Handle, int32& Major, int32& Minor);
    
    UFUNCTION(BlueprintCallable)
    FInputActionSetHandle GetCurrentActionSet(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FInputHandle GetControllerForGamepadIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetConnectedControllers(TArray<FInputHandle>& OutHandles);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<TEnumAsByte<ESteamCoreInputActionOrigin>>& OriginsOut);
    
    UFUNCTION(BlueprintCallable)
    FInputAnalogActionHandle GetAnalogActionHandle(const FString& PszActionName);
    
    UFUNCTION(BlueprintCallable)
    FInputAnalogActionData GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data);
    
    UFUNCTION(BlueprintCallable)
    FInputActionSetHandle GetActionSetHandle(const FString& ActionSetName);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESteamCoreInputActionOrigin> GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllActionSetLayers(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);
    
    UFUNCTION(BlueprintCallable)
    void ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);
    
    UFUNCTION(BlueprintCallable)
    void ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle);
    
};

