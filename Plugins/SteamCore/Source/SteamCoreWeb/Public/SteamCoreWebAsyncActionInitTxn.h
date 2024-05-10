#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionInitTxn.generated.h"

class UObject;
class USteamCoreWebAsyncActionInitTxn;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionInitTxn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionInitTxn* InitTxnAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderID, const FString& SteamID, int32 AppID, const FString& Language, const FString& Currency, const FString& UserSession, const FString& Ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory);
    
};

