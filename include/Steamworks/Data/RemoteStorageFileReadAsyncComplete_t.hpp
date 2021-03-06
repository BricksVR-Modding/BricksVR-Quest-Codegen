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
  // Forward declaring type: RemoteStorageFileReadAsyncComplete_t
  struct RemoteStorageFileReadAsyncComplete_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageFileReadAsyncComplete_t, "Steamworks.Data", "RemoteStorageFileReadAsyncComplete_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageFileReadAsyncComplete_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageFileReadAsyncComplete_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 FileReadAsync
    // Size: 0x8
    // Offset: 0x0
    uint64_t FileReadAsync;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x8
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // System.UInt32 Offset
    // Size: 0x4
    // Offset: 0xC
    uint Offset;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 Read
    // Size: 0x4
    // Offset: 0x10
    uint Read;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: RemoteStorageFileReadAsyncComplete_t
    constexpr RemoteStorageFileReadAsyncComplete_t(uint64_t FileReadAsync_ = {}, ::Steamworks::Result Result_ = {}, uint Offset_ = {}, uint Read_ = {}) noexcept : FileReadAsync{FileReadAsync_}, Result{Result_}, Offset{Offset_}, Read{Read_} {}
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
    // Get instance field reference: System.UInt64 FileReadAsync
    [[deprecated("Use field access instead!")]] uint64_t& dyn_FileReadAsync();
    // Get instance field reference: Steamworks.Result Result
    [[deprecated("Use field access instead!")]] ::Steamworks::Result& dyn_Result();
    // Get instance field reference: System.UInt32 Offset
    [[deprecated("Use field access instead!")]] uint& dyn_Offset();
    // Get instance field reference: System.UInt32 Read
    [[deprecated("Use field access instead!")]] uint& dyn_Read();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x464E30
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x464D90
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageFileReadAsyncComplete_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageFileReadAsyncComplete_t), 16 + sizeof(uint)> __Steamworks_Data_RemoteStorageFileReadAsyncComplete_tSizeCheck;
  static_assert(sizeof(RemoteStorageFileReadAsyncComplete_t) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageFileReadAsyncComplete_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageFileReadAsyncComplete_t::*)()>(&Steamworks::Data::RemoteStorageFileReadAsyncComplete_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageFileReadAsyncComplete_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageFileReadAsyncComplete_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageFileReadAsyncComplete_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageFileReadAsyncComplete_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
