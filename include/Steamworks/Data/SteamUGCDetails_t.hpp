// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.Data.PublishedFileId
#include "Steamworks/Data/PublishedFileId.hpp"
// Including type: Steamworks.Result
#include "Steamworks/Result.hpp"
// Including type: Steamworks.WorkshopFileType
#include "Steamworks/WorkshopFileType.hpp"
// Including type: Steamworks.AppId
#include "Steamworks/AppId.hpp"
// Including type: Steamworks.RemoteStoragePublishedFileVisibility
#include "Steamworks/RemoteStoragePublishedFileVisibility.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: SteamUGCDetails_t
  struct SteamUGCDetails_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::SteamUGCDetails_t, "Steamworks.Data", "SteamUGCDetails_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x88
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.SteamUGCDetails_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamUGCDetails_t/*, public ::System::ValueType*/ {
    public:
    public:
    // Steamworks.Data.PublishedFileId PublishedFileId
    // Size: 0x8
    // Offset: 0x0
    ::Steamworks::Data::PublishedFileId PublishedFileId;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::PublishedFileId) == 0x8);
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x8
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // Steamworks.WorkshopFileType FileType
    // Size: 0x4
    // Offset: 0xC
    ::Steamworks::WorkshopFileType FileType;
    // Field size check
    static_assert(sizeof(::Steamworks::WorkshopFileType) == 0x4);
    // Steamworks.AppId CreatorAppID
    // Size: 0x4
    // Offset: 0x10
    ::Steamworks::AppId CreatorAppID;
    // Field size check
    static_assert(sizeof(::Steamworks::AppId) == 0x4);
    // Steamworks.AppId ConsumerAppID
    // Size: 0x4
    // Offset: 0x14
    ::Steamworks::AppId ConsumerAppID;
    // Field size check
    static_assert(sizeof(::Steamworks::AppId) == 0x4);
    // System.Byte[] Title
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> Title;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Byte[] Description
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> Description;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.UInt64 SteamIDOwner
    // Size: 0x8
    // Offset: 0x28
    uint64_t SteamIDOwner;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt32 TimeCreated
    // Size: 0x4
    // Offset: 0x30
    uint TimeCreated;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 TimeUpdated
    // Size: 0x4
    // Offset: 0x34
    uint TimeUpdated;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 TimeAddedToUserList
    // Size: 0x4
    // Offset: 0x38
    uint TimeAddedToUserList;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Steamworks.RemoteStoragePublishedFileVisibility Visibility
    // Size: 0x4
    // Offset: 0x3C
    ::Steamworks::RemoteStoragePublishedFileVisibility Visibility;
    // Field size check
    static_assert(sizeof(::Steamworks::RemoteStoragePublishedFileVisibility) == 0x4);
    // System.Boolean Banned
    // Size: 0x1
    // Offset: 0x40
    bool Banned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean AcceptedForUse
    // Size: 0x1
    // Offset: 0x41
    bool AcceptedForUse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean TagsTruncated
    // Size: 0x1
    // Offset: 0x42
    bool TagsTruncated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TagsTruncated and: Tags
    char __padding14[0x5] = {};
    // System.Byte[] Tags
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> Tags;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.UInt64 File
    // Size: 0x8
    // Offset: 0x50
    uint64_t File;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 PreviewFile
    // Size: 0x8
    // Offset: 0x58
    uint64_t PreviewFile;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Byte[] PchFileName
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> PchFileName;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Int32 FileSize
    // Size: 0x4
    // Offset: 0x68
    int FileSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 PreviewFileSize
    // Size: 0x4
    // Offset: 0x6C
    int PreviewFileSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte[] URL
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<uint8_t> URL;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.UInt32 VotesUp
    // Size: 0x4
    // Offset: 0x78
    uint VotesUp;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 VotesDown
    // Size: 0x4
    // Offset: 0x7C
    uint VotesDown;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Single Score
    // Size: 0x4
    // Offset: 0x80
    float Score;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.UInt32 NumChildren
    // Size: 0x4
    // Offset: 0x84
    uint NumChildren;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: SteamUGCDetails_t
    constexpr SteamUGCDetails_t(::Steamworks::Data::PublishedFileId PublishedFileId_ = {}, ::Steamworks::Result Result_ = {}, ::Steamworks::WorkshopFileType FileType_ = {}, ::Steamworks::AppId CreatorAppID_ = {}, ::Steamworks::AppId ConsumerAppID_ = {}, ::ArrayW<uint8_t> Title_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> Description_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint64_t SteamIDOwner_ = {}, uint TimeCreated_ = {}, uint TimeUpdated_ = {}, uint TimeAddedToUserList_ = {}, ::Steamworks::RemoteStoragePublishedFileVisibility Visibility_ = {}, bool Banned_ = {}, bool AcceptedForUse_ = {}, bool TagsTruncated_ = {}, ::ArrayW<uint8_t> Tags_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint64_t File_ = {}, uint64_t PreviewFile_ = {}, ::ArrayW<uint8_t> PchFileName_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int FileSize_ = {}, int PreviewFileSize_ = {}, ::ArrayW<uint8_t> URL_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint VotesUp_ = {}, uint VotesDown_ = {}, float Score_ = {}, uint NumChildren_ = {}) noexcept : PublishedFileId{PublishedFileId_}, Result{Result_}, FileType{FileType_}, CreatorAppID{CreatorAppID_}, ConsumerAppID{ConsumerAppID_}, Title{Title_}, Description{Description_}, SteamIDOwner{SteamIDOwner_}, TimeCreated{TimeCreated_}, TimeUpdated{TimeUpdated_}, TimeAddedToUserList{TimeAddedToUserList_}, Visibility{Visibility_}, Banned{Banned_}, AcceptedForUse{AcceptedForUse_}, TagsTruncated{TagsTruncated_}, Tags{Tags_}, File{File_}, PreviewFile{PreviewFile_}, PchFileName{PchFileName_}, FileSize{FileSize_}, PreviewFileSize{PreviewFileSize_}, URL{URL_}, VotesUp{VotesUp_}, VotesDown{VotesDown_}, Score{Score_}, NumChildren{NumChildren_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: Steamworks.Data.PublishedFileId PublishedFileId
    ::Steamworks::Data::PublishedFileId& dyn_PublishedFileId();
    // Get instance field reference: Steamworks.Result Result
    ::Steamworks::Result& dyn_Result();
    // Get instance field reference: Steamworks.WorkshopFileType FileType
    ::Steamworks::WorkshopFileType& dyn_FileType();
    // Get instance field reference: Steamworks.AppId CreatorAppID
    ::Steamworks::AppId& dyn_CreatorAppID();
    // Get instance field reference: Steamworks.AppId ConsumerAppID
    ::Steamworks::AppId& dyn_ConsumerAppID();
    // Get instance field reference: System.Byte[] Title
    ::ArrayW<uint8_t>& dyn_Title();
    // Get instance field reference: System.Byte[] Description
    ::ArrayW<uint8_t>& dyn_Description();
    // Get instance field reference: System.UInt64 SteamIDOwner
    uint64_t& dyn_SteamIDOwner();
    // Get instance field reference: System.UInt32 TimeCreated
    uint& dyn_TimeCreated();
    // Get instance field reference: System.UInt32 TimeUpdated
    uint& dyn_TimeUpdated();
    // Get instance field reference: System.UInt32 TimeAddedToUserList
    uint& dyn_TimeAddedToUserList();
    // Get instance field reference: Steamworks.RemoteStoragePublishedFileVisibility Visibility
    ::Steamworks::RemoteStoragePublishedFileVisibility& dyn_Visibility();
    // Get instance field reference: System.Boolean Banned
    bool& dyn_Banned();
    // Get instance field reference: System.Boolean AcceptedForUse
    bool& dyn_AcceptedForUse();
    // Get instance field reference: System.Boolean TagsTruncated
    bool& dyn_TagsTruncated();
    // Get instance field reference: System.Byte[] Tags
    ::ArrayW<uint8_t>& dyn_Tags();
    // Get instance field reference: System.UInt64 File
    uint64_t& dyn_File();
    // Get instance field reference: System.UInt64 PreviewFile
    uint64_t& dyn_PreviewFile();
    // Get instance field reference: System.Byte[] PchFileName
    ::ArrayW<uint8_t>& dyn_PchFileName();
    // Get instance field reference: System.Int32 FileSize
    int& dyn_FileSize();
    // Get instance field reference: System.Int32 PreviewFileSize
    int& dyn_PreviewFileSize();
    // Get instance field reference: System.Byte[] URL
    ::ArrayW<uint8_t>& dyn_URL();
    // Get instance field reference: System.UInt32 VotesUp
    uint& dyn_VotesUp();
    // Get instance field reference: System.UInt32 VotesDown
    uint& dyn_VotesDown();
    // Get instance field reference: System.Single Score
    float& dyn_Score();
    // Get instance field reference: System.UInt32 NumChildren
    uint& dyn_NumChildren();
  }; // Steamworks.Data.SteamUGCDetails_t
  #pragma pack(pop)
  static check_size<sizeof(SteamUGCDetails_t), 132 + sizeof(uint)> __Steamworks_Data_SteamUGCDetails_tSizeCheck;
  static_assert(sizeof(SteamUGCDetails_t) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
