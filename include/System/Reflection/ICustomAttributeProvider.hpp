// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::ICustomAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ICustomAttributeProvider*, "System.Reflection", "ICustomAttributeProvider");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ICustomAttributeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C7F88
  class ICustomAttributeProvider {
    public:
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    bool IsDefined(::System::Type* attributeType, bool inherit);
  }; // System.Reflection.ICustomAttributeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::ICustomAttributeProvider::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::ICustomAttributeProvider::*)(::System::Type*, bool)>(&System::Reflection::ICustomAttributeProvider::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ICustomAttributeProvider*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::ICustomAttributeProvider::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ICustomAttributeProvider::*)(::System::Type*, bool)>(&System::Reflection::ICustomAttributeProvider::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ICustomAttributeProvider*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
