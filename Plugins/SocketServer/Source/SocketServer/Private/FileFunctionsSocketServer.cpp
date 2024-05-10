#include "FileFunctionsSocketServer.h"

UFileFunctionsSocketServer::UFileFunctionsSocketServer() {
}

void UFileFunctionsSocketServer::WriteStringToFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& Data, const FString& FilePath, EFileFunctionsSocketServerEncodingOptions fileEncoding, bool& Success) {
}

void UFileFunctionsSocketServer::WriteBytesToFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, TArray<uint8> bytes, bool& Success) {
}

void UFileFunctionsSocketServer::stringToBase64String(const FString& String, FString& base64String) {
}

void UFileFunctionsSocketServer::setTimeStamp(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, FDateTime DateTime) {
}

bool UFileFunctionsSocketServer::SetReadOnly(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool bNewReadOnlyValue) {
    return false;
}

void UFileFunctionsSocketServer::readStringFromFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success, FString& Data) {
}

void UFileFunctionsSocketServer::readBytesFromFileInPartsAsync(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, int32 BufferSize, float delayBetweenReadsInSeconds) {
}

TArray<uint8> UFileFunctionsSocketServer::readBytesFromFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success) {
    return TArray<uint8>();
}

FFileFunctionsSocketServerOpenFile UFileFunctionsSocketServer::OpenFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return FFileFunctionsSocketServerOpenFile{};
}

bool UFileFunctionsSocketServer::moveFile(EFileFunctionsSocketServerDirectoryType directoryTypeTo, const FString& filePathTo, EFileFunctionsSocketServerDirectoryType directoryTypeFrom, const FString& filePathFrom) {
    return false;
}

bool UFileFunctionsSocketServer::IsReadOnly(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return false;
}

FString UFileFunctionsSocketServer::int64ToString(int64 Num) {
    return TEXT("");
}

FDateTime UFileFunctionsSocketServer::GetTimeStamp(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return FDateTime{};
}

void UFileFunctionsSocketServer::getMD5FromFileAbsolutePath(const FString& FilePath, bool& Success, FString& MD5) {
}

void UFileFunctionsSocketServer::getMD5FromFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success, FString& MD5) {
}

FString UFileFunctionsSocketServer::getFilenameOnDisk(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return TEXT("");
}

UFileFunctionsSocketServer* UFileFunctionsSocketServer::getFileFunctionsSocketServerTarget() {
    return NULL;
}

void UFileFunctionsSocketServer::getAllFilesFromDirectory(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, int32& Count, TArray<FString>& Files, TArray<FString>& filePaths, const FString& FileType) {
}

FDateTime UFileFunctionsSocketServer::getAccessTimeStamp(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return FDateTime{};
}

void UFileFunctionsSocketServer::fileToBase64String(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success, FString& base64String, FString& Filename) {
}

int64 UFileFunctionsSocketServer::fileSizeAbsolutePath(const FString& FilePath) {
    return 0;
}

int64 UFileFunctionsSocketServer::fileSize(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return 0;
}

bool UFileFunctionsSocketServer::fileExistsAbsolutePath(const FString& FilePath) {
    return false;
}

bool UFileFunctionsSocketServer::FileExists(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return false;
}

FString UFileFunctionsSocketServer::encryptMessageWithAES(const FString& Message, const FString& keyIn256Bit) {
    return TEXT("");
}

bool UFileFunctionsSocketServer::DirectoryExists(EFileFunctionsSocketServerDirectoryType directoryType, const FString& Path) {
    return false;
}

bool UFileFunctionsSocketServer::deleteFileAbsolutePath(const FString& FilePath) {
    return false;
}

bool UFileFunctionsSocketServer::deleteFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return false;
}

bool UFileFunctionsSocketServer::deleteDirectory(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
    return false;
}

FString UFileFunctionsSocketServer::decryptMessageWithAES(const FString& encryptedBase64Message, const FString& keyIn256Bit) {
    return TEXT("");
}

bool UFileFunctionsSocketServer::createDirectory(EFileFunctionsSocketServerDirectoryType directoryType, const FString& Path) {
    return false;
}

void UFileFunctionsSocketServer::closeFile(FFileFunctionsSocketServerOpenFile NewOpenFile) {
}

void UFileFunctionsSocketServer::cancelReadBytesFromFileInParts(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath) {
}

void UFileFunctionsSocketServer::bytesToBase64String(TArray<uint8> bytes, FString& base64String) {
}

void UFileFunctionsSocketServer::base64StringToString(FString& String, const FString& base64String) {
}

TArray<uint8> UFileFunctionsSocketServer::base64StringToBytes(const FString& base64String, bool& Success) {
    return TArray<uint8>();
}

void UFileFunctionsSocketServer::addBytesToFileAndCloseIt(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, TArray<uint8> bytes, bool& Success) {
}

int64 UFileFunctionsSocketServer::addBytesToFile(FFileFunctionsSocketServerOpenFile NewOpenFile, TArray<uint8> bytes) {
    return 0;
}


