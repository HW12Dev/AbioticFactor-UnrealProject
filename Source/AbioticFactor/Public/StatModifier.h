#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStatModifierApplyType.h"
#include "StatModifier.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FStatModifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatModifierApplyType ApplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatMultiplier;
    
    FStatModifier();
};

