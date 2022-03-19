// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamInterface
#include "Steamworks/SteamInterface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ISteamParties
  class ISteamParties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::ISteamParties);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::ISteamParties*, "Steamworks", "ISteamParties");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.ISteamParties
  // [TokenAttribute] Offset: FFFFFFFF
  class ISteamParties : public ::Steamworks::SteamInterface {
    public:
    // System.Void .ctor(System.Boolean IsGameServer)
    // Offset: 0xE37E78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISteamParties* New_ctor(bool IsGameServer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::ISteamParties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISteamParties*, creationType>(IsGameServer)));
    }
    // static System.IntPtr SteamAPI_SteamParties_v002()
    // Offset: 0xE37EA8
    static ::System::IntPtr SteamAPI_SteamParties_v002();
    // public override System.IntPtr GetUserInterfacePointer()
    // Offset: 0xE37F1C
    // Implemented from: Steamworks.SteamInterface
    // Base method: System.IntPtr SteamInterface::GetUserInterfacePointer()
    ::System::IntPtr GetUserInterfacePointer();
  }; // Steamworks.ISteamParties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::ISteamParties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::ISteamParties::SteamAPI_SteamParties_v002
// Il2CppName: SteamAPI_SteamParties_v002
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&Steamworks::ISteamParties::SteamAPI_SteamParties_v002)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamParties*), "SteamAPI_SteamParties_v002", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::ISteamParties::GetUserInterfacePointer
// Il2CppName: GetUserInterfacePointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Steamworks::ISteamParties::*)()>(&Steamworks::ISteamParties::GetUserInterfacePointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamParties*), "GetUserInterfacePointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
