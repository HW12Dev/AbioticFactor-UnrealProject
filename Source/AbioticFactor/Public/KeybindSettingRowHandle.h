#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "KeybindSettingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FKeybindSettingRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FKeybindSettingRowHandle();
};

