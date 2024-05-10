#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "KeybindSetting.h"
#include "KeybindSettingRowHandle.h"
#include "KeybindSettingHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UKeybindSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKeybindSettingHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeybindSettingRowHandle MakeLiteralKeybindSettingRowHandle(FKeybindSettingRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeybindSettingRowHandle MakeKeybindSettingRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetKeybindSettingRow(FKeybindSettingRowHandle RowHandle, FKeybindSetting& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllKeybindSettingRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllKeybindSettingRowHandles(TArray<FKeybindSettingRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_KeybindSettingRowHandle(FKeybindSettingRowHandle A, FKeybindSettingRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesKeybindSettingRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakKeybindSettingRowHandle(const FKeybindSettingRowHandle RowHandle);
    
};

