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
  // Forward declaring type: SteamServerConnectFailure_t
  struct SteamServerConnectFailure_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::SteamServerConnectFailure_t, "Steamworks.Data", "SteamServerConnectFailure_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x5
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.SteamServerConnectFailure_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamServerConnectFailure_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // System.Boolean StillRetrying
    // Size: 0x1
    // Offset: 0x4
    bool StillRetrying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: SteamServerConnectFailure_t
    constexpr SteamServerConnectFailure_t(::Steamworks::Result Result_ = {}, bool StillRetrying_ = {}) noexcept : Result{Result_}, StillRetrying{StillRetrying_} {}
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
    // Get instance field reference: System.Boolean StillRetrying
    bool& dyn_StillRetrying();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA5A744
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA5A74C
    static void _cctor();
  }; // Steamworks.Data.SteamServerConnectFailure_t
  #pragma pack(pop)
  static check_size<sizeof(SteamServerConnectFailure_t), 4 + sizeof(bool)> __Steamworks_Data_SteamServerConnectFailure_tSizeCheck;
  static_assert(sizeof(SteamServerConnectFailure_t) == 0x5);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::SteamServerConnectFailure_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::SteamServerConnectFailure_t::*)()>(&Steamworks::Data::SteamServerConnectFailure_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamServerConnectFailure_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::SteamServerConnectFailure_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::SteamServerConnectFailure_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamServerConnectFailure_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
