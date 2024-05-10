#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "SandboxOptionRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSandboxOptionRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FSandboxOptionRowHandle();
};

