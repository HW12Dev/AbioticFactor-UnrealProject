#pragma once
#include "CoreMinimal.h"
#include "ESteamP2PSend.h"
#include "OnP2PSessionConnectFailDelegate.h"
#include "OnP2PSessionRequestDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamP2PSessionState.h"
#include "Networking.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UNetworking : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnP2PSessionRequest OnP2PSessionRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnP2PSessionConnectFail OnP2PSessionConnectFailDelegate;
    
    UNetworking();

    UFUNCTION(BlueprintCallable)
    bool SendP2PPacket(FSteamID SteamIDRemote, TArray<uint8> Data, ESteamP2PSend P2PSendType, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool ReadP2PPacket(TArray<uint8>& Data, FSteamID& OutSteamIdRemote, int32 MessageSize, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool IsP2PPacketAvailable(int32& MessageSize, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState);
    
    UFUNCTION(BlueprintCallable)
    bool CloseP2PSessionWithUser(FSteamID SteamIDRemote);
    
    UFUNCTION(BlueprintCallable)
    bool CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool AllowP2PPacketRelay(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    bool AcceptP2PSessionWithUser(FSteamID SteamIDRemote);
    
};

