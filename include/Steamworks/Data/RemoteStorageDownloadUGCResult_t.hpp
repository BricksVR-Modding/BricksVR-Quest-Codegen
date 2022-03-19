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
// Including type: Steamworks.AppId
#include "Steamworks/AppId.hpp"
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
  // Forward declaring type: RemoteStorageDownloadUGCResult_t
  struct RemoteStorageDownloadUGCResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageDownloadUGCResult_t, "Steamworks.Data", "RemoteStorageDownloadUGCResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageDownloadUGCResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageDownloadUGCResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // Padding between fields: Result and: File
    char __padding0[0x4] = {};
    // System.UInt64 File
    // Size: 0x8
    // Offset: 0x8
    uint64_t File;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Steamworks.AppId AppID
    // Size: 0x4
    // Offset: 0x10
    ::Steamworks::AppId AppID;
    // Field size check
    static_assert(sizeof(::Steamworks::AppId) == 0x4);
    // System.Int32 SizeInBytes
    // Size: 0x4
    // Offset: 0x14
    int SizeInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte[] PchFileName
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> PchFileName;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.UInt64 SteamIDOwner
    // Size: 0x8
    // Offset: 0x20
    uint64_t SteamIDOwner;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: RemoteStorageDownloadUGCResult_t
    constexpr RemoteStorageDownloadUGCResult_t(::Steamworks::Result Result_ = {}, uint64_t File_ = {}, ::Steamworks::AppId AppID_ = {}, int SizeInBytes_ = {}, ::ArrayW<uint8_t> PchFileName_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint64_t SteamIDOwner_ = {}) noexcept : Result{Result_}, File{File_}, AppID{AppID_}, SizeInBytes{SizeInBytes_}, PchFileName{PchFileName_}, SteamIDOwner{SteamIDOwner_} {}
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
    ::Steamworks::Result& dyn_Result();
    // Get instance field reference: System.UInt64 File
    uint64_t& dyn_File();
    // Get instance field reference: Steamworks.AppId AppID
    ::Steamworks::AppId& dyn_AppID();
    // Get instance field reference: System.Int32 SizeInBytes
    int& dyn_SizeInBytes();
    // Get instance field reference: System.Byte[] PchFileName
    ::ArrayW<uint8_t>& dyn_PchFileName();
    // Get instance field reference: System.UInt64 SteamIDOwner
    uint64_t& dyn_SteamIDOwner();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA57DF8
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA57E00
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageDownloadUGCResult_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageDownloadUGCResult_t), 32 + sizeof(uint64_t)> __Steamworks_Data_RemoteStorageDownloadUGCResult_tSizeCheck;
  static_assert(sizeof(RemoteStorageDownloadUGCResult_t) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageDownloadUGCResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageDownloadUGCResult_t::*)()>(&Steamworks::Data::RemoteStorageDownloadUGCResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageDownloadUGCResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageDownloadUGCResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageDownloadUGCResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageDownloadUGCResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
