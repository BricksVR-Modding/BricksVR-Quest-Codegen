// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
  // Forward declaring type: SteamRemotePlaySessionConnected_t
  struct SteamRemotePlaySessionConnected_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::SteamRemotePlaySessionConnected_t, "Steamworks.Data", "SteamRemotePlaySessionConnected_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.SteamRemotePlaySessionConnected_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamRemotePlaySessionConnected_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 SessionID
    // Size: 0x4
    // Offset: 0x0
    uint SessionID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: SteamRemotePlaySessionConnected_t
    constexpr SteamRemotePlaySessionConnected_t(uint SessionID_ = {}) noexcept : SessionID{SessionID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return SessionID;
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.UInt32 SessionID
    [[deprecated]] uint& dyn_SessionID();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x466D10
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x466C70
    static void _cctor();
  }; // Steamworks.Data.SteamRemotePlaySessionConnected_t
  #pragma pack(pop)
  static check_size<sizeof(SteamRemotePlaySessionConnected_t), 0 + sizeof(uint)> __Steamworks_Data_SteamRemotePlaySessionConnected_tSizeCheck;
  static_assert(sizeof(SteamRemotePlaySessionConnected_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::SteamRemotePlaySessionConnected_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::SteamRemotePlaySessionConnected_t::*)()>(&Steamworks::Data::SteamRemotePlaySessionConnected_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamRemotePlaySessionConnected_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::SteamRemotePlaySessionConnected_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::SteamRemotePlaySessionConnected_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamRemotePlaySessionConnected_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
