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
  // Forward declaring type: LowBatteryPower_t
  struct LowBatteryPower_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::LowBatteryPower_t, "Steamworks.Data", "LowBatteryPower_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.LowBatteryPower_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct LowBatteryPower_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.Byte MinutesBatteryLeft
    // Size: 0x1
    // Offset: 0x0
    uint8_t MinutesBatteryLeft;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: LowBatteryPower_t
    constexpr LowBatteryPower_t(uint8_t MinutesBatteryLeft_ = {}) noexcept : MinutesBatteryLeft{MinutesBatteryLeft_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return MinutesBatteryLeft;
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.Byte MinutesBatteryLeft
    [[deprecated("Use field access instead!")]] uint8_t& dyn_MinutesBatteryLeft();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4632A0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x463200
    static void _cctor();
  }; // Steamworks.Data.LowBatteryPower_t
  #pragma pack(pop)
  static check_size<sizeof(LowBatteryPower_t), 0 + sizeof(uint8_t)> __Steamworks_Data_LowBatteryPower_tSizeCheck;
  static_assert(sizeof(LowBatteryPower_t) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::LowBatteryPower_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::LowBatteryPower_t::*)()>(&Steamworks::Data::LowBatteryPower_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::LowBatteryPower_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::LowBatteryPower_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::LowBatteryPower_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::LowBatteryPower_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
