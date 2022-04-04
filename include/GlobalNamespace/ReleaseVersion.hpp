// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReleaseVersion
  class ReleaseVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ReleaseVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReleaseVersion*, "", "ReleaseVersion");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ReleaseVersion
  // [TokenAttribute] Offset: FFFFFFFF
  class ReleaseVersion : public ::Il2CppObject {
    public:
    // Get static field: static public System.Int32 Major
    static int _get_Major();
    // Set static field: static public System.Int32 Major
    static void _set_Major(int value);
    // Get static field: static public System.Int32 Minor
    static int _get_Minor();
    // Set static field: static public System.Int32 Minor
    static void _set_Minor(int value);
    // Get static field: static public System.Int32 Patch
    static int _get_Patch();
    // Set static field: static public System.Int32 Patch
    static void _set_Patch(int value);
    // static private System.Void .cctor()
    // Offset: 0x6C9CB0
    static void _cctor();
    // static public System.String VersionString()
    // Offset: 0x6C9BC0
    static ::StringW VersionString();
    // static public System.String MinorString()
    // Offset: 0x6C9B10
    static ::StringW MinorString();
  }; // ReleaseVersion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReleaseVersion::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ReleaseVersion::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReleaseVersion*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReleaseVersion::VersionString
// Il2CppName: VersionString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::ReleaseVersion::VersionString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReleaseVersion*), "VersionString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReleaseVersion::MinorString
// Il2CppName: MinorString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::ReleaseVersion::MinorString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReleaseVersion*), "MinorString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
