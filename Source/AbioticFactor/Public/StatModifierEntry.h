#pragma once
#include "CoreMinimal.h"
#include "StatModifierRowHandle.h"
#include "StatModifierEntry.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FStatModifierEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatModifierRowHandle Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FStatModifierEntry();
};

