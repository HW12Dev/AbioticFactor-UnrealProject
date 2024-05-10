#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DNSClientSocketServer.generated.h"

UCLASS(Blueprintable)
class SOCKETSERVER_API UDNSClientSocketServer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FresolveDomainEventDelegate, const FString&, IP);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FresolveDomainEventDelegate onresolveDomainEventDelegate;
    
    UDNSClientSocketServer();

    UFUNCTION(BlueprintCallable)
    void resolveDomainEventDelegate(const FString& IP);
    
};

