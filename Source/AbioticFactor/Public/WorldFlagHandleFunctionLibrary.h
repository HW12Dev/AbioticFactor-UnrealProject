#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "WorldFlag.h"
#include "WorldFlagRowHandle.h"
#include "WorldFlagHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UWorldFlagHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldFlagHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWorldFlagRowHandle MakeWorldFlagRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWorldFlagRowHandle MakeLiteralWorldFlagRowHandle(FWorldFlagRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetWorldFlagRow(FWorldFlagRowHandle RowHandle, FWorldFlag& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllWorldFlagRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllWorldFlagRowHandles(TArray<FWorldFlagRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_WorldFlagRowHandle(FWorldFlagRowHandle A, FWorldFlagRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesWorldFlagRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakWorldFlagRowHandle(const FWorldFlagRowHandle RowHandle);
    
};

