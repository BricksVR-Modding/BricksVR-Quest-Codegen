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
  // Forward declaring type: ReservationNotificationCallback_t
  struct ReservationNotificationCallback_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::ReservationNotificationCallback_t, "Steamworks.Data", "ReservationNotificationCallback_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.ReservationNotificationCallback_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReservationNotificationCallback_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 BeaconID
    // Size: 0x8
    // Offset: 0x0
    uint64_t BeaconID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 SteamIDJoiner
    // Size: 0x8
    // Offset: 0x8
    uint64_t SteamIDJoiner;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: ReservationNotificationCallback_t
    constexpr ReservationNotificationCallback_t(uint64_t BeaconID_ = {}, uint64_t SteamIDJoiner_ = {}) noexcept : BeaconID{BeaconID_}, SteamIDJoiner{SteamIDJoiner_} {}
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
    // Get instance field reference: System.UInt64 BeaconID
    uint64_t& dyn_BeaconID();
    // Get instance field reference: System.UInt64 SteamIDJoiner
    uint64_t& dyn_SteamIDJoiner();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA59368
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA59370
    static void _cctor();
  }; // Steamworks.Data.ReservationNotificationCallback_t
  #pragma pack(pop)
  static check_size<sizeof(ReservationNotificationCallback_t), 8 + sizeof(uint64_t)> __Steamworks_Data_ReservationNotificationCallback_tSizeCheck;
  static_assert(sizeof(ReservationNotificationCallback_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::ReservationNotificationCallback_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::ReservationNotificationCallback_t::*)()>(&Steamworks::Data::ReservationNotificationCallback_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ReservationNotificationCallback_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::ReservationNotificationCallback_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::ReservationNotificationCallback_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ReservationNotificationCallback_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
