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
  // Forward declaring type: ComputeNewPlayerCompatibilityResult_t
  struct ComputeNewPlayerCompatibilityResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::ComputeNewPlayerCompatibilityResult_t, "Steamworks.Data", "ComputeNewPlayerCompatibilityResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.ComputeNewPlayerCompatibilityResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct ComputeNewPlayerCompatibilityResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // System.Int32 CPlayersThatDontLikeCandidate
    // Size: 0x4
    // Offset: 0x4
    int CPlayersThatDontLikeCandidate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 CPlayersThatCandidateDoesntLike
    // Size: 0x4
    // Offset: 0x8
    int CPlayersThatCandidateDoesntLike;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 CClanPlayersThatDontLikeCandidate
    // Size: 0x4
    // Offset: 0xC
    int CClanPlayersThatDontLikeCandidate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.UInt64 SteamIDCandidate
    // Size: 0x8
    // Offset: 0x10
    uint64_t SteamIDCandidate;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: ComputeNewPlayerCompatibilityResult_t
    constexpr ComputeNewPlayerCompatibilityResult_t(::Steamworks::Result Result_ = {}, int CPlayersThatDontLikeCandidate_ = {}, int CPlayersThatCandidateDoesntLike_ = {}, int CClanPlayersThatDontLikeCandidate_ = {}, uint64_t SteamIDCandidate_ = {}) noexcept : Result{Result_}, CPlayersThatDontLikeCandidate{CPlayersThatDontLikeCandidate_}, CPlayersThatCandidateDoesntLike{CPlayersThatCandidateDoesntLike_}, CClanPlayersThatDontLikeCandidate{CClanPlayersThatDontLikeCandidate_}, SteamIDCandidate{SteamIDCandidate_} {}
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
    // Get instance field reference: System.Int32 CPlayersThatDontLikeCandidate
    int& dyn_CPlayersThatDontLikeCandidate();
    // Get instance field reference: System.Int32 CPlayersThatCandidateDoesntLike
    int& dyn_CPlayersThatCandidateDoesntLike();
    // Get instance field reference: System.Int32 CClanPlayersThatDontLikeCandidate
    int& dyn_CClanPlayersThatDontLikeCandidate();
    // Get instance field reference: System.UInt64 SteamIDCandidate
    uint64_t& dyn_SteamIDCandidate();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA515F0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA515F8
    static void _cctor();
  }; // Steamworks.Data.ComputeNewPlayerCompatibilityResult_t
  #pragma pack(pop)
  static check_size<sizeof(ComputeNewPlayerCompatibilityResult_t), 16 + sizeof(uint64_t)> __Steamworks_Data_ComputeNewPlayerCompatibilityResult_tSizeCheck;
  static_assert(sizeof(ComputeNewPlayerCompatibilityResult_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::ComputeNewPlayerCompatibilityResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::ComputeNewPlayerCompatibilityResult_t::*)()>(&Steamworks::Data::ComputeNewPlayerCompatibilityResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ComputeNewPlayerCompatibilityResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::ComputeNewPlayerCompatibilityResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::ComputeNewPlayerCompatibilityResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ComputeNewPlayerCompatibilityResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
