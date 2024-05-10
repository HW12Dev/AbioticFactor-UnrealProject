#include "Inventory.h"

UInventory::UInventory() {
}

bool UInventory::TriggerItemDrop(FSteamInventoryResult& Result, FSteamItemDef ListDefinition) {
    return false;
}

bool UInventory::TransferItemQuantity(FSteamInventoryResult& Result, FSteamItemInstanceID ItemIDSource, int32 Quantity, FSteamItemInstanceID ItemIDDest) {
    return false;
}

bool UInventory::SubmitUpdateProperties(FSteamInventoryUpdateHandle Handle, FSteamInventoryResult& ResultHandle) {
    return false;
}

FSteamInventoryUpdateHandle UInventory::StartUpdateProperties() {
    return FSteamInventoryUpdateHandle{};
}

void UInventory::StartPurchase(const FOnSteamInventoryStartPurchaseResult& Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity) {
}

bool UInventory::SetPropertyString(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, const FString& Value) {
    return false;
}

bool UInventory::SetPropertyInt(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, int32 Value) {
    return false;
}

bool UInventory::SetPropertyFloat(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, float Value) {
    return false;
}

bool UInventory::SetPropertyBool(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, bool bValue) {
    return false;
}

bool UInventory::SerializeResult(FSteamInventoryResult Handle, TArray<uint8>& Buffer) {
    return false;
}

void UInventory::RequestPrices(const FOnSteamInventoryRequestPricesResult& Callback) {
}

void UInventory::RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& Callback, FSteamID SteamID) {
}

bool UInventory::RemoveProperty(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName) {
    return false;
}

bool UInventory::LoadItemDefinitions() {
    return false;
}

bool UInventory::GrantPromoItems(FSteamInventoryResult& Result) {
    return false;
}

int32 UInventory::GetResultTimestamp(FSteamInventoryResult Handle) {
    return 0;
}

ESteamResult UInventory::GetResultStatus(FSteamInventoryResult Handle) {
    return ESteamResult::None;
}

bool UInventory::GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& Items) {
    return false;
}

bool UInventory::GetResultItemProperty(FSteamInventoryResult Handle, int32 ItemIndex, const FString& PropertyName, FString& Value) {
    return false;
}

int32 UInventory::GetNumItemsWithPrices() {
    return 0;
}

bool UInventory::GetItemsWithPrices(TArray<FSteamItemDef>& ItemDefs, TArray<int32>& Prices, TArray<int32>& BasePrices) {
    return false;
}

bool UInventory::GetItemsByID(FSteamInventoryResult& InventoryResult, TArray<FSteamItemInstanceID> InstanceIDs) {
    return false;
}

bool UInventory::GetItemPrice(FSteamItemDef ItemDef, int32& Price, int32& BasePrice) {
    return false;
}

bool UInventory::GetItemDefinitionProperty(FSteamItemDef ItemDef, const FString& PropertyName, FString& Value) {
    return false;
}

bool UInventory::GetItemDefinitionIDs(TArray<FSteamItemDef>& ItemDefs) {
    return false;
}

bool UInventory::GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& ItemDefs) {
    return false;
}

bool UInventory::GetAllItems(FSteamInventoryResult& Handle) {
    return false;
}

bool UInventory::GenerateItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ItemDefs, TArray<int32> Quantity) {
    return false;
}

bool UInventory::ExchangeItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ArrayGenerate, TArray<int32> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32> ArrayDestroyQuantity) {
    return false;
}

void UInventory::DestroyResult(FSteamInventoryResult Handle) {
}

bool UInventory::DeserializeResult(FSteamInventoryResult& Result, TArray<uint8> Buffer, bool bReservedMustBeFalse) {
    return false;
}

bool UInventory::ConsumeItem(FSteamInventoryResult& Result, FSteamItemInstanceID ItemConsume, int32 Quantity) {
    return false;
}

bool UInventory::CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected) {
    return false;
}

bool UInventory::AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs) {
    return false;
}

bool UInventory::AddPromoItem(FSteamInventoryResult& Result, FSteamItemDef ItemDef) {
    return false;
}


