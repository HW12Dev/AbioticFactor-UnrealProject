#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DynamicProperty.h"
#include "EDynamicProperty.h"
#include "DynamicPropertyFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UDynamicPropertyFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDynamicPropertyFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FDynamicProperty> SetDynamicProperty(UPARAM(Ref) TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDynamicProperty(const TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32& Value);
    
};

