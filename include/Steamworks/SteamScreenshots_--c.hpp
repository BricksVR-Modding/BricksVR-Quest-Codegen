// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamScreenshots
#include "Steamworks/SteamScreenshots.hpp"
// Including type: Steamworks.Data.ScreenshotRequested_t
#include "Steamworks/Data/ScreenshotRequested_t.hpp"
// Including type: Steamworks.Data.ScreenshotReady_t
#include "Steamworks/Data/ScreenshotReady_t.hpp"
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
NEED_NO_BOX(::Steamworks::SteamScreenshots::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamScreenshots::$$c*, "Steamworks", "SteamScreenshots/<>c");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.SteamScreenshots/Steamworks.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SteamScreenshots::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Steamworks.SteamScreenshots/Steamworks.<>c <>9
    static ::Steamworks::SteamScreenshots::$$c* _get_$$9();
    // Set static field: static public readonly Steamworks.SteamScreenshots/Steamworks.<>c <>9
    static void _set_$$9(::Steamworks::SteamScreenshots::$$c* value);
    // Get static field: static public System.Action`1<Steamworks.Data.ScreenshotRequested_t> <>9__3_0
    static ::System::Action_1<::Steamworks::Data::ScreenshotRequested_t>* _get_$$9__3_0();
    // Set static field: static public System.Action`1<Steamworks.Data.ScreenshotRequested_t> <>9__3_0
    static void _set_$$9__3_0(::System::Action_1<::Steamworks::Data::ScreenshotRequested_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.ScreenshotReady_t> <>9__3_1
    static ::System::Action_1<::Steamworks::Data::ScreenshotReady_t>* _get_$$9__3_1();
    // Set static field: static public System.Action`1<Steamworks.Data.ScreenshotReady_t> <>9__3_1
    static void _set_$$9__3_1(::System::Action_1<::Steamworks::Data::ScreenshotReady_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x5C9BA0
    static void _cctor();
    // System.Void <InstallEvents>b__3_0(Steamworks.Data.ScreenshotRequested_t x)
    // Offset: 0x5C7FC0
    void $InstallEvents$b__3_0(::Steamworks::Data::ScreenshotRequested_t x);
    // System.Void <InstallEvents>b__3_1(Steamworks.Data.ScreenshotReady_t x)
    // Offset: 0x5C80D0
    void $InstallEvents$b__3_1(::Steamworks::Data::ScreenshotReady_t x);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamScreenshots::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamScreenshots::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamScreenshots::$$c*, creationType>()));
    }
  }; // Steamworks.SteamScreenshots/Steamworks.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamScreenshots::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamScreenshots::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamScreenshots::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamScreenshots::$$c::$InstallEvents$b__3_0
// Il2CppName: <InstallEvents>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamScreenshots::$$c::*)(::Steamworks::Data::ScreenshotRequested_t)>(&Steamworks::SteamScreenshots::$$c::$InstallEvents$b__3_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "ScreenshotRequested_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamScreenshots::$$c*), "<InstallEvents>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamScreenshots::$$c::$InstallEvents$b__3_1
// Il2CppName: <InstallEvents>b__3_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamScreenshots::$$c::*)(::Steamworks::Data::ScreenshotReady_t)>(&Steamworks::SteamScreenshots::$$c::$InstallEvents$b__3_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "ScreenshotReady_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamScreenshots::$$c*), "<InstallEvents>b__3_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamScreenshots::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
