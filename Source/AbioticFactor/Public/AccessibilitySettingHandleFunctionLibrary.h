#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccessibilitySettingRowHandle.h"
#include "ERowValid.h"
#include "GameSetting.h"
#include "AccessibilitySettingHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAccessibilitySettingHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccessibilitySettingHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAccessibilitySettingRowHandle MakeLiteralAccessibilitySettingRowHandle(FAccessibilitySettingRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAccessibilitySettingRowHandle MakeAccessibilitySettingRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAccessibilitySettingRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAccessibilitySettingRowHandles(TArray<FAccessibilitySettingRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable)
    static void GetAccessibilitySettingRow(FAccessibilitySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AccessibilitySettingRowHandle(FAccessibilitySettingRowHandle A, FAccessibilitySettingRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesAccessibilitySettingRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakAccessibilitySettingRowHandle(const FAccessibilitySettingRowHandle RowHandle);
    
};

