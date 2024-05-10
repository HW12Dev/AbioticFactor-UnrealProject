#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "CompendiumEntryRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FCompendiumEntryRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FCompendiumEntryRowHandle();
};

