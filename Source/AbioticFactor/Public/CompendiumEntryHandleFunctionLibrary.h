#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CompendiumEntry.h"
#include "CompendiumEntryRowHandle.h"
#include "ERowValid.h"
#include "CompendiumEntryHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UCompendiumEntryHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCompendiumEntryHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCompendiumEntryRowHandle MakeLiteralCompendiumEntryRowHandle(FCompendiumEntryRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCompendiumEntryRowHandle MakeCompendiumEntryRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetCompendiumEntryRow(FCompendiumEntryRowHandle RowHandle, FCompendiumEntry& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllCompendiumEntryRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllCompendiumEntryRowHandles(TArray<FCompendiumEntryRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_CompendiumEntryRowHandle(FCompendiumEntryRowHandle A, FCompendiumEntryRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesCompendiumEntryRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakCompendiumEntryRowHandle(const FCompendiumEntryRowHandle RowHandle);
    
};

