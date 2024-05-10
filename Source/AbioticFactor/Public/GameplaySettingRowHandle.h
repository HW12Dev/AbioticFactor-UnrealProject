#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "GameplaySettingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FGameplaySettingRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FGameplaySettingRowHandle();
};

