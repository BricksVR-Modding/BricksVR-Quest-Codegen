// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.ResourceLocation
#include "System/Reflection/ResourceLocation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ManifestResourceInfo
  class ManifestResourceInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::ManifestResourceInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ManifestResourceInfo*, "System.Reflection", "ManifestResourceInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ManifestResourceInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class ManifestResourceInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Reflection.Assembly _containingAssembly
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::Assembly* containingAssembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    // private System.String _containingFileName
    // Size: 0x8
    // Offset: 0x18
    ::StringW containingFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Reflection.ResourceLocation _resourceLocation
    // Size: 0x4
    // Offset: 0x20
    ::System::Reflection::ResourceLocation resourceLocation;
    // Field size check
    static_assert(sizeof(::System::Reflection::ResourceLocation) == 0x4);
    public:
    // Get instance field reference: private System.Reflection.Assembly _containingAssembly
    [[deprecated("Use field access instead!")]] ::System::Reflection::Assembly*& dyn__containingAssembly();
    // Get instance field reference: private System.String _containingFileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__containingFileName();
    // Get instance field reference: private System.Reflection.ResourceLocation _resourceLocation
    [[deprecated("Use field access instead!")]] ::System::Reflection::ResourceLocation& dyn__resourceLocation();
    // public System.Reflection.Assembly get_ReferencedAssembly()
    // Offset: 0x1E1920
    ::System::Reflection::Assembly* get_ReferencedAssembly();
    // public System.String get_FileName()
    // Offset: 0x1E1520
    ::StringW get_FileName();
    // public System.Reflection.ResourceLocation get_ResourceLocation()
    // Offset: 0x217240
    ::System::Reflection::ResourceLocation get_ResourceLocation();
    // public System.Void .ctor(System.Reflection.Assembly containingAssembly, System.String containingFileName, System.Reflection.ResourceLocation resourceLocation)
    // Offset: 0x541430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestResourceInfo* New_ctor(::System::Reflection::Assembly* containingAssembly, ::StringW containingFileName, ::System::Reflection::ResourceLocation resourceLocation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::ManifestResourceInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestResourceInfo*, creationType>(containingAssembly, containingFileName, resourceLocation)));
    }
  }; // System.Reflection.ManifestResourceInfo
  #pragma pack(pop)
  static check_size<sizeof(ManifestResourceInfo), 32 + sizeof(::System::Reflection::ResourceLocation)> __System_Reflection_ManifestResourceInfoSizeCheck;
  static_assert(sizeof(ManifestResourceInfo) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::ManifestResourceInfo::get_ReferencedAssembly
// Il2CppName: get_ReferencedAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (System::Reflection::ManifestResourceInfo::*)()>(&System::Reflection::ManifestResourceInfo::get_ReferencedAssembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ManifestResourceInfo*), "get_ReferencedAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ManifestResourceInfo::get_FileName
// Il2CppName: get_FileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::ManifestResourceInfo::*)()>(&System::Reflection::ManifestResourceInfo::get_FileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ManifestResourceInfo*), "get_FileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ManifestResourceInfo::get_ResourceLocation
// Il2CppName: get_ResourceLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ResourceLocation (System::Reflection::ManifestResourceInfo::*)()>(&System::Reflection::ManifestResourceInfo::get_ResourceLocation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ManifestResourceInfo*), "get_ResourceLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ManifestResourceInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!