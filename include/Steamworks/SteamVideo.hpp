// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamClientClass`1
#include "Steamworks/SteamClientClass_1.hpp"
// Including type: Steamworks.BroadcastUploadResult
#include "Steamworks/BroadcastUploadResult.hpp"
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
  // Forward declaring type: SteamVideo
  class SteamVideo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamVideo);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamVideo*, "Steamworks", "SteamVideo");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamVideo
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVideo : public ::Steamworks::SteamClientClass_1<::Steamworks::SteamVideo*> {
    public:
    // Nested type: ::Steamworks::SteamVideo::$$c
    class $$c;
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action OnBroadcastStarted
    static ::System::Action* _get_OnBroadcastStarted();
    // Set static field: static private System.Action OnBroadcastStarted
    static void _set_OnBroadcastStarted(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`1<Steamworks.BroadcastUploadResult> OnBroadcastStopped
    static ::System::Action_1<::Steamworks::BroadcastUploadResult>* _get_OnBroadcastStopped();
    // Set static field: static private System.Action`1<Steamworks.BroadcastUploadResult> OnBroadcastStopped
    static void _set_OnBroadcastStopped(::System::Action_1<::Steamworks::BroadcastUploadResult>* value);
    // static System.Void InstallEvents()
    // Offset: 0x5C7770
    static void InstallEvents();
    // public System.Void .ctor()
    // Offset: 0x5C7940
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVideo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamVideo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVideo*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0x5C76E0
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamVideo
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamVideo::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamVideo::InstallEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamVideo*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamVideo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamVideo::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamVideo::*)(bool)>(&Steamworks::SteamVideo::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamVideo*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
