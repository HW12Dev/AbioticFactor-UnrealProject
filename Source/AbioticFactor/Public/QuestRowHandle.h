#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "QuestRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FQuestRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FQuestRowHandle();
};

