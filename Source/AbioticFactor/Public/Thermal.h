#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Thermal.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UThermal : public UInterface {
    GENERATED_BODY()
};

class IThermal : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ThermalEmitterActiveUpdated(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetThermalOverlapPrimitives(TArray<UPrimitiveComponent*>& OutPrimitives);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAmbientTemperature();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyNewTemperature(float NewTemperature);
    
};

