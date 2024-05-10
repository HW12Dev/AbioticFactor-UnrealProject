#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFileFunctionsSocketServerDirectoryType.h"
#include "ERCONPasswordType.h"
#include "EReceiveFilterServer.h"
#include "EServerSocketConnectionCheckPortType.h"
#include "EServerSocketConnectionEventType.h"
#include "EServerSocketConnectionProtocol.h"
#include "ESocketPlatformServer.h"
#include "ESocketServerTCPSeparator.h"
#include "ESocketServerUDPSocketType.h"
#include "SocketServerBPLibrary.generated.h"

class UDNSClientSocketServer;
class UEventBean;
class USocketServerBPLibrary;

UCLASS(Blueprintable)
class SOCKETSERVER_API USocketServerBPLibrary : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FsocketServerUDPConnectionEventDelegate, bool, Success, const FString&, Message, const FString&, serverID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FsocketServerConnectionEventDelegate, EServerSocketConnectionEventType, Type, bool, Success, const FString&, Message, const FString&, SessionID, const FString&, serverID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FserverReceiveUDPMessageEventDelegate, const FString&, SessionID, const FString&, Message, const TArray<uint8>&, byteArray, const FString&, serverID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FserverReceiveTCPMessageEventDelegate, const FString&, SessionID, const FString&, Message, const TArray<uint8>&, byteArray, const FString&, serverID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FreceiveRCONRequestEventDelegate, const FString&, SessionID, const FString&, serverID, int32, RequestID, const FString&, request);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FreadBytesFromFileInPartsEventDelegate, int64, fileSize, int64, position, bool, End, const TArray<uint8>&, byteArray);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FfileTransferOverTCPProgressEventDelegate, const FString&, SessionID, const FString&, FilePath, float, Percent, float, mbit, int64, bytesTransferred, int64, fileSize);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FfileTransferOverTCPInfoEventDelegate, const FString&, Message, const FString&, SessionID, const FString&, FilePath, bool, Success);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FsocketServerConnectionEventDelegate onsocketServerConnectionEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FserverReceiveTCPMessageEventDelegate onserverReceiveTCPMessageEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FsocketServerUDPConnectionEventDelegate onsocketServerUDPConnectionEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FserverReceiveUDPMessageEventDelegate onserverReceiveUDPMessageEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FfileTransferOverTCPProgressEventDelegate onfileTransferOverTCPProgressEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FfileTransferOverTCPInfoEventDelegate onfileTransferOverTCPInfoEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FreadBytesFromFileInPartsEventDelegate onreadBytesFromFileInPartsEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FreceiveRCONRequestEventDelegate onreceiveRCONRequestEventDelegate;
    
    USocketServerBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void unregisterClientEvent(const FString& SessionID);
    
    UFUNCTION(BlueprintCallable)
    static void unregiserRCONServer(const FString& serverID);
    
    UFUNCTION(BlueprintCallable)
    static void stopUDPServer(const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    static void stopTCPServer(const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    static void stopAllUDPServers();
    
    UFUNCTION(BlueprintCallable)
    static void stopAllTCPServers();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool startUEGameHost(UObject* WorldContextObject, const FString& Protocol, const FString& Host, const FString& Map, const FString& RedirectURL, TArray<FString> Options, const FString& Portal, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    static void startUDPServer(FString& serverID, const FString& IP, int32 Port, bool multicast, EReceiveFilterServer receiveFilter, const FString& customServerID, int32 maxPacketSize);
    
    UFUNCTION(BlueprintCallable)
    static void startTCPServer(FString& serverID, const FString& IP, int32 Port, EReceiveFilterServer receiveFilter, ESocketServerTCPSeparator messageSeparator, const FString& customServerID);
    
    UFUNCTION(BlueprintCallable)
    static void startTCPFileServer(FString& serverID, const FString& IP, int32 Port, const FString& customServerID, const FString& Aes256bitKey, bool resumeFiles, bool writeHandShakeToLogEditorOnly);
    
    UFUNCTION(BlueprintCallable)
    void socketServerUDPConnectionEventDelegate(const bool Success, const FString& Message, const FString& serverID);
    
    UFUNCTION(BlueprintCallable)
    static void socketServerSendUDPMessageToClient(const FString& clientSessionID, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, bool asynchronous, ESocketServerUDPSocketType socketType, const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    static void socketServerSendUDPMessageTo(const FString& IP, int32 Port, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, bool asynchronous, const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    static void socketServerSendUDPMessage(TArray<FString> clientSessionIDs, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, bool asynchronous, ESocketServerUDPSocketType socketType, const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    static void socketServerSendTCPMessageToClient(const FString& clientSessionID, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    static void socketServerSendTCPMessage(TArray<FString> clientSessionIDs, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    void socketServerConnectionEventDelegate(const EServerSocketConnectionEventType Type, const bool Success, const FString& Message, const FString& SessionID, const FString& serverID);
    
    UFUNCTION(BlueprintCallable)
    void serverReceiveUDPMessageEventDelegate(const FString& SessionID, const FString& Message, const TArray<uint8>& byteArray, const FString& serverID);
    
    UFUNCTION(BlueprintCallable)
    void serverReceiveTCPMessageEventDelegate(const FString& SessionID, const FString& Message, const TArray<uint8>& byteArray, const FString& serverID);
    
    UFUNCTION(BlueprintCallable)
    static void serverPluginGetSocketSessionInfoByServerID(const FString& serverID, const FString& SessionID, bool& sessionFound, FString& IP, int32& Port, EServerSocketConnectionProtocol& connectionProtocol);
    
    UFUNCTION(BlueprintCallable)
    static void serverPluginGetSocketSessionInfo(const FString& SessionID, bool& sessionFound, FString& IP, int32& Port, EServerSocketConnectionProtocol& connectionProtocol, FString& serverID);
    
    UFUNCTION(BlueprintCallable)
    static void serverPluginGetSocketSessionIds(const FString& optionalServerID, TArray<FString>& sessionIDs);
    
    UFUNCTION(BlueprintCallable)
    static void sendRCONResponse(const FString& SessionID, const FString& serverID, int32 RequestID, const FString& Response);
    
    UFUNCTION(BlueprintCallable)
    static UDNSClientSocketServer* resolveDomain(const FString& domain, bool useDNSCache, const FString& dnsIP);
    
    UFUNCTION(BlueprintCallable)
    static void removeSessionAndCloseConnection(const FString& SessionID, const FString& optionalServerID);
    
    UFUNCTION(BlueprintCallable)
    static void removeFileToken(const FString& token);
    
    UFUNCTION(BlueprintCallable)
    static void registerRCONServer(const FString& serverID, ERCONPasswordType passwordType, const FString& passwordOrFile, bool& Success, FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    static void registerClientEvent(const FString& SessionID, UEventBean*& Event);
    
    UFUNCTION(BlueprintCallable)
    void receiveRCONRequestEventDelegate(const FString& SessionID, const FString& serverID, const int32 RequestID, const FString& request);
    
    UFUNCTION()
    void readBytesFromFileInPartsEventDelegate(const int64 fileSize, const int64 position, const bool End, const TArray<uint8>& byteArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseIntegerToBytesPure(TArray<uint8>& byteArray, int32 Value, bool switchByteOrder);
    
    UFUNCTION(BlueprintCallable)
    static void parseIntegerToBytes(TArray<uint8>& byteArray, int32 Value, bool switchByteOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseIntegerArrayToBytesPure(TArray<uint8>& byteArray, TArray<int32> Value);
    
    UFUNCTION(BlueprintPure)
    static void parseInteger64ToBytesPure(TArray<uint8>& byteArray, int64 Value, bool switchByteOrder);
    
    UFUNCTION(BlueprintCallable)
    static void parseInteger64ToBytes(TArray<uint8>& byteArray, int64 Value, bool switchByteOrder);
    
    UFUNCTION(BlueprintPure)
    static void parseInteger64ArrayToBytesPure(TArray<uint8>& byteArray, TArray<int64> Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString parseHexToStringPure(const FString& hex);
    
    UFUNCTION(BlueprintCallable)
    static FString parseHexToString(const FString& hex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> parseHexToBytesPure(const FString& hex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> parseHexToBytes(const FString& hex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseFloatToBytesPure(TArray<uint8>& byteArray, float Value, bool switchByteOrder);
    
    UFUNCTION(BlueprintCallable)
    static void parseFloatToBytes(TArray<uint8>& byteArray, float Value, bool switchByteOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseFloatArrayToBytesPure(TArray<uint8>& byteArray, TArray<float> Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseBytesToIntegerPure(TArray<uint8> bytes, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static void parseBytesToIntegerEndian(TArray<uint8> bytes, int32& littleEndian, int32& bigEndian);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseBytesToIntegerArrayPure(TArray<int32>& Value, TArray<uint8> bytes);
    
    UFUNCTION(BlueprintPure)
    static void parseBytesToInteger64Pure(TArray<uint8> bytes, int64& Value);
    
    UFUNCTION(BlueprintCallable)
    static void parseBytesToInteger64Endian(TArray<uint8> bytes, int64& littleEndian, int64& bigEndian);
    
    UFUNCTION(BlueprintPure)
    static void parseBytesToInteger64ArrayPure(TArray<int64>& Value, TArray<uint8> bytes);
    
    UFUNCTION(BlueprintCallable)
    static void parseBytesToInteger64(TArray<uint8> bytes, int64& Value);
    
    UFUNCTION(BlueprintCallable)
    static void parseBytesToInteger(TArray<uint8> bytes, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString parseBytesToHexPure(TArray<uint8> bytes);
    
    UFUNCTION(BlueprintCallable)
    static FString parseBytesToHex(TArray<uint8> bytes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseBytesToFloatPure(TArray<uint8> bytes, float& Value);
    
    UFUNCTION(BlueprintCallable)
    static void parseBytesToFloatEndian(TArray<uint8> bytes, float& littleEndian, float& bigEndian);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void parseBytesToFloatArrayPure(TArray<float>& Value, TArray<uint8> bytes);
    
    UFUNCTION(BlueprintCallable)
    static void parseBytesToFloat(TArray<uint8> bytes, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USocketServerBPLibrary* getSocketServerTarget();
    
    UFUNCTION(BlueprintCallable)
    static int32 getRandomPort(EServerSocketConnectionCheckPortType Type, const FString& IP);
    
    UFUNCTION(BlueprintCallable)
    static FString generateUniqueID();
    
    UFUNCTION()
    void fileTransferOverTCPProgressEventDelegate(const FString& SessionID, const FString& FilePath, const float Percent, const float mbit, const int64 bytesTransferred, const int64 fileSize);
    
    UFUNCTION(BlueprintCallable)
    void fileTransferOverTCPInfoEventDelegate(const FString& Message, const FString& SessionID, const FString& FilePath, const bool Success);
    
    UFUNCTION(BlueprintCallable)
    static bool checkPort(EServerSocketConnectionCheckPortType Type, const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    static void changeTCPSeparatorStringOnServer(const FString& Separator);
    
    UFUNCTION(BlueprintCallable)
    static void changeTCPSeparatorByteOnServer(uint8 Separator);
    
    UFUNCTION(BlueprintCallable)
    static void changeSocketPlatform(ESocketPlatformServer platform);
    
    UFUNCTION(BlueprintCallable)
    static void changeCleanerThreadSettingsOnServer(bool showLogs, int32 minLiveTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void addFileTokens(TMap<FString, FString> fileTokens, bool deleteAfterUse, EFileFunctionsSocketServerDirectoryType directoryType);
    
    UFUNCTION(BlueprintCallable)
    static void addFileToken(const FString& token, bool deleteTokenAfterUse, EFileFunctionsSocketServerDirectoryType directoryType, const FString& filePathOrDirectory);
    
};

