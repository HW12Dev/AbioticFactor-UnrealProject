#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreDeviceFormFactor.h"
#include "OnSteamRemotePlaySessionConnectedDelegate.h"
#include "OnSteamRemotePlaySessionDisconnectedDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "RemotePlay.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API URemotePlay : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamRemotePlaySessionConnected SteamRemotePlaySessionConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamRemotePlaySessionDisconnected SteamRemotePlaySessionDisconnected;
    
    URemotePlay();

    UFUNCTION(BlueprintCallable)
    FSteamID GetSessionSteamID(int32 SessionID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSessionID(int32 SessionIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSessionCount();
    
    UFUNCTION(BlueprintCallable)
    FString GetSessionClientName(int32 SessionID);
    
    UFUNCTION(BlueprintCallable)
    ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32 SessionID);
    
    UFUNCTION(BlueprintCallable)
    bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    bool BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY);
    
};

