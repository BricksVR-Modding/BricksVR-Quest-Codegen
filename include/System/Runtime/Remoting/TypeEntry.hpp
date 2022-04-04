// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: TypeEntry
  class TypeEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::TypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::TypeEntry*, "System.Runtime.Remoting", "TypeEntry");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.TypeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class TypeEntry : public ::Il2CppObject {
    public:
    public:
    // private System.String assembly_name
    // Size: 0x8
    // Offset: 0x10
    ::StringW assembly_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String type_name
    // Size: 0x8
    // Offset: 0x18
    ::StringW type_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String assembly_name
    [[deprecated]] ::StringW& dyn_assembly_name();
    // Get instance field reference: private System.String type_name
    [[deprecated]] ::StringW& dyn_type_name();
    // public System.String get_AssemblyName()
    // Offset: 0x1E1920
    ::StringW get_AssemblyName();
    // public System.Void set_AssemblyName(System.String value)
    // Offset: 0x269100
    void set_AssemblyName(::StringW value);
    // public System.String get_TypeName()
    // Offset: 0x1E1520
    ::StringW get_TypeName();
    // public System.Void set_TypeName(System.String value)
    // Offset: 0x1E4910
    void set_TypeName(::StringW value);
    // protected System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::TypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeEntry*, creationType>()));
    }
  }; // System.Runtime.Remoting.TypeEntry
  #pragma pack(pop)
  static check_size<sizeof(TypeEntry), 24 + sizeof(::StringW)> __System_Runtime_Remoting_TypeEntrySizeCheck;
  static_assert(sizeof(TypeEntry) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeEntry::get_AssemblyName
// Il2CppName: get_AssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::TypeEntry::*)()>(&System::Runtime::Remoting::TypeEntry::get_AssemblyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeEntry*), "get_AssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeEntry::set_AssemblyName
// Il2CppName: set_AssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::TypeEntry::*)(::StringW)>(&System::Runtime::Remoting::TypeEntry::set_AssemblyName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeEntry*), "set_AssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeEntry::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::TypeEntry::*)()>(&System::Runtime::Remoting::TypeEntry::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeEntry*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeEntry::set_TypeName
// Il2CppName: set_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::TypeEntry::*)(::StringW)>(&System::Runtime::Remoting::TypeEntry::set_TypeName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::TypeEntry*), "set_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::TypeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
