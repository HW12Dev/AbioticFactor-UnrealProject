#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BuffDebuffRowHandle.h"
#include "SkillPerk.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSkillPerk : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffDebuffRowHandle BuffDebuff;
    
    FSkillPerk();
};

