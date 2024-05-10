#include "WebMicroTxn.h"

UWebMicroTxn::UWebMicroTxn() {
}

void UWebMicroTxn::RefundTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, int32 AppID) {
}

void UWebMicroTxn::QueryTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& OrderID, const FString& TransId) {
}

void UWebMicroTxn::ProcessAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, const FString& SteamID, const FString& AgreementId, int32 AppID, int32 Amount, const FString& Currency) {
}

FString UWebMicroTxn::MakeTransactionID() {
    return TEXT("");
}

void UWebMicroTxn::InitTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, const FString& SteamID, int32 AppID, const FString& Language, const FString& Currency, const FString& UserSession, const FString& Ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory) {
}

void UWebMicroTxn::GetUserInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& Ipaddress) {
}

void UWebMicroTxn::GetUserAgreementInfo(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, int32 AppID) {
}

void UWebMicroTxn::GetReport(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& Time, const FString& Type, int32 MaxResults) {
}

void UWebMicroTxn::FinalizeTxn(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& OrderID, int32 AppID) {
}

void UWebMicroTxn::CancelAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& AgreementId, int32 AppID) {
}

void UWebMicroTxn::AdjustAgreement(const FOnSteamCoreWebCallback& Callback, const FString& Key, const FString& SteamID, const FString& AgreementId, int32 AppID, const FString& NextProcessDate) {
}


