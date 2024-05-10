#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "ItemActionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FItemActionRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FItemActionRowHandle();
};

