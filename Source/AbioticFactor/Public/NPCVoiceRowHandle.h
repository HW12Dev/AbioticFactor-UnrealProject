#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "NPCVoiceRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FNPCVoiceRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FNPCVoiceRowHandle();
};

