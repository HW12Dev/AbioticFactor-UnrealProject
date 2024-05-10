#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputCoreTypes.h"
#include "KeybindActionArray.h"
#include "UIKeybindActionRowHandle.h"
#include "KeybindSubsystem.generated.h"

class UAbioticWidget;
class UKeybindAction;

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UKeybindSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FKeybindActionArray> KeybindActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UAbioticWidget>, FKeybindActionArray> SupportedKeybindActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUIKeybindActionRowHandle, UKeybindAction*> KeybindActionInstances;
    
    UKeybindSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKeybindAction* GetKeybindAction(FUIKeybindActionRowHandle RowHandle);
    
};

