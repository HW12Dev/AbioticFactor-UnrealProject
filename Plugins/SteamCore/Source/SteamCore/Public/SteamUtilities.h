#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESteamAccountType.h"
#include "ESteamAttributeType.h"
#include "ESteamComparisonOp.h"
#include "ESteamCoreIdentical.h"
#include "ESteamCoreValid.h"
#include "HostPingData.h"
#include "OnHTTPResponseDelegate.h"
#include "OnSteamMessageDelegate.h"
#include "PublishedFileID.h"
#include "SteamGameID.h"
#include "SteamID.h"
#include "SteamInventoryUpdateHandle.h"
#include "SteamItemInstanceID.h"
#include "SteamSessionSearchSetting.h"
#include "SteamSessionSetting.h"
#include "SteamTicketHandle.h"
#include "SteamUGCHandle.h"
#include "SteamUtilities.generated.h"

class APlayerState;
class UObject;
class UServerFilter;

UCLASS(Abstract, Blueprintable)
class STEAMCORE_API USteamUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamUtilities();

    UFUNCTION(BlueprintCallable)
    static bool WriteBytesToFile(bool bOverwriteIfExists, const FString& AbsoluteFilePath, const TArray<uint8>& DataBuffer);
    
    UFUNCTION(BlueprintCallable)
    static void SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID A, FSteamItemInstanceID B, ESteamCoreIdentical& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SteamItemInstanceID_Equals(FSteamItemInstanceID A, FSteamItemInstanceID B);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> ReadFileToBytes(const FString& AbsoluteFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B);
    
    UFUNCTION(BlueprintCallable)
    static void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreIdentical& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual(FSteamID A, FSteamID B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamUGCHandle MakeUGCHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamTicketHandle MakeTicketHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSetting MakeString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamID MakeSteamID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamGameID MakeSteamGameID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSearchSetting MakeSearchString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSearchSetting MakeSearchInteger(const ESteamComparisonOp ComparisonOperator, const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSearchSetting MakeSearchBool(const bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPublishedFileID MakePublishedFileID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSetting MakeInteger(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void ListenForSteamMessages(const FOnSteamMessage& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsPlayerInSession(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString K2_HexToString(TArray<uint8> Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> K2_HexToBytes(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsingP2PRelays();
    
    UFUNCTION(BlueprintCallable)
    static void IsUGCHandleValid_Exec(const FSteamUGCHandle Handle, ESteamCoreValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUGCHandleValid(const FSteamUGCHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void IsSteamTicketHandleValid_Exec(const FSteamTicketHandle Handle, ESteamCoreValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamTicketHandleValid(const FSteamTicketHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSteamServerInitialized();
    
    UFUNCTION(BlueprintCallable)
    static void IsSteamInventoryUpdateHandleValid_Exec(const FSteamInventoryUpdateHandle Handle, ESteamCoreValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamInventoryUpdateHandleValid(const FSteamInventoryUpdateHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void IsSteamIDValid_Exec(const FSteamID SteamID, ESteamCoreValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRecalculatingPing();
    
    UFUNCTION(BlueprintCallable)
    static void IsPublishedFileIDValid_Exec(const FPublishedFileID Handle, ESteamCoreValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPublishedFileIDValid(FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLobby(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void IsGameIDValid_Exec(const FSteamGameID GameID, ESteamCoreValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameIDValid(const FSteamGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESteamAttributeType GetType(FSteamSessionSetting Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetString(FSteamSessionSetting Settings, FString& Key, FString& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetSteamIdFromPlayerState(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void GetPublicIp(const FOnHTTPResponse& Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPingFromHostData(const FHostPingData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetInteger(FSteamSessionSetting Settings, FString& Key, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static FHostPingData GetHostPingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameEngineInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESteamAccountType GetAccountType(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime FromUnixTimestamp(const FString& Timestamp);
    
    UFUNCTION(BlueprintCallable)
    static void Equal_Exec(FSteamID A, const FSteamID B, ESteamCoreIdentical& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal(FSteamID A, FSteamID B);
    
    UFUNCTION(BlueprintCallable)
    static FString EncryptString(const FString& String);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UServerFilter* ConstructServerFilter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakUGCHandle(FSteamUGCHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakTicketHandle(FSteamTicketHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakSteamID(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakSteamGameID(FSteamGameID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakPublishedFileID(FPublishedFileID FileID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> BP_StringToBytes(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BP_BytesToString(TArray<uint8> Array);
    
};

