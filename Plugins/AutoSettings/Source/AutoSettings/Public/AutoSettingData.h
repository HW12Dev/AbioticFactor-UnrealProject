#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AutoSettingData.generated.h"

USTRUCT(BlueprintType)
struct FAutoSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    AUTOSETTINGS_API FAutoSettingData();
};

