#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KeybindSettingRowHandle.h"
#include "ItemAction.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FItemAction : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeybindSettingRowHandle KeyBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FItemAction();
};

