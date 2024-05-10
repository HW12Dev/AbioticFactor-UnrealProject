#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIKeybindAction.generated.h"

class UAbioticWidget;
class UKeybindAction;

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FUIKeybindAction : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAbioticWidget>> SupportedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKeybindAction> KeybindAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FUIKeybindAction();
};

