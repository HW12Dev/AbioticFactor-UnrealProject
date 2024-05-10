#pragma once
#include "CoreMinimal.h"
#include "BuffDebuffRowHandle.h"
#include "SetBonusEntry.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSetBonusEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredEquipmentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffDebuffRowHandle BuffRow;
    
    FSetBonusEntry();
};

