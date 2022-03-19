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
// Including type: Steamworks.SteamNetworkingAvailability
#include "Steamworks/SteamNetworkingAvailability.hpp"
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
  // Forward declaring type: SteamNetAuthenticationStatus_t
  struct SteamNetAuthenticationStatus_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::SteamNetAuthenticationStatus_t, "Steamworks.Data", "SteamNetAuthenticationStatus_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.SteamNetAuthenticationStatus_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamNetAuthenticationStatus_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.SteamNetworkingAvailability Avail
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::SteamNetworkingAvailability Avail;
    // Field size check
    static_assert(sizeof(::Steamworks::SteamNetworkingAvailability) == 0x4);
    // Padding between fields: Avail and: DebugMsg
    char __padding0[0x4] = {};
    // System.Byte[] DebugMsg
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> DebugMsg;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: SteamNetAuthenticationStatus_t
    constexpr SteamNetAuthenticationStatus_t(::Steamworks::SteamNetworkingAvailability Avail_ = {}, ::ArrayW<uint8_t> DebugMsg_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : Avail{Avail_}, DebugMsg{DebugMsg_} {}
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
    // Get instance field reference: Steamworks.SteamNetworkingAvailability Avail
    ::Steamworks::SteamNetworkingAvailability& dyn_Avail();
    // Get instance field reference: System.Byte[] DebugMsg
    ::ArrayW<uint8_t>& dyn_DebugMsg();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA5A1F4
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA5A1FC
    static void _cctor();
  }; // Steamworks.Data.SteamNetAuthenticationStatus_t
  #pragma pack(pop)
  static check_size<sizeof(SteamNetAuthenticationStatus_t), 8 + sizeof(::ArrayW<uint8_t>)> __Steamworks_Data_SteamNetAuthenticationStatus_tSizeCheck;
  static_assert(sizeof(SteamNetAuthenticationStatus_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::SteamNetAuthenticationStatus_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::SteamNetAuthenticationStatus_t::*)()>(&Steamworks::Data::SteamNetAuthenticationStatus_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamNetAuthenticationStatus_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::SteamNetAuthenticationStatus_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::SteamNetAuthenticationStatus_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamNetAuthenticationStatus_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
