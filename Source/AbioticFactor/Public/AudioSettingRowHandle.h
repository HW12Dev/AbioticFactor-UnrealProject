#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "AudioSettingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAudioSettingRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FAudioSettingRowHandle();
};

