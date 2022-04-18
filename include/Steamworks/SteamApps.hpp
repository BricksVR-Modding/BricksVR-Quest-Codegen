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
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamApps
  class SteamApps;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamApps);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamApps*, "Steamworks", "SteamApps");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamApps
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamApps : public ::Steamworks::SteamSharedClass_1<::Steamworks::SteamApps*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x5C0CC0
    // Implemented from: Steamworks.SteamSharedClass`1
    // Base method: System.Void SteamSharedClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamApps* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamApps::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamApps*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0x5C0C30
    // Implemented from: Steamworks.SteamSharedClass`1
    // Base method: System.Void SteamSharedClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamApps
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamApps::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamApps::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamApps::*)(bool)>(&Steamworks::SteamApps::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamApps*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
