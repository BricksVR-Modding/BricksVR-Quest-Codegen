// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
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
  // Forward declaring type: ClientGameServerDeny_t
  struct ClientGameServerDeny_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::ClientGameServerDeny_t, "Steamworks.Data", "ClientGameServerDeny_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.ClientGameServerDeny_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClientGameServerDeny_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 AppID
    // Size: 0x4
    // Offset: 0x0
    uint AppID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 GameServerIP
    // Size: 0x4
    // Offset: 0x4
    uint GameServerIP;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt16 GameServerPort
    // Size: 0x2
    // Offset: 0x8
    uint16_t GameServerPort;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 Secure
    // Size: 0x2
    // Offset: 0xA
    uint16_t Secure;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt32 Reason
    // Size: 0x4
    // Offset: 0xC
    uint Reason;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ClientGameServerDeny_t
    constexpr ClientGameServerDeny_t(uint AppID_ = {}, uint GameServerIP_ = {}, uint16_t GameServerPort_ = {}, uint16_t Secure_ = {}, uint Reason_ = {}) noexcept : AppID{AppID_}, GameServerIP{GameServerIP_}, GameServerPort{GameServerPort_}, Secure{Secure_}, Reason{Reason_} {}
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
    // Get instance field reference: System.UInt32 AppID
    [[deprecated("Use field access instead!")]] uint& dyn_AppID();
    // Get instance field reference: System.UInt32 GameServerIP
    [[deprecated("Use field access instead!")]] uint& dyn_GameServerIP();
    // Get instance field reference: System.UInt16 GameServerPort
    [[deprecated("Use field access instead!")]] uint16_t& dyn_GameServerPort();
    // Get instance field reference: System.UInt16 Secure
    [[deprecated("Use field access instead!")]] uint16_t& dyn_Secure();
    // Get instance field reference: System.UInt32 Reason
    [[deprecated("Use field access instead!")]] uint& dyn_Reason();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x45CCF0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x45CC50
    static void _cctor();
  }; // Steamworks.Data.ClientGameServerDeny_t
  #pragma pack(pop)
  static check_size<sizeof(ClientGameServerDeny_t), 12 + sizeof(uint)> __Steamworks_Data_ClientGameServerDeny_tSizeCheck;
  static_assert(sizeof(ClientGameServerDeny_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::ClientGameServerDeny_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::ClientGameServerDeny_t::*)()>(&Steamworks::Data::ClientGameServerDeny_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ClientGameServerDeny_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::ClientGameServerDeny_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::ClientGameServerDeny_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ClientGameServerDeny_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
