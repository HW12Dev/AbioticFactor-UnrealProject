#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "UIKeybindAction.h"
#include "UIKeybindActionRowHandle.h"
#include "UIKeybindActionHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UUIKeybindActionHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIKeybindActionHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIKeybindActionRowHandle MakeUIKeybindActionRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIKeybindActionRowHandle MakeLiteralUIKeybindActionRowHandle(FUIKeybindActionRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetUIKeybindActionRow(FUIKeybindActionRowHandle RowHandle, FUIKeybindAction& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllUIKeybindActionRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllUIKeybindActionRowHandles(TArray<FUIKeybindActionRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_UIKeybindActionRowHandle(FUIKeybindActionRowHandle A, FUIKeybindActionRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesUIKeybindActionRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakUIKeybindActionRowHandle(const FUIKeybindActionRowHandle RowHandle);
    
};

