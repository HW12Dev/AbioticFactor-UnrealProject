#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RCONServer.generated.h"

UCLASS(Blueprintable)
class SOCKETSERVER_API URCONServer : public UObject {
    GENERATED_BODY()
public:
    URCONServer();

    UFUNCTION(BlueprintCallable)
    void receiveTCPMessageEvent(const FString& SessionID, const FString& Message, const TArray<uint8>& byteArray, const FString& serverID);
    
};

