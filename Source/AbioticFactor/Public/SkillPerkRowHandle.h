#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "SkillPerkRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSkillPerkRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FSkillPerkRowHandle();
};

