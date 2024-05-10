#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ControlSettingRowHandle.h"
#include "ERowValid.h"
#include "GameSetting.h"
#include "ControlSettingHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UControlSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UControlSettingHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FControlSettingRowHandle MakeLiteralControlSettingRowHandle(FControlSettingRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FControlSettingRowHandle MakeControlSettingRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetControlSettingRow(FControlSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllControlSettingRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllControlSettingRowHandles(TArray<FControlSettingRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_ControlSettingRowHandle(FControlSettingRowHandle A, FControlSettingRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesControlSettingRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakControlSettingRowHandle(const FControlSettingRowHandle RowHandle);
    
};

