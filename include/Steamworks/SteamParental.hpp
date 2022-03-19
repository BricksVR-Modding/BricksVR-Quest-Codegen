// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamSharedClass`1
#include "Steamworks/SteamSharedClass_1.hpp"
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
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamParental
  class SteamParental;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamParental);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamParental*, "Steamworks", "SteamParental");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamParental
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamParental : public ::Steamworks::SteamSharedClass_1<::Steamworks::SteamParental*> {
    public:
    // Nested type: ::Steamworks::SteamParental::$$c
    class $$c;
    // [DebuggerBrowsableAttribute] Offset: 0x71E92C
    // Get static field: static private System.Action OnSettingsChanged
    static ::System::Action* _get_OnSettingsChanged();
    // Set static field: static private System.Action OnSettingsChanged
    static void _set_OnSettingsChanged(::System::Action* value);
    // static System.Void InstallEvents(System.Boolean server)
    // Offset: 0xE3D65C
    static void InstallEvents(bool server);
    // public System.Void .ctor()
    // Offset: 0xE3D768
    // Implemented from: Steamworks.SteamSharedClass`1
    // Base method: System.Void SteamSharedClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamParental* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamParental::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamParental*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0xE3D5C8
    // Implemented from: Steamworks.SteamSharedClass`1
    // Base method: System.Void SteamSharedClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamParental
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamParental::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Steamworks::SteamParental::InstallEvents)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamParental*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamParental::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamParental::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamParental::*)(bool)>(&Steamworks::SteamParental::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamParental*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
