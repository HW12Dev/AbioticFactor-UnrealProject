#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CompendiumEntryRowHandle.h"
#include "CompendiumEntryItem.generated.h"

class UCompendiumEntryItem;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UCompendiumEntryItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompendiumEntryRowHandle CompendiumEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UCompendiumEntryItem();

    UFUNCTION(BlueprintCallable)
    static FText RedactText(const FText& SourceString, const FString& RedactSymbol);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UCompendiumEntryItem*> GetCompendiumEntries();
    
};

