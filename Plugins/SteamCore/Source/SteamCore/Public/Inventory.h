#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "OnRequestEligiblePromoItemDefinitionsIDsDelegate.h"
#include "OnSteamInventoryDefinitionUpdateDelegate.h"
#include "OnSteamInventoryEligiblePromoItemDefIDsDelegate.h"
#include "OnSteamInventoryFullUpdateDelegate.h"
#include "OnSteamInventoryRequestPricesResultDelegate.h"
#include "OnSteamInventoryRequestPricesResultDelegateDelegate.h"
#include "OnSteamInventoryResultReadyDelegate.h"
#include "OnSteamInventoryStartPurchaseResultDelegate.h"
#include "OnSteamInventoryStartPurchaseResultDelegateDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamInventoryResult.h"
#include "SteamInventoryUpdateHandle.h"
#include "SteamItemDef.h"
#include "SteamItemDetails.h"
#include "SteamItemInstanceID.h"
#include "Inventory.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UInventory : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryResultReady SteamInventoryResultReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryDefinitionUpdate SteamInventoryDefinitionUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryFullUpdate SteamInventoryFullUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryStartPurchaseResultDelegate SteamInventoryStartPurchaseResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryRequestPricesResultDelegate SteamInventoryRequestPricesResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryEligiblePromoItemDefIDs SteamInventoryEligiblePromoItemDefIDs;
    
    UInventory();

    UFUNCTION(BlueprintCallable)
    static bool TriggerItemDrop(FSteamInventoryResult& Result, FSteamItemDef ListDefinition);
    
    UFUNCTION(BlueprintCallable)
    static bool TransferItemQuantity(FSteamInventoryResult& Result, FSteamItemInstanceID ItemIDSource, int32 Quantity, FSteamItemInstanceID ItemIDDest);
    
    UFUNCTION(BlueprintCallable)
    static bool SubmitUpdateProperties(FSteamInventoryUpdateHandle Handle, FSteamInventoryResult& ResultHandle);
    
    UFUNCTION(BlueprintCallable)
    static FSteamInventoryUpdateHandle StartUpdateProperties();
    
    UFUNCTION(BlueprintCallable)
    void StartPurchase(const FOnSteamInventoryStartPurchaseResult& Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPropertyString(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPropertyInt(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPropertyFloat(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPropertyBool(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SerializeResult(FSteamInventoryResult Handle, TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    void RequestPrices(const FOnSteamInventoryRequestPricesResult& Callback);
    
    UFUNCTION(BlueprintCallable)
    void RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& Callback, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveProperty(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadItemDefinitions();
    
    UFUNCTION(BlueprintCallable)
    static bool GrantPromoItems(FSteamInventoryResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResultTimestamp(FSteamInventoryResult Handle);
    
    UFUNCTION(BlueprintCallable)
    static ESteamResult GetResultStatus(FSteamInventoryResult Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& Items);
    
    UFUNCTION(BlueprintCallable)
    static bool GetResultItemProperty(FSteamInventoryResult Handle, int32 ItemIndex, const FString& PropertyName, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumItemsWithPrices();
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemsWithPrices(TArray<FSteamItemDef>& ItemDefs, TArray<int32>& Prices, TArray<int32>& BasePrices);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemsByID(FSteamInventoryResult& InventoryResult, TArray<FSteamItemInstanceID> InstanceIDs);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemPrice(FSteamItemDef ItemDef, int32& Price, int32& BasePrice);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemDefinitionProperty(FSteamItemDef ItemDef, const FString& PropertyName, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemDefinitionIDs(TArray<FSteamItemDef>& ItemDefs);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& ItemDefs);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllItems(FSteamInventoryResult& Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ItemDefs, TArray<int32> Quantity);
    
    UFUNCTION(BlueprintCallable)
    static bool ExchangeItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ArrayGenerate, TArray<int32> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32> ArrayDestroyQuantity);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyResult(FSteamInventoryResult Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool DeserializeResult(FSteamInventoryResult& Result, TArray<uint8> Buffer, bool bReservedMustBeFalse);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumeItem(FSteamInventoryResult& Result, FSteamItemInstanceID ItemConsume, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected);
    
    UFUNCTION(BlueprintCallable)
    static bool AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs);
    
    UFUNCTION(BlueprintCallable)
    static bool AddPromoItem(FSteamInventoryResult& Result, FSteamItemDef ItemDef);
    
};

