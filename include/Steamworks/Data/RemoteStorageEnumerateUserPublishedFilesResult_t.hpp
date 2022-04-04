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
  // Forward declaring type: RemoteStorageEnumerateUserPublishedFilesResult_t
  struct RemoteStorageEnumerateUserPublishedFilesResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t, "Steamworks.Data", "RemoteStorageEnumerateUserPublishedFilesResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageEnumerateUserPublishedFilesResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageEnumerateUserPublishedFilesResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // System.Int32 ResultsReturned
    // Size: 0x4
    // Offset: 0x4
    int ResultsReturned;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 TotalResultCount
    // Size: 0x4
    // Offset: 0x8
    int TotalResultCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: TotalResultCount and: GPublishedFileId
    char __padding2[0x4] = {};
    // Steamworks.Data.PublishedFileId[] GPublishedFileId
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Steamworks::Data::PublishedFileId> GPublishedFileId;
    // Field size check
    static_assert(sizeof(::ArrayW<::Steamworks::Data::PublishedFileId>) == 0x8);
    public:
    // Creating value type constructor for type: RemoteStorageEnumerateUserPublishedFilesResult_t
    constexpr RemoteStorageEnumerateUserPublishedFilesResult_t(::Steamworks::Result Result_ = {}, int ResultsReturned_ = {}, int TotalResultCount_ = {}, ::ArrayW<::Steamworks::Data::PublishedFileId> GPublishedFileId_ = ::ArrayW<::Steamworks::Data::PublishedFileId>(static_cast<void*>(nullptr))) noexcept : Result{Result_}, ResultsReturned{ResultsReturned_}, TotalResultCount{TotalResultCount_}, GPublishedFileId{GPublishedFileId_} {}
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
    // Get instance field reference: System.Int32 ResultsReturned
    [[deprecated]] int& dyn_ResultsReturned();
    // Get instance field reference: System.Int32 TotalResultCount
    [[deprecated]] int& dyn_TotalResultCount();
    // Get instance field reference: Steamworks.Data.PublishedFileId[] GPublishedFileId
    [[deprecated]] ::ArrayW<::Steamworks::Data::PublishedFileId>& dyn_GPublishedFileId();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x464B70
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x464AD0
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageEnumerateUserPublishedFilesResult_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageEnumerateUserPublishedFilesResult_t), 16 + sizeof(::ArrayW<::Steamworks::Data::PublishedFileId>)> __Steamworks_Data_RemoteStorageEnumerateUserPublishedFilesResult_tSizeCheck;
  static_assert(sizeof(RemoteStorageEnumerateUserPublishedFilesResult_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t::*)()>(&Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageEnumerateUserPublishedFilesResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
