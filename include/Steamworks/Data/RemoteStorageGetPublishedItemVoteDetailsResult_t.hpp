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
  // Forward declaring type: RemoteStorageGetPublishedItemVoteDetailsResult_t
  struct RemoteStorageGetPublishedItemVoteDetailsResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t, "Steamworks.Data", "RemoteStorageGetPublishedItemVoteDetailsResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RemoteStorageGetPublishedItemVoteDetailsResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStorageGetPublishedItemVoteDetailsResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
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
    // System.Int32 VotesFor
    // Size: 0x4
    // Offset: 0x10
    int VotesFor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 VotesAgainst
    // Size: 0x4
    // Offset: 0x14
    int VotesAgainst;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Reports
    // Size: 0x4
    // Offset: 0x18
    int Reports;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Single FScore
    // Size: 0x4
    // Offset: 0x1C
    float FScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: RemoteStorageGetPublishedItemVoteDetailsResult_t
    constexpr RemoteStorageGetPublishedItemVoteDetailsResult_t(::Steamworks::Result Result_ = {}, ::Steamworks::Data::PublishedFileId PublishedFileId_ = {}, int VotesFor_ = {}, int VotesAgainst_ = {}, int Reports_ = {}, float FScore_ = {}) noexcept : Result{Result_}, PublishedFileId{PublishedFileId_}, VotesFor{VotesFor_}, VotesAgainst{VotesAgainst_}, Reports{Reports_}, FScore{FScore_} {}
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
    // Get instance field reference: System.Int32 VotesFor
    [[deprecated("Use field access instead!")]] int& dyn_VotesFor();
    // Get instance field reference: System.Int32 VotesAgainst
    [[deprecated("Use field access instead!")]] int& dyn_VotesAgainst();
    // Get instance field reference: System.Int32 Reports
    [[deprecated("Use field access instead!")]] int& dyn_Reports();
    // Get instance field reference: System.Single FScore
    [[deprecated("Use field access instead!")]] float& dyn_FScore();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4650F0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x465050
    static void _cctor();
  }; // Steamworks.Data.RemoteStorageGetPublishedItemVoteDetailsResult_t
  #pragma pack(pop)
  static check_size<sizeof(RemoteStorageGetPublishedItemVoteDetailsResult_t), 28 + sizeof(float)> __Steamworks_Data_RemoteStorageGetPublishedItemVoteDetailsResult_tSizeCheck;
  static_assert(sizeof(RemoteStorageGetPublishedItemVoteDetailsResult_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t::*)()>(&Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RemoteStorageGetPublishedItemVoteDetailsResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
