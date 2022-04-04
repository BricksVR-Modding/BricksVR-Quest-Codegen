// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
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
  // Forward declaring type: RemoteStorageAppSyncProgress_t
  struct RemoteStorageAppSyncProgress_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageAppSyncProgress_t, "Steamworks.Data", "RemoteStorageAppSyncProgress_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageAppSyncProgress_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageAppSyncProgress_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.Byte[] CurrentFile
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> CurrentFile;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // Steamworks.AppId AppID
    // Size: 0x4
    // Offset: 0x8
    ::Steamworks::AppId AppID;
    // Field size check
    static_assert(sizeof(::Steamworks::AppId) == 0x4);
    // System.UInt32 BytesTransferredThisChunk
    // Size: 0x4
    // Offset: 0xC
    uint BytesTransferredThisChunk;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Double DAppPercentComplete
    // Size: 0x8
    // Offset: 0x10
    double DAppPercentComplete;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Boolean Uploading
    // Size: 0x1
    // Offset: 0x18
    bool Uploading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: RemoteStorageAppSyncProgress_t
    constexpr RemoteStorageAppSyncProgress_t(::ArrayW<uint8_t> CurrentFile_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::Steamworks::AppId AppID_ = {}, uint BytesTransferredThisChunk_ = {}, double DAppPercentComplete_ = {}, bool Uploading_ = {}) noexcept : CurrentFile{CurrentFile_}, AppID{AppID_}, BytesTransferredThisChunk{BytesTransferredThisChunk_}, DAppPercentComplete{DAppPercentComplete_}, Uploading{Uploading_} {}
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
    // Get instance field reference: System.Byte[] CurrentFile
    [[deprecated]] ::ArrayW<uint8_t>& dyn_CurrentFile();
    // Get instance field reference: Steamworks.AppId AppID
    [[deprecated]] ::Steamworks::AppId& dyn_AppID();
    // Get instance field reference: System.UInt32 BytesTransferredThisChunk
    [[deprecated]] uint& dyn_BytesTransferredThisChunk();
    // Get instance field reference: System.Double DAppPercentComplete
    [[deprecated]] double& dyn_DAppPercentComplete();
    // Get instance field reference: System.Boolean Uploading
    [[deprecated]] bool& dyn_Uploading();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4646A0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x464600
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageAppSyncProgress_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageAppSyncProgress_t), 24 + sizeof(bool)> __Steamworks_Data_RemoteStorageAppSyncProgress_tSizeCheck;
  static_assert(sizeof(RemoteStorageAppSyncProgress_t) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageAppSyncProgress_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageAppSyncProgress_t::*)()>(&Steamworks::Data::RemoteStorageAppSyncProgress_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageAppSyncProgress_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageAppSyncProgress_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageAppSyncProgress_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageAppSyncProgress_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
