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
  // Forward declaring type: RemoteStorageFileShareResult_t
  struct RemoteStorageFileShareResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageFileShareResult_t, "Steamworks.Data", "RemoteStorageFileShareResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageFileShareResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageFileShareResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
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
    // System.Byte[] Filename
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Filename;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: RemoteStorageFileShareResult_t
    constexpr RemoteStorageFileShareResult_t(::Steamworks::Result Result_ = {}, uint64_t File_ = {}, ::ArrayW<uint8_t> Filename_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : Result{Result_}, File{File_}, Filename{Filename_} {}
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
    // Get instance field reference: System.UInt64 File
    [[deprecated("Use field access instead!")]] uint64_t& dyn_File();
    // Get instance field reference: System.Byte[] Filename
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Filename();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x464EE0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x464E40
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageFileShareResult_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageFileShareResult_t), 16 + sizeof(::ArrayW<uint8_t>)> __Steamworks_Data_RemoteStorageFileShareResult_tSizeCheck;
  static_assert(sizeof(RemoteStorageFileShareResult_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageFileShareResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageFileShareResult_t::*)()>(&Steamworks::Data::RemoteStorageFileShareResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageFileShareResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageFileShareResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageFileShareResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageFileShareResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
