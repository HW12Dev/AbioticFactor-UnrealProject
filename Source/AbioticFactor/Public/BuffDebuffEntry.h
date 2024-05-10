#pragma once
#include "CoreMinimal.h"
#include "BuffDebuffRowHandle.h"
#include "EBodyLimbs.h"
#include "BuffDebuffEntry.generated.h"

USTRUCT(BlueprintType)
struct FBuffDebuffEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffDebuffRowHandle BuffRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyLimbs ParentLimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffExpireTime;
    
    ABIOTICFACTOR_API FBuffDebuffEntry();
};

