#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyScale.h"
#include "AxisAssociation.generated.h"

USTRUCT(BlueprintType)
struct FAxisAssociation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey AxisKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey AnalogKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyScale> ButtonKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyScale> BooleanKeys;
    
    AUTOSETTINGSINPUT_API FAxisAssociation();
};

