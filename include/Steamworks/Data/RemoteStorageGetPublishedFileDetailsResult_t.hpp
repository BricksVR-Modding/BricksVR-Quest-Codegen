// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
// Including type: Steamworks.Result
#include "Steamworks/Result.hpp"
// Including type: Steamworks.Data.PublishedFileId
#include "Steamworks/Data/PublishedFileId.hpp"
// Including type: Steamworks.AppId
#include "Steamworks/AppId.hpp"
// Including type: Steamworks.RemoteStoragePublishedFileVisibility
#include "Steamworks/RemoteStoragePublishedFileVisibility.hpp"
// Including type: Steamworks.WorkshopFileType
#include "Steamworks/WorkshopFileType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: CallbackType
  struct CallbackType;
}
// Completed forward declares
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: RemoteStorageGetPublishedFileDetailsResult_t
  struct RemoteStorageGetPublishedFileDetailsResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t, "Steamworks.Data", "RemoteStorageGetPublishedFileDetailsResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x7D
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageGetPublishedFileDetailsResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageGetPublishedFileDetailsResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // Padding between fields: Result and: PublishedFileId
    char __padding0[0x4] = {};
    // Steamworks.Data.PublishedFileId PublishedFileId
    // Size: 0x8
    // Offset: 0x8
    ::Steamworks::Data::PublishedFileId PublishedFileId;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::PublishedFileId) == 0x8);
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
    // System.UInt64 File
    // Size: 0x8
    // Offset: 0x28
    uint64_t File;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 PreviewFile
    // Size: 0x8
    // Offset: 0x30
    uint64_t PreviewFile;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 SteamIDOwner
    // Size: 0x8
    // Offset: 0x38
    uint64_t SteamIDOwner;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt32 TimeCreated
    // Size: 0x4
    // Offset: 0x40
    uint TimeCreated;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 TimeUpdated
    // Size: 0x4
    // Offset: 0x44
    uint TimeUpdated;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Steamworks.RemoteStoragePublishedFileVisibility Visibility
    // Size: 0x4
    // Offset: 0x48
    ::Steamworks::RemoteStoragePublishedFileVisibility Visibility;
    // Field size check
    static_assert(sizeof(::Steamworks::RemoteStoragePublishedFileVisibility) == 0x4);
    // System.Boolean Banned
    // Size: 0x1
    // Offset: 0x4C
    bool Banned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Banned and: Tags
    char __padding12[0x3] = {};
    // System.Byte[] Tags
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> Tags;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Boolean TagsTruncated
    // Size: 0x1
    // Offset: 0x58
    bool TagsTruncated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TagsTruncated and: PchFileName
    char __padding14[0x7] = {};
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
    // Steamworks.WorkshopFileType FileType
    // Size: 0x4
    // Offset: 0x78
    ::Steamworks::WorkshopFileType FileType;
    // Field size check
    static_assert(sizeof(::Steamworks::WorkshopFileType) == 0x4);
    // System.Boolean AcceptedForUse
    // Size: 0x1
    // Offset: 0x7C
    bool AcceptedForUse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: RemoteStorageGetPublishedFileDetailsResult_t
    constexpr RemoteStorageGetPublishedFileDetailsResult_t(::Steamworks::Result Result_ = {}, ::Steamworks::Data::PublishedFileId PublishedFileId_ = {}, ::Steamworks::AppId CreatorAppID_ = {}, ::Steamworks::AppId ConsumerAppID_ = {}, ::ArrayW<uint8_t> Title_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> Description_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint64_t File_ = {}, uint64_t PreviewFile_ = {}, uint64_t SteamIDOwner_ = {}, uint TimeCreated_ = {}, uint TimeUpdated_ = {}, ::Steamworks::RemoteStoragePublishedFileVisibility Visibility_ = {}, bool Banned_ = {}, ::ArrayW<uint8_t> Tags_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), bool TagsTruncated_ = {}, ::ArrayW<uint8_t> PchFileName_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int FileSize_ = {}, int PreviewFileSize_ = {}, ::ArrayW<uint8_t> URL_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::Steamworks::WorkshopFileType FileType_ = {}, bool AcceptedForUse_ = {}) noexcept : Result{Result_}, PublishedFileId{PublishedFileId_}, CreatorAppID{CreatorAppID_}, ConsumerAppID{ConsumerAppID_}, Title{Title_}, Description{Description_}, File{File_}, PreviewFile{PreviewFile_}, SteamIDOwner{SteamIDOwner_}, TimeCreated{TimeCreated_}, TimeUpdated{TimeUpdated_}, Visibility{Visibility_}, Banned{Banned_}, Tags{Tags_}, TagsTruncated{TagsTruncated_}, PchFileName{PchFileName_}, FileSize{FileSize_}, PreviewFileSize{PreviewFileSize_}, URL{URL_}, FileType{FileType_}, AcceptedForUse{AcceptedForUse_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: Steamworks.Result Result
    [[deprecated("Use field access instead!")]] ::Steamworks::Result& dyn_Result();
    // Get instance field reference: Steamworks.Data.PublishedFileId PublishedFileId
    [[deprecated("Use field access instead!")]] ::Steamworks::Data::PublishedFileId& dyn_PublishedFileId();
    // Get instance field reference: Steamworks.AppId CreatorAppID
    [[deprecated("Use field access instead!")]] ::Steamworks::AppId& dyn_CreatorAppID();
    // Get instance field reference: Steamworks.AppId ConsumerAppID
    [[deprecated("Use field access instead!")]] ::Steamworks::AppId& dyn_ConsumerAppID();
    // Get instance field reference: System.Byte[] Title
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Title();
    // Get instance field reference: System.Byte[] Description
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Description();
    // Get instance field reference: System.UInt64 File
    [[deprecated("Use field access instead!")]] uint64_t& dyn_File();
    // Get instance field reference: System.UInt64 PreviewFile
    [[deprecated("Use field access instead!")]] uint64_t& dyn_PreviewFile();
    // Get instance field reference: System.UInt64 SteamIDOwner
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDOwner();
    // Get instance field reference: System.UInt32 TimeCreated
    [[deprecated("Use field access instead!")]] uint& dyn_TimeCreated();
    // Get instance field reference: System.UInt32 TimeUpdated
    [[deprecated("Use field access instead!")]] uint& dyn_TimeUpdated();
    // Get instance field reference: Steamworks.RemoteStoragePublishedFileVisibility Visibility
    [[deprecated("Use field access instead!")]] ::Steamworks::RemoteStoragePublishedFileVisibility& dyn_Visibility();
    // Get instance field reference: System.Boolean Banned
    [[deprecated("Use field access instead!")]] bool& dyn_Banned();
    // Get instance field reference: System.Byte[] Tags
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Tags();
    // Get instance field reference: System.Boolean TagsTruncated
    [[deprecated("Use field access instead!")]] bool& dyn_TagsTruncated();
    // Get instance field reference: System.Byte[] PchFileName
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_PchFileName();
    // Get instance field reference: System.Int32 FileSize
    [[deprecated("Use field access instead!")]] int& dyn_FileSize();
    // Get instance field reference: System.Int32 PreviewFileSize
    [[deprecated("Use field access instead!")]] int& dyn_PreviewFileSize();
    // Get instance field reference: System.Byte[] URL
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_URL();
    // Get instance field reference: Steamworks.WorkshopFileType FileType
    [[deprecated("Use field access instead!")]] ::Steamworks::WorkshopFileType& dyn_FileType();
    // Get instance field reference: System.Boolean AcceptedForUse
    [[deprecated("Use field access instead!")]] bool& dyn_AcceptedForUse();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x465040
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x464FA0
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageGetPublishedFileDetailsResult_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageGetPublishedFileDetailsResult_t), 124 + sizeof(bool)> __Steamworks_Data_RemoteStorageGetPublishedFileDetailsResult_tSizeCheck;
  static_assert(sizeof(RemoteStorageGetPublishedFileDetailsResult_t) == 0x7D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t::*)()>(&Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageGetPublishedFileDetailsResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
