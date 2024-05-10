#pragma once
#include "CoreMinimal.h"
#include "EDynamicProperty.h"
#include "DynamicProperty.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FDynamicProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicProperty Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FDynamicProperty();
};

