#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "GlobalKeyIconTagsModifiedEventDelegate.h"
#include "GlobalKeyIconTagManager.generated.h"

class UTexture;

UCLASS(Blueprintable)
class AUTOSETTINGSINPUT_API UGlobalKeyIconTagManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalKeyIconTagsModifiedEvent OnGlobalKeyIconTagsModified;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GlobalKeyIconTags;
    
public:
    UGlobalKeyIconTagManager();

    UFUNCTION(BlueprintCallable)
    static void SetGlobalKeyIconTags(FGameplayTagContainer InGlobalIconTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture* GetIconForKey(FKey InKey, FGameplayTagContainer IconTags, float AxisScale);
    
};

