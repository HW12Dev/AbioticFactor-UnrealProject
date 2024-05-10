#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "NPCConversationRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FNPCConversationRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FNPCConversationRowHandle();
};

