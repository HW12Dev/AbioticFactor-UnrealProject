#pragma once
#include "CoreMinimal.h"
#include "ECompendiumUnlockType.h"
#include "CompendiumSection.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FCompendiumSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SectionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> OptionalSectionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompendiumUnlockType UnlockRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugUnlock;
    
    FCompendiumSection();
};

