// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.MethodCall
#include "System/Runtime/Remoting/Messaging/MethodCall.hpp"
// Including type: System.Runtime.Remoting.Activation.IConstructionCallMessage
#include "System/Runtime/Remoting/Activation/IConstructionCallMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IActivator
  class IActivator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RemotingProxy
  class RemotingProxy;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ConstructionCall
  class ConstructionCall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionCall*, "System.Runtime.Remoting.Messaging", "ConstructionCall");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ConstructionCall
  // [TokenAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: DC4F0
  // [ComVisibleAttribute] Offset: DC4F0
  class ConstructionCall : public ::System::Runtime::Remoting::Messaging::MethodCall/*, public ::System::Runtime::Remoting::Activation::IConstructionCallMessage*/ {
    public:
    public:
    // private System.Runtime.Remoting.Activation.IActivator _activator
    // Size: 0x8
    // Offset: 0x68
    ::System::Runtime::Remoting::Activation::IActivator* activator;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Activation::IActivator*) == 0x8);
    // private System.Object[] _activationAttributes
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::Il2CppObject*> activationAttributes;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Collections.IList _contextProperties
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::IList* contextProperties;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    // private System.Type _activationType
    // Size: 0x8
    // Offset: 0x80
    ::System::Type* activationType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.String _activationTypeName
    // Size: 0x8
    // Offset: 0x88
    ::StringW activationTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isContextOk
    // Size: 0x1
    // Offset: 0x90
    bool isContextOk;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isContextOk and: sourceProxy
    char __padding5[0x7] = {};
    // private System.Runtime.Remoting.Proxies.RemotingProxy _sourceProxy
    // Size: 0x8
    // Offset: 0x98
    ::System::Runtime::Remoting::Proxies::RemotingProxy* sourceProxy;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Proxies::RemotingProxy*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Activation::IConstructionCallMessage
    operator ::System::Runtime::Remoting::Activation::IConstructionCallMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>(this);
    }
    // Get instance field reference: private System.Runtime.Remoting.Activation.IActivator _activator
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Activation::IActivator*& dyn__activator();
    // Get instance field reference: private System.Object[] _activationAttributes
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__activationAttributes();
    // Get instance field reference: private System.Collections.IList _contextProperties
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn__contextProperties();
    // Get instance field reference: private System.Type _activationType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__activationType();
    // Get instance field reference: private System.String _activationTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__activationTypeName();
    // Get instance field reference: private System.Boolean _isContextOk
    [[deprecated("Use field access instead!")]] bool& dyn__isContextOk();
    // Get instance field reference: private System.Runtime.Remoting.Proxies.RemotingProxy _sourceProxy
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Proxies::RemotingProxy*& dyn__sourceProxy();
    // System.Boolean get_IsContextOk()
    // Offset: 0x304200
    bool get_IsContextOk();
    // System.Void set_IsContextOk(System.Boolean value)
    // Offset: 0x3AD950
    void set_IsContextOk(bool value);
    // public System.Type get_ActivationType()
    // Offset: 0x3AD7D0
    ::System::Type* get_ActivationType();
    // public System.String get_ActivationTypeName()
    // Offset: 0x301340
    ::StringW get_ActivationTypeName();
    // public System.Runtime.Remoting.Activation.IActivator get_Activator()
    // Offset: 0x2A86C0
    ::System::Runtime::Remoting::Activation::IActivator* get_Activator();
    // public System.Void set_Activator(System.Runtime.Remoting.Activation.IActivator value)
    // Offset: 0x2F6BD0
    void set_Activator(::System::Runtime::Remoting::Activation::IActivator* value);
    // public System.Object[] get_CallSiteActivationAttributes()
    // Offset: 0x2F6AF0
    ::ArrayW<::Il2CppObject*> get_CallSiteActivationAttributes();
    // public System.Collections.IList get_ContextProperties()
    // Offset: 0x3AD8B0
    ::System::Collections::IList* get_ContextProperties();
    // System.Runtime.Remoting.Proxies.RemotingProxy get_SourceProxy()
    // Offset: 0x2F4B70
    ::System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy();
    // System.Void set_SourceProxy(System.Runtime.Remoting.Proxies.RemotingProxy value)
    // Offset: 0x2F4BA0
    void set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value);
    // System.Void .ctor(System.Type type)
    // Offset: 0x3AD6B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructionCall* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ConstructionCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructionCall*, creationType>(type)));
    }
    // System.Void SetActivationAttributes(System.Object[] attributes)
    // Offset: 0x2F6C80
    void SetActivationAttributes(::ArrayW<::Il2CppObject*> attributes);
    // public override System.Collections.IDictionary get_Properties()
    // Offset: 0x3AD920
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Collections.IDictionary MethodCall::get_Properties()
    ::System::Collections::IDictionary* get_Properties();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x3AD720
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructionCall* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ConstructionCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructionCall*, creationType>(info, context)));
    }
    // override System.Void InitDictionary()
    // Offset: 0x3AD2F0
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::InitDictionary()
    void InitDictionary();
    // override System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x3AD400
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::InitMethodProperty(System.String key, System.Object value)
    void InitMethodProperty(::StringW key, ::Il2CppObject* value);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x3AD1F0
    // Implemented from: System.Runtime.Remoting.Messaging.MethodCall
    // Base method: System.Void MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.Runtime.Remoting.Messaging.ConstructionCall
  #pragma pack(pop)
  static check_size<sizeof(ConstructionCall), 152 + sizeof(::System::Runtime::Remoting::Proxies::RemotingProxy*)> __System_Runtime_Remoting_Messaging_ConstructionCallSizeCheck;
  static_assert(sizeof(ConstructionCall) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk
// Il2CppName: get_IsContextOk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_IsContextOk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk
// Il2CppName: set_IsContextOk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCall::*)(bool)>(&System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "set_IsContextOk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType
// Il2CppName: get_ActivationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_ActivationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName
// Il2CppName: get_ActivationTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_ActivationTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator
// Il2CppName: get_Activator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_Activator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator
// Il2CppName: set_Activator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Remoting::Activation::IActivator*)>(&System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IActivator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "set_Activator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes
// Il2CppName: get_CallSiteActivationAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_CallSiteActivationAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties
// Il2CppName: get_ContextProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_ContextProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy
// Il2CppName: get_SourceProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Proxies::RemotingProxy* (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_SourceProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy
// Il2CppName: set_SourceProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Remoting::Proxies::RemotingProxy*)>(&System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Proxies", "RemotingProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "set_SourceProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes
// Il2CppName: SetActivationAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCall::*)(::ArrayW<::Il2CppObject*>)>(&System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "SetActivationAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary
// Il2CppName: InitDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCall::*)()>(&System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "InitDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty
// Il2CppName: InitMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCall::*)(::StringW, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "InitMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCall::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionCall*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
