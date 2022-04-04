// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamAPI
#include "Steamworks/SteamAPI.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks::Data
namespace Steamworks::Data {
  // Forward declaring type: HSteamPipe
  struct HSteamPipe;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamAPI::Native);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamAPI::Native*, "Steamworks", "SteamAPI/Native");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.SteamAPI/Steamworks.Native
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamAPI::Native : public ::Il2CppObject {
    public:
    // static public System.Boolean SteamAPI_Init()
    // Offset: 0x5C03E0
    static bool SteamAPI_Init();
    // static public Steamworks.Data.HSteamPipe SteamAPI_GetHSteamPipe()
    // Offset: 0x5C0370
    static ::Steamworks::Data::HSteamPipe SteamAPI_GetHSteamPipe();
    // static public System.Boolean SteamAPI_RestartAppIfNecessary(System.UInt32 unOwnAppID)
    // Offset: 0x5C0450
    static bool SteamAPI_RestartAppIfNecessary(uint unOwnAppID);
  }; // Steamworks.SteamAPI/Steamworks.Native
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamAPI::Native::SteamAPI_Init
// Il2CppName: SteamAPI_Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Steamworks::SteamAPI::Native::SteamAPI_Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamAPI::Native*), "SteamAPI_Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamAPI::Native::SteamAPI_GetHSteamPipe
// Il2CppName: SteamAPI_GetHSteamPipe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::Data::HSteamPipe (*)()>(&Steamworks::SteamAPI::Native::SteamAPI_GetHSteamPipe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamAPI::Native*), "SteamAPI_GetHSteamPipe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamAPI::Native::SteamAPI_RestartAppIfNecessary
// Il2CppName: SteamAPI_RestartAppIfNecessary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint)>(&Steamworks::SteamAPI::Native::SteamAPI_RestartAppIfNecessary)> {
  static const MethodInfo* get() {
    static auto* unOwnAppID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamAPI::Native*), "SteamAPI_RestartAppIfNecessary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unOwnAppID});
  }
};
