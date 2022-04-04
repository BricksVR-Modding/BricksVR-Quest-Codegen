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
  // Forward declaring type: RemoteStorageDeletePublishedFileResult_t
  struct RemoteStorageDeletePublishedFileResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageDeletePublishedFileResult_t, "Steamworks.Data", "RemoteStorageDeletePublishedFileResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageDeletePublishedFileResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageDeletePublishedFileResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
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
    public:
    // Creating value type constructor for type: RemoteStorageDeletePublishedFileResult_t
    constexpr RemoteStorageDeletePublishedFileResult_t(::Steamworks::Result Result_ = {}, ::Steamworks::Data::PublishedFileId PublishedFileId_ = {}) noexcept : Result{Result_}, PublishedFileId{PublishedFileId_} {}
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
    [[deprecated]] ::Steamworks::Result& dyn_Result();
    // Get instance field reference: Steamworks.Data.PublishedFileId PublishedFileId
    [[deprecated]] ::Steamworks::Data::PublishedFileId& dyn_PublishedFileId();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x464960
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x4648C0
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageDeletePublishedFileResult_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageDeletePublishedFileResult_t), 8 + sizeof(::Steamworks::Data::PublishedFileId)> __Steamworks_Data_RemoteStorageDeletePublishedFileResult_tSizeCheck;
  static_assert(sizeof(RemoteStorageDeletePublishedFileResult_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageDeletePublishedFileResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageDeletePublishedFileResult_t::*)()>(&Steamworks::Data::RemoteStorageDeletePublishedFileResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageDeletePublishedFileResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageDeletePublishedFileResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageDeletePublishedFileResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageDeletePublishedFileResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
