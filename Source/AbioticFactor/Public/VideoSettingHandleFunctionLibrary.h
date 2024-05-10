#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "GameSetting.h"
#include "VideoSettingRowHandle.h"
#include "VideoSettingHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UVideoSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVideoSettingHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVideoSettingRowHandle MakeVideoSettingRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVideoSettingRowHandle MakeLiteralVideoSettingRowHandle(FVideoSettingRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetVideoSettingRow(FVideoSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllVideoSettingRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllVideoSettingRowHandles(TArray<FVideoSettingRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_VideoSettingRowHandle(FVideoSettingRowHandle A, FVideoSettingRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesVideoSettingRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakVideoSettingRowHandle(const FVideoSettingRowHandle RowHandle);
    
};

