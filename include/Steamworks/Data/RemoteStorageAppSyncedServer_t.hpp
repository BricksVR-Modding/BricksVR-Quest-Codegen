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
// Including type: Steamworks.AppId
#include "Steamworks/AppId.hpp"
// Including type: Steamworks.Result
#include "Steamworks/Result.hpp"
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
  // Forward declaring type: RemoteStorageAppSyncedServer_t
  struct RemoteStorageAppSyncedServer_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageAppSyncedServer_t, "Steamworks.Data", "RemoteStorageAppSyncedServer_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageAppSyncedServer_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageAppSyncedServer_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.AppId AppID
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::AppId AppID;
    // Field size check
    static_assert(sizeof(::Steamworks::AppId) == 0x4);
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x4
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // System.Int32 NumUploads
    // Size: 0x4
    // Offset: 0x8
    int NumUploads;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RemoteStorageAppSyncedServer_t
    constexpr RemoteStorageAppSyncedServer_t(::Steamworks::AppId AppID_ = {}, ::Steamworks::Result Result_ = {}, int NumUploads_ = {}) noexcept : AppID{AppID_}, Result{Result_}, NumUploads{NumUploads_} {}
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
    // Get instance field reference: Steamworks.AppId AppID
    [[deprecated("Use field access instead!")]] ::Steamworks::AppId& dyn_AppID();
    // Get instance field reference: Steamworks.Result Result
    [[deprecated("Use field access instead!")]] ::Steamworks::Result& dyn_Result();
    // Get instance field reference: System.Int32 NumUploads
    [[deprecated("Use field access instead!")]] int& dyn_NumUploads();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4648B0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x464810
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageAppSyncedServer_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageAppSyncedServer_t), 8 + sizeof(int)> __Steamworks_Data_RemoteStorageAppSyncedServer_tSizeCheck;
  static_assert(sizeof(RemoteStorageAppSyncedServer_t) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageAppSyncedServer_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageAppSyncedServer_t::*)()>(&Steamworks::Data::RemoteStorageAppSyncedServer_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageAppSyncedServer_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageAppSyncedServer_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageAppSyncedServer_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageAppSyncedServer_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
