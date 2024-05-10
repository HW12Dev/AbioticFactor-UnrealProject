#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "StatModifierRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FStatModifierRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FStatModifierRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FStatModifierRowHandle) { return 0; }

