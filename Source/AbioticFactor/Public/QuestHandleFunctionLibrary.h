#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "QuestData.h"
#include "QuestRowHandle.h"
#include "QuestHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UQuestHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuestRowHandle MakeQuestRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuestRowHandle MakeLiteralQuestRowHandle(FQuestRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetQuestRow(FQuestRowHandle RowHandle, FQuestData& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllQuestRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllQuestRowHandles(TArray<FQuestRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_QuestRowHandle(FQuestRowHandle A, FQuestRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesQuestRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakQuestRowHandle(const FQuestRowHandle RowHandle);
    
};

