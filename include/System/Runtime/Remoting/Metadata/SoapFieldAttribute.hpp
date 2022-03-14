// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Forward declaring type: SoapFieldAttribute
  class SoapFieldAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapFieldAttribute*, "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapFieldAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6CA17C
  // [ComVisibleAttribute] Offset: 6CA17C
  class SoapFieldAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _elementName
    // Size: 0x8
    // Offset: 0x28
    ::StringW elementName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isElement
    // Size: 0x1
    // Offset: 0x30
    bool isElement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String _elementName
    ::StringW& dyn__elementName();
    // Get instance field reference: private System.Boolean _isElement
    bool& dyn__isElement();
    // public System.String get_XmlElementName()
    // Offset: 0xA990A0
    ::StringW get_XmlElementName();
    // public System.Boolean IsInteropXmlElement()
    // Offset: 0xA990A8
    bool IsInteropXmlElement();
    // public System.Void .ctor()
    // Offset: 0xA99098
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapFieldAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Metadata::SoapFieldAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapFieldAttribute*, creationType>()));
    }
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0xA990B0
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapFieldAttribute
  #pragma pack(pop)
  static check_size<sizeof(SoapFieldAttribute), 48 + sizeof(bool)> __System_Runtime_Remoting_Metadata_SoapFieldAttributeSizeCheck;
  static_assert(sizeof(SoapFieldAttribute) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName
// Il2CppName: get_XmlElementName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapFieldAttribute*), "get_XmlElementName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement
// Il2CppName: IsInteropXmlElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapFieldAttribute*), "IsInteropXmlElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject
// Il2CppName: SetReflectionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject)> {
  static const MethodInfo* get() {
    static auto* reflectionObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapFieldAttribute*), "SetReflectionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectionObject});
  }
};
