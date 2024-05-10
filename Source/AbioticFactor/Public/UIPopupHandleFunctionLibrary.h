#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "UIPopup.h"
#include "UIPopupRowHandle.h"
#include "UIPopupHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UUIPopupHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIPopupHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIPopupRowHandle MakeUIPopupRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUIPopupRowHandle MakeLiteralUIPopupRowHandle(FUIPopupRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetUIPopupRow(FUIPopupRowHandle RowHandle, FUIPopup& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllUIPopupRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllUIPopupRowHandles(TArray<FUIPopupRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_UIPopupRowHandle(FUIPopupRowHandle A, FUIPopupRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesUIPopupRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakUIPopupRowHandle(const FUIPopupRowHandle RowHandle);
    
};

