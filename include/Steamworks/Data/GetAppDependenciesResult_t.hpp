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
  // Forward declaring type: GetAppDependenciesResult_t
  struct GetAppDependenciesResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GetAppDependenciesResult_t, "Steamworks.Data", "GetAppDependenciesResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GetAppDependenciesResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GetAppDependenciesResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
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
    // Steamworks.AppId[] GAppIDs
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Steamworks::AppId> GAppIDs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Steamworks::AppId>) == 0x8);
    // System.UInt32 NumAppDependencies
    // Size: 0x4
    // Offset: 0x18
    uint NumAppDependencies;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 TotalNumAppDependencies
    // Size: 0x4
    // Offset: 0x1C
    uint TotalNumAppDependencies;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: GetAppDependenciesResult_t
    constexpr GetAppDependenciesResult_t(::Steamworks::Result Result_ = {}, ::Steamworks::Data::PublishedFileId PublishedFileId_ = {}, ::ArrayW<::Steamworks::AppId> GAppIDs_ = ::ArrayW<::Steamworks::AppId>(static_cast<void*>(nullptr)), uint NumAppDependencies_ = {}, uint TotalNumAppDependencies_ = {}) noexcept : Result{Result_}, PublishedFileId{PublishedFileId_}, GAppIDs{GAppIDs_}, NumAppDependencies{NumAppDependencies_}, TotalNumAppDependencies{TotalNumAppDependencies_} {}
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
    // Get instance field reference: Steamworks.AppId[] GAppIDs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Steamworks::AppId>& dyn_GAppIDs();
    // Get instance field reference: System.UInt32 NumAppDependencies
    [[deprecated("Use field access instead!")]] uint& dyn_NumAppDependencies();
    // Get instance field reference: System.UInt32 TotalNumAppDependencies
    [[deprecated("Use field access instead!")]] uint& dyn_TotalNumAppDependencies();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x460A50
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x4609B0
    static void _cctor();
  }; // Steamworks.Data.GetAppDependenciesResult_t
  #pragma pack(pop)
  static check_size<sizeof(GetAppDependenciesResult_t), 28 + sizeof(uint)> __Steamworks_Data_GetAppDependenciesResult_tSizeCheck;
  static_assert(sizeof(GetAppDependenciesResult_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::GetAppDependenciesResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::GetAppDependenciesResult_t::*)()>(&Steamworks::Data::GetAppDependenciesResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GetAppDependenciesResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::GetAppDependenciesResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::GetAppDependenciesResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GetAppDependenciesResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
