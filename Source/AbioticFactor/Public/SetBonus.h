#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BuffDebuffRowHandle.h"
#include "SetBonusEntry.h"
#include "SetBonus.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSetBonus : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffDebuffRowHandle BuffRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredEquipmentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetBonusEntry> Buffs;
    
    FSetBonus();
};

