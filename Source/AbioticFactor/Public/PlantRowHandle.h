#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "PlantRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FPlantRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FPlantRowHandle();
};

