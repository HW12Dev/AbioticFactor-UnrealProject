#include "SocketServerBPLibrary.h"

USocketServerBPLibrary::USocketServerBPLibrary() {
}

void USocketServerBPLibrary::unregisterClientEvent(const FString& SessionID) {
}

void USocketServerBPLibrary::unregiserRCONServer(const FString& serverID) {
}

void USocketServerBPLibrary::stopUDPServer(const FString& optionalServerID) {
}

void USocketServerBPLibrary::stopTCPServer(const FString& optionalServerID) {
}

void USocketServerBPLibrary::stopAllUDPServers() {
}

void USocketServerBPLibrary::stopAllTCPServers() {
}

bool USocketServerBPLibrary::startUEGameHost(UObject* WorldContextObject, const FString& Protocol, const FString& Host, const FString& Map, const FString& RedirectURL, TArray<FString> Options, const FString& Portal, int32 Port) {
    return false;
}

void USocketServerBPLibrary::startUDPServer(FString& serverID, const FString& IP, int32 Port, bool multicast, EReceiveFilterServer receiveFilter, const FString& customServerID, int32 maxPacketSize) {
}

void USocketServerBPLibrary::startTCPServer(FString& serverID, const FString& IP, int32 Port, EReceiveFilterServer receiveFilter, ESocketServerTCPSeparator messageSeparator, const FString& customServerID) {
}

void USocketServerBPLibrary::startTCPFileServer(FString& serverID, const FString& IP, int32 Port, const FString& customServerID, const FString& Aes256bitKey, bool resumeFiles, bool writeHandShakeToLogEditorOnly) {
}

void USocketServerBPLibrary::socketServerUDPConnectionEventDelegate(const bool Success, const FString& Message, const FString& serverID) {
}

void USocketServerBPLibrary::socketServerSendUDPMessageToClient(const FString& clientSessionID, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, bool asynchronous, ESocketServerUDPSocketType socketType, const FString& optionalServerID) {
}

void USocketServerBPLibrary::socketServerSendUDPMessageTo(const FString& IP, int32 Port, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, bool asynchronous, const FString& optionalServerID) {
}

void USocketServerBPLibrary::socketServerSendUDPMessage(TArray<FString> clientSessionIDs, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, bool asynchronous, ESocketServerUDPSocketType socketType, const FString& optionalServerID) {
}

void USocketServerBPLibrary::socketServerSendTCPMessageToClient(const FString& clientSessionID, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, const FString& optionalServerID) {
}

void USocketServerBPLibrary::socketServerSendTCPMessage(TArray<FString> clientSessionIDs, const FString& Message, TArray<uint8> byteArray, bool addLineBreak, const FString& optionalServerID) {
}

void USocketServerBPLibrary::socketServerConnectionEventDelegate(const EServerSocketConnectionEventType Type, const bool Success, const FString& Message, const FString& SessionID, const FString& serverID) {
}

void USocketServerBPLibrary::serverReceiveUDPMessageEventDelegate(const FString& SessionID, const FString& Message, const TArray<uint8>& byteArray, const FString& serverID) {
}

void USocketServerBPLibrary::serverReceiveTCPMessageEventDelegate(const FString& SessionID, const FString& Message, const TArray<uint8>& byteArray, const FString& serverID) {
}

void USocketServerBPLibrary::serverPluginGetSocketSessionInfoByServerID(const FString& serverID, const FString& SessionID, bool& sessionFound, FString& IP, int32& Port, EServerSocketConnectionProtocol& connectionProtocol) {
}

void USocketServerBPLibrary::serverPluginGetSocketSessionInfo(const FString& SessionID, bool& sessionFound, FString& IP, int32& Port, EServerSocketConnectionProtocol& connectionProtocol, FString& serverID) {
}

void USocketServerBPLibrary::serverPluginGetSocketSessionIds(const FString& optionalServerID, TArray<FString>& sessionIDs) {
}

void USocketServerBPLibrary::sendRCONResponse(const FString& SessionID, const FString& serverID, int32 RequestID, const FString& Response) {
}

UDNSClientSocketServer* USocketServerBPLibrary::resolveDomain(const FString& domain, bool useDNSCache, const FString& dnsIP) {
    return NULL;
}

void USocketServerBPLibrary::removeSessionAndCloseConnection(const FString& SessionID, const FString& optionalServerID) {
}

void USocketServerBPLibrary::removeFileToken(const FString& token) {
}

void USocketServerBPLibrary::registerRCONServer(const FString& serverID, ERCONPasswordType passwordType, const FString& passwordOrFile, bool& Success, FString& ErrorMessage) {
}

void USocketServerBPLibrary::registerClientEvent(const FString& SessionID, UEventBean*& Event) {
}

void USocketServerBPLibrary::receiveRCONRequestEventDelegate(const FString& SessionID, const FString& serverID, const int32 RequestID, const FString& request) {
}

void USocketServerBPLibrary::readBytesFromFileInPartsEventDelegate(const int64 fileSize, const int64 position, const bool End, const TArray<uint8>& byteArray) {
}

void USocketServerBPLibrary::parseIntegerToBytesPure(TArray<uint8>& byteArray, int32 Value, bool switchByteOrder) {
}

