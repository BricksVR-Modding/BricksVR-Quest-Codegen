// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamClientClass`1
#include "Steamworks/SteamClientClass_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamMusic
  class SteamMusic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamMusic);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamMusic*, "Steamworks", "SteamMusic");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamMusic
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamMusic : public ::Steamworks::SteamClientClass_1<::Steamworks::SteamMusic*> {
    public:
    // Nested type: ::Steamworks::SteamMusic::$$c
    class $$c;
    // [DebuggerBrowsableAttribute] Offset: 0x71E800
    // Get static field: static private System.Action OnPlaybackChanged
    static ::System::Action* _get_OnPlaybackChanged();
    // Set static field: static private System.Action OnPlaybackChanged
    static void _set_OnPlaybackChanged(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0x71E83C
    // Get static field: static private System.Action`1<System.Single> OnVolumeChanged
    static ::System::Action_1<float>* _get_OnVolumeChanged();
    // Set static field: static private System.Action`1<System.Single> OnVolumeChanged
    static void _set_OnVolumeChanged(::System::Action_1<float>* value);
    // static System.Void InstallEvents()
    // Offset: 0xE3C2A0
    static void InstallEvents();
    // public System.Void .ctor()
    // Offset: 0xE3C460
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamMusic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamMusic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamMusic*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0xE3C210
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamMusic
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamMusic::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamMusic::InstallEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMusic*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMusic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamMusic::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMusic::*)(bool)>(&Steamworks::SteamMusic::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMusic*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
