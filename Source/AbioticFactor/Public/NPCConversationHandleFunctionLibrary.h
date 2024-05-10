#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERowValid.h"
#include "NPCConversation.h"
#include "NPCConversationRowHandle.h"
#include "NPCConversationHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UNPCConversationHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNPCConversationHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNPCConversationRowHandle MakeNPCConversationRowHandle(const FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNPCConversationRowHandle MakeLiteralNPCConversationRowHandle(FNPCConversationRowHandle RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void GetNPCConversationRow(FNPCConversationRowHandle RowHandle, FNPCConversation& Data, ERowValid& ReturnPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllNPCConversationRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllNPCConversationRowHandles(TArray<FNPCConversationRowHandle>& OutRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_NPCConversationRowHandle(FNPCConversationRowHandle A, FNPCConversationRowHandle B);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesNPCConversationRowExist(FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BreakNPCConversationRowHandle(const FNPCConversationRowHandle RowHandle);
    
};

