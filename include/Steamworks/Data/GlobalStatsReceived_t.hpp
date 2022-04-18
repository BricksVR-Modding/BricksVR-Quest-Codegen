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
  // Forward declaring type: GlobalStatsReceived_t
  struct GlobalStatsReceived_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GlobalStatsReceived_t, "Steamworks.Data", "GlobalStatsReceived_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GlobalStatsReceived_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GlobalStatsReceived_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 GameID
    // Size: 0x8
    // Offset: 0x0
    uint64_t GameID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x8
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    public:
    // Creating value type constructor for type: GlobalStatsReceived_t
    constexpr GlobalStatsReceived_t(uint64_t GameID_ = {}, ::Steamworks::Result Result_ = {}) noexcept : GameID{GameID_}, Result{Result_} {}
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
    // Get instance field reference: System.UInt64 GameID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_GameID();
    // Get instance field reference: Steamworks.Result Result
    [[deprecated("Use field access instead!")]] ::Steamworks::Result& dyn_Result();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x460E70
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x460DD0
    static void _cctor();
  }; // Steamworks.Data.GlobalStatsReceived_t
  #pragma pack(pop)
  static check_size<sizeof(GlobalStatsReceived_t), 8 + sizeof(::Steamworks::Result)> __Steamworks_Data_GlobalStatsReceived_tSizeCheck;
  static_assert(sizeof(GlobalStatsReceived_t) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::GlobalStatsReceived_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::GlobalStatsReceived_t::*)()>(&Steamworks::Data::GlobalStatsReceived_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GlobalStatsReceived_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::GlobalStatsReceived_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::GlobalStatsReceived_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GlobalStatsReceived_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
