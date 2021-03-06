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
  // Forward declaring type: RequestPlayersForGameFinalResultCallback_t
  struct RequestPlayersForGameFinalResultCallback_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RequestPlayersForGameFinalResultCallback_t, "Steamworks.Data", "RequestPlayersForGameFinalResultCallback_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RequestPlayersForGameFinalResultCallback_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RequestPlayersForGameFinalResultCallback_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // Padding between fields: Result and: LSearchID
    char __padding0[0x4] = {};
    // System.UInt64 LSearchID
    // Size: 0x8
    // Offset: 0x8
    uint64_t LSearchID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 LUniqueGameID
    // Size: 0x8
    // Offset: 0x10
    uint64_t LUniqueGameID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: RequestPlayersForGameFinalResultCallback_t
    constexpr RequestPlayersForGameFinalResultCallback_t(::Steamworks::Result Result_ = {}, uint64_t LSearchID_ = {}, uint64_t LUniqueGameID_ = {}) noexcept : Result{Result_}, LSearchID{LSearchID_}, LUniqueGameID{LUniqueGameID_} {}
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
    // Get instance field reference: System.UInt64 LSearchID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_LSearchID();
    // Get instance field reference: System.UInt64 LUniqueGameID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_LUniqueGameID();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x465B40
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x465AA0
    static void _cctor();
  }; // Steamworks.Data.RequestPlayersForGameFinalResultCallback_t
  #pragma pack(pop)
  static check_size<sizeof(RequestPlayersForGameFinalResultCallback_t), 16 + sizeof(uint64_t)> __Steamworks_Data_RequestPlayersForGameFinalResultCallback_tSizeCheck;
  static_assert(sizeof(RequestPlayersForGameFinalResultCallback_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RequestPlayersForGameFinalResultCallback_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RequestPlayersForGameFinalResultCallback_t::*)()>(&Steamworks::Data::RequestPlayersForGameFinalResultCallback_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RequestPlayersForGameFinalResultCallback_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RequestPlayersForGameFinalResultCallback_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RequestPlayersForGameFinalResultCallback_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RequestPlayersForGameFinalResultCallback_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