void USocketServerBPLibrary::parseIntegerToBytes(TArray<uint8>& byteArray, int32 Value, bool switchByteOrder) {
}

void USocketServerBPLibrary::parseIntegerArrayToBytesPure(TArray<uint8>& byteArray, TArray<int32> Value) {
}

void USocketServerBPLibrary::parseInteger64ToBytesPure(TArray<uint8>& byteArray, int64 Value, bool switchByteOrder) {
}

void USocketServerBPLibrary::parseInteger64ToBytes(TArray<uint8>& byteArray, int64 Value, bool switchByteOrder) {
}

void USocketServerBPLibrary::parseInteger64ArrayToBytesPure(TArray<uint8>& byteArray, TArray<int64> Value) {
}

FString USocketServerBPLibrary::parseHexToStringPure(const FString& hex) {
    return TEXT("");
}

FString USocketServerBPLibrary::parseHexToString(const FString& hex) {
    return TEXT("");
}

TArray<uint8> USocketServerBPLibrary::parseHexToBytesPure(const FString& hex) {
    return TArray<uint8>();
}

TArray<uint8> USocketServerBPLibrary::parseHexToBytes(const FString& hex) {
    return TArray<uint8>();
}

void USocketServerBPLibrary::parseFloatToBytesPure(TArray<uint8>& byteArray, float Value, bool switchByteOrder) {
}

void USocketServerBPLibrary::parseFloatToBytes(TArray<uint8>& byteArray, float Value, bool switchByteOrder) {
}

void USocketServerBPLibrary::parseFloatArrayToBytesPure(TArray<uint8>& byteArray, TArray<float> Value) {
}

void USocketServerBPLibrary::parseBytesToIntegerPure(TArray<uint8> bytes, int32& Value) {
}

void USocketServerBPLibrary::parseBytesToIntegerEndian(TArray<uint8> bytes, int32& littleEndian, int32& bigEndian) {
}

void USocketServerBPLibrary::parseBytesToIntegerArrayPure(TArray<int32>& Value, TArray<uint8> bytes) {
}

void USocketServerBPLibrary::parseBytesToInteger64Pure(TArray<uint8> bytes, int64& Value) {
}

void USocketServerBPLibrary::parseBytesToInteger64Endian(TArray<uint8> bytes, int64& littleEndian, int64& bigEndian) {
}

void USocketServerBPLibrary::parseBytesToInteger64ArrayPure(TArray<int64>& Value, TArray<uint8> bytes) {
}

void USocketServerBPLibrary::parseBytesToInteger64(TArray<uint8> bytes, int64& Value) {
}

void USocketServerBPLibrary::parseBytesToInteger(TArray<uint8> bytes, int32& Value) {
}

FString USocketServerBPLibrary::parseBytesToHexPure(TArray<uint8> bytes) {
    return TEXT("");
}

FString USocketServerBPLibrary::parseBytesToHex(TArray<uint8> bytes) {
    return TEXT("");
}

void USocketServerBPLibrary::parseBytesToFloatPure(TArray<uint8> bytes, float& Value) {
}

void USocketServerBPLibrary::parseBytesToFloatEndian(TArray<uint8> bytes, float& littleEndian, float& bigEndian) {
}

void USocketServerBPLibrary::parseBytesToFloatArrayPure(TArray<float>& Value, TArray<uint8> bytes) {
}

void USocketServerBPLibrary::parseBytesToFloat(TArray<uint8> bytes, float& Value) {
}

USocketServerBPLibrary* USocketServerBPLibrary::getSocketServerTarget() {
    return NULL;
}

int32 USocketServerBPLibrary::getRandomPort(EServerSocketConnectionCheckPortType Type, const FString& IP) {
    return 0;
}

FString USocketServerBPLibrary::generateUniqueID() {
    return TEXT("");
}

void USocketServerBPLibrary::fileTransferOverTCPProgressEventDelegate(const FString& SessionID, const FString& FilePath, const float Percent, const float mbit, const int64 bytesTransferred, const int64 fileSize) {
}

void USocketServerBPLibrary::fileTransferOverTCPInfoEventDelegate(const FString& Message, const FString& SessionID, const FString& FilePath, const bool Success) {
}

bool USocketServerBPLibrary::checkPort(EServerSocketConnectionCheckPortType Type, const FString& IP, int32 Port) {
    return false;
}

void USocketServerBPLibrary::changeTCPSeparatorStringOnServer(const FString& Separator) {
}

void USocketServerBPLibrary::changeTCPSeparatorByteOnServer(uint8 Separator) {
}

void USocketServerBPLibrary::changeSocketPlatform(ESocketPlatformServer platform) {
}

void USocketServerBPLibrary::changeCleanerThreadSettingsOnServer(bool showLogs, int32 minLiveTimeInSeconds) {
}

void USocketServerBPLibrary::addFileTokens(TMap<FString, FString> fileTokens, bool deleteAfterUse, EFileFunctionsSocketServerDirectoryType directoryType) {
}

void USocketServerBPLibrary::addFileToken(const FString& token, bool deleteTokenAfterUse, EFileFunctionsSocketServerDirectoryType directoryType, const FString& filePathOrDirectory) {
}


