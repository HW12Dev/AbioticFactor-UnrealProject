#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "SetBonus.h"
#include "SetBonusRowHandle.h"
#include "SetBonusHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API USetBonusHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USetBonusHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSetBonusRowHandle MakeSetBonusRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSetBonusRowHandle MakeLiteralSetBonusRowHandle(FSetBonusRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetSetBonusRow(FSetBonusRowHandle RowHandle, FSetBonus& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSetBonusRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllSetBonusRowHandles(TArray<FSetBonusRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_SetBonusRowHandle(FSetBonusRowHandle A, FSetBonusRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSetBonusRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakSetBonusRowHandle(const FSetBonusRowHandle RowHandle);
    
};

