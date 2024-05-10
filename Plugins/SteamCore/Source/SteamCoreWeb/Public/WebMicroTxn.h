#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebMicroTxn.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebMicroTxn : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebMicroTxn();

    UFUNCTION(BlueprintCallable)
    void RefundTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void QueryTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& OrderID, const FString& TransId);
    
    UFUNCTION(BlueprintCallable)
    void ProcessAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, const FString& SteamID, const FString& AgreementId, int32 AppID, int32 Amount, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeTransactionID();
    
    UFUNCTION(BlueprintCallable)
    void InitTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, const FString& SteamID, int32 AppID, const FString& Language, const FString& Currency, const FString& UserSession, const FString& Ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory);
    
    UFUNCTION(BlueprintCallable)
    void GetUserInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& Ipaddress);
    
    UFUNCTION(BlueprintCallable)
    void GetUserAgreementInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetReport(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Time, const FString& Type, int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void CancelAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& AgreementId, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void AdjustAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& AgreementId, int32 AppID, const FString& NextProcessDate);
    
};

