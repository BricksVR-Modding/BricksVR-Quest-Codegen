// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
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
  // Forward declaring type: RemoteStoragePublishFileProgress_t
  struct RemoteStoragePublishFileProgress_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStoragePublishFileProgress_t, "Steamworks.Data", "RemoteStoragePublishFileProgress_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStoragePublishFileProgress_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStoragePublishFileProgress_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.Double DPercentFile
    // Size: 0x8
    // Offset: 0x0
    double DPercentFile;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Boolean Preview
    // Size: 0x1
    // Offset: 0x8
    bool Preview;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: RemoteStoragePublishFileProgress_t
    constexpr RemoteStoragePublishFileProgress_t(double DPercentFile_ = {}, bool Preview_ = {}) noexcept : DPercentFile{DPercentFile_}, Preview{Preview_} {}
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
    // Get instance field reference: System.Double DPercentFile
    [[deprecated("Use field access instead!")]] double& dyn_DPercentFile();
    // Get instance field reference: System.Boolean Preview
    [[deprecated("Use field access instead!")]] bool& dyn_Preview();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4651A0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x465100
    static void _cctor();
  }; // Steamworks.Data.RemoteStoragePublishFileProgress_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStoragePublishFileProgress_t), 8 + sizeof(bool)> __Steamworks_Data_RemoteStoragePublishFileProgress_tSizeCheck;
  static_assert(sizeof(RemoteStoragePublishFileProgress_t) == 0x9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStoragePublishFileProgress_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStoragePublishFileProgress_t::*)()>(&Steamworks::Data::RemoteStoragePublishFileProgress_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStoragePublishFileProgress_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStoragePublishFileProgress_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStoragePublishFileProgress_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStoragePublishFileProgress_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
