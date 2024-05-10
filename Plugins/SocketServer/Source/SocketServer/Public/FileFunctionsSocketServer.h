#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EFileFunctionsSocketServerDirectoryType.h"
#include "EFileFunctionsSocketServerEncodingOptions.h"
#include "FileFunctionsSocketServerOpenFile.h"
#include "FileFunctionsSocketServer.generated.h"

class UFileFunctionsSocketServer;

UCLASS(Blueprintable)
class SOCKETSERVER_API UFileFunctionsSocketServer : public UObject {
    GENERATED_BODY()
public:
    UFileFunctionsSocketServer();

    UFUNCTION(BlueprintCallable)
    static void WriteStringToFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& Data, const FString& FilePath, EFileFunctionsSocketServerEncodingOptions fileEncoding, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void WriteBytesToFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, TArray<uint8> bytes, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void stringToBase64String(const FString& String, FString& base64String);
    
    UFUNCTION(BlueprintCallable)
    static void setTimeStamp(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, FDateTime DateTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetReadOnly(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool bNewReadOnlyValue);
    
    UFUNCTION(BlueprintCallable)
    static void readStringFromFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success, FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static void readBytesFromFileInPartsAsync(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, int32 BufferSize, float delayBetweenReadsInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> readBytesFromFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static FFileFunctionsSocketServerOpenFile OpenFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool moveFile(EFileFunctionsSocketServerDirectoryType directoryTypeTo, const FString& filePathTo, EFileFunctionsSocketServerDirectoryType directoryTypeFrom, const FString& filePathFrom);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReadOnly(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintPure)
    static FString int64ToString(int64 Num);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime GetTimeStamp(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void getMD5FromFileAbsolutePath(const FString& FilePath, bool& Success, FString& MD5);
    
    UFUNCTION(BlueprintCallable)
    static void getMD5FromFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success, FString& MD5);
    
    UFUNCTION(BlueprintCallable)
    static FString getFilenameOnDisk(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static UFileFunctionsSocketServer* getFileFunctionsSocketServerTarget();
    
    UFUNCTION(BlueprintCallable)
    static void getAllFilesFromDirectory(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, int32& Count, TArray<FString>& Files, TArray<FString>& filePaths, const FString& FileType);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime getAccessTimeStamp(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void fileToBase64String(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, bool& Success, FString& base64String, FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static int64 fileSizeAbsolutePath(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static int64 fileSize(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool fileExistsAbsolutePath(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool FileExists(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static FString encryptMessageWithAES(const FString& Message, const FString& keyIn256Bit);
    
    UFUNCTION(BlueprintCallable)
    static bool DirectoryExists(EFileFunctionsSocketServerDirectoryType directoryType, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static bool deleteFileAbsolutePath(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool deleteFile(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool deleteDirectory(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static FString decryptMessageWithAES(const FString& encryptedBase64Message, const FString& keyIn256Bit);
    
    UFUNCTION(BlueprintCallable)
    static bool createDirectory(EFileFunctionsSocketServerDirectoryType directoryType, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void closeFile(FFileFunctionsSocketServerOpenFile NewOpenFile);
    
    UFUNCTION(BlueprintCallable)
    static void cancelReadBytesFromFileInParts(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void bytesToBase64String(TArray<uint8> bytes, FString& base64String);
    
    UFUNCTION(BlueprintCallable)
    static void base64StringToString(FString& String, const FString& base64String);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> base64StringToBytes(const FString& base64String, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void addBytesToFileAndCloseIt(EFileFunctionsSocketServerDirectoryType directoryType, const FString& FilePath, TArray<uint8> bytes, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static int64 addBytesToFile(FFileFunctionsSocketServerOpenFile NewOpenFile, TArray<uint8> bytes);
    
};

