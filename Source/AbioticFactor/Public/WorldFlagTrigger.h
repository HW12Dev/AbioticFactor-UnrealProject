#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WorldFlagRowHandle.h"
#include "WorldFlagTrigger.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FWorldFlagTrigger : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldFlagRowHandle> RequiredWorldFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldFlagRowHandle WorldFlagToGrant;
    
    FWorldFlagTrigger();
};

