// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamUtils
#include "Steamworks/SteamUtils.hpp"
// Including type: Steamworks.Data.IPCountry_t
#include "Steamworks/Data/IPCountry_t.hpp"
// Including type: Steamworks.Data.LowBatteryPower_t
#include "Steamworks/Data/LowBatteryPower_t.hpp"
// Including type: Steamworks.Data.SteamShutdown_t
#include "Steamworks/Data/SteamShutdown_t.hpp"
// Including type: Steamworks.Data.GamepadTextInputDismissed_t
#include "Steamworks/Data/GamepadTextInputDismissed_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamUtils::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamUtils::$$c*, "Steamworks", "SteamUtils/<>c");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.SteamUtils/Steamworks.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SteamUtils::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Steamworks.SteamUtils/Steamworks.<>c <>9
    static ::Steamworks::SteamUtils::$$c* _get_$$9();
    // Set static field: static public readonly Steamworks.SteamUtils/Steamworks.<>c <>9
    static void _set_$$9(::Steamworks::SteamUtils::$$c* value);
    // Get static field: static public System.Action`1<Steamworks.Data.IPCountry_t> <>9__3_0
    static ::System::Action_1<::Steamworks::Data::IPCountry_t>* _get_$$9__3_0();
    // Set static field: static public System.Action`1<Steamworks.Data.IPCountry_t> <>9__3_0
    static void _set_$$9__3_0(::System::Action_1<::Steamworks::Data::IPCountry_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.LowBatteryPower_t> <>9__3_1
    static ::System::Action_1<::Steamworks::Data::LowBatteryPower_t>* _get_$$9__3_1();
    // Set static field: static public System.Action`1<Steamworks.Data.LowBatteryPower_t> <>9__3_1
    static void _set_$$9__3_1(::System::Action_1<::Steamworks::Data::LowBatteryPower_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.SteamShutdown_t> <>9__3_2
    static ::System::Action_1<::Steamworks::Data::SteamShutdown_t>* _get_$$9__3_2();
    // Set static field: static public System.Action`1<Steamworks.Data.SteamShutdown_t> <>9__3_2
    static void _set_$$9__3_2(::System::Action_1<::Steamworks::Data::SteamShutdown_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.GamepadTextInputDismissed_t> <>9__3_3
    static ::System::Action_1<::Steamworks::Data::GamepadTextInputDismissed_t>* _get_$$9__3_3();
    // Set static field: static public System.Action`1<Steamworks.Data.GamepadTextInputDismissed_t> <>9__3_3
    static void _set_$$9__3_3(::System::Action_1<::Steamworks::Data::GamepadTextInputDismissed_t>* value);
    // static private System.Void .cctor()
    // Offset: 0xE40810
    static void _cctor();
    // System.Void <InstallEvents>b__3_0(Steamworks.Data.IPCountry_t x)
    // Offset: 0xE4087C
    void $InstallEvents$b__3_0(::Steamworks::Data::IPCountry_t x);
    // System.Void <InstallEvents>b__3_1(Steamworks.Data.LowBatteryPower_t x)
    // Offset: 0xE408F8
    void $InstallEvents$b__3_1(::Steamworks::Data::LowBatteryPower_t x);
    // System.Void <InstallEvents>b__3_2(Steamworks.Data.SteamShutdown_t x)
    // Offset: 0xE40984
    void $InstallEvents$b__3_2(::Steamworks::Data::SteamShutdown_t x);
    // System.Void <InstallEvents>b__3_3(Steamworks.Data.GamepadTextInputDismissed_t x)
    // Offset: 0xE409E0
    void $InstallEvents$b__3_3(::Steamworks::Data::GamepadTextInputDismissed_t x);
    // public System.Void .ctor()
    // Offset: 0xE40874
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamUtils::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamUtils::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamUtils::$$c*, creationType>()));
    }
  }; // Steamworks.SteamUtils/Steamworks.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamUtils::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamUtils::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUtils::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUtils::$$c::$InstallEvents$b__3_0
// Il2CppName: <InstallEvents>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamUtils::$$c::*)(::Steamworks::Data::IPCountry_t)>(&Steamworks::SteamUtils::$$c::$InstallEvents$b__3_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "IPCountry_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUtils::$$c*), "<InstallEvents>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUtils::$$c::$InstallEvents$b__3_1
// Il2CppName: <InstallEvents>b__3_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamUtils::$$c::*)(::Steamworks::Data::LowBatteryPower_t)>(&Steamworks::SteamUtils::$$c::$InstallEvents$b__3_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LowBatteryPower_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUtils::$$c*), "<InstallEvents>b__3_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUtils::$$c::$InstallEvents$b__3_2
// Il2CppName: <InstallEvents>b__3_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamUtils::$$c::*)(::Steamworks::Data::SteamShutdown_t)>(&Steamworks::SteamUtils::$$c::$InstallEvents$b__3_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "SteamShutdown_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUtils::$$c*), "<InstallEvents>b__3_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUtils::$$c::$InstallEvents$b__3_3
// Il2CppName: <InstallEvents>b__3_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamUtils::$$c::*)(::Steamworks::Data::GamepadTextInputDismissed_t)>(&Steamworks::SteamUtils::$$c::$InstallEvents$b__3_3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "GamepadTextInputDismissed_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUtils::$$c*), "<InstallEvents>b__3_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUtils::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
