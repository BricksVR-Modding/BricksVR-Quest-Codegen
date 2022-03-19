// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IActivator
  class IActivator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IConstructionCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, "System.Runtime.Remoting.Activation", "IConstructionCallMessage");
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.IConstructionCallMessage
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6CA140
  class IConstructionCallMessage/*, public ::System::Runtime::Remoting::Messaging::IMethodCallMessage*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage
    operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(this);
    }
    // public System.Type get_ActivationType()
    // Offset: 0xFFFFFFFF
    ::System::Type* get_ActivationType();
    // public System.String get_ActivationTypeName()
    // Offset: 0xFFFFFFFF
    ::StringW get_ActivationTypeName();
    // public System.Runtime.Remoting.Activation.IActivator get_Activator()
    // Offset: 0xFFFFFFFF
    ::System::Runtime::Remoting::Activation::IActivator* get_Activator();
    // public System.Void set_Activator(System.Runtime.Remoting.Activation.IActivator value)
    // Offset: 0xFFFFFFFF
    void set_Activator(::System::Runtime::Remoting::Activation::IActivator* value);
    // public System.Object[] get_CallSiteActivationAttributes()
    // Offset: 0xFFFFFFFF
    ::ArrayW<::Il2CppObject*> get_CallSiteActivationAttributes();
    // public System.Collections.IList get_ContextProperties()
    // Offset: 0xFFFFFFFF
    ::System::Collections::IList* get_ContextProperties();
  }; // System.Runtime.Remoting.Activation.IConstructionCallMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationType
// Il2CppName: get_ActivationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(&System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IConstructionCallMessage*), "get_ActivationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationTypeName
// Il2CppName: get_ActivationTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(&System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ActivationTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IConstructionCallMessage*), "get_ActivationTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IConstructionCallMessage::get_Activator
// Il2CppName: get_Activator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(&System::Runtime::Remoting::Activation::IConstructionCallMessage::get_Activator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IConstructionCallMessage*), "get_Activator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IConstructionCallMessage::set_Activator
// Il2CppName: set_Activator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Activation::IConstructionCallMessage::*)(::System::Runtime::Remoting::Activation::IActivator*)>(&System::Runtime::Remoting::Activation::IConstructionCallMessage::set_Activator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IActivator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IConstructionCallMessage*), "set_Activator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IConstructionCallMessage::get_CallSiteActivationAttributes
// Il2CppName: get_CallSiteActivationAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(&System::Runtime::Remoting::Activation::IConstructionCallMessage::get_CallSiteActivationAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IConstructionCallMessage*), "get_CallSiteActivationAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ContextProperties
// Il2CppName: get_ContextProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (System::Runtime::Remoting::Activation::IConstructionCallMessage::*)()>(&System::Runtime::Remoting::Activation::IConstructionCallMessage::get_ContextProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::IConstructionCallMessage*), "get_ContextProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
