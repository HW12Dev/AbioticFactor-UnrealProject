#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "KeyIconPair.h"
#include "KeyIconSet.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FKeyIconSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, TSoftObjectPtr<UTexture>> IconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyIconPair> Icons;
    
    AUTOSETTINGSINPUT_API FKeyIconSet();
};

