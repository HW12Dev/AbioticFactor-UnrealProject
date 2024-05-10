#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECharacterSkills.h"
#include "SkillPerkRowHandle.h"
#include "StatModifierRowHandle.h"
#include "SkillData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSkillData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSkills SkillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FStatModifierRowHandle, int32> StatModifierMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillPerkRowHandle> Perks;
    
    FSkillData();
};

