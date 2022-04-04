// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.RuntimeRemoteClassHandle
#include "Mono/RuntimeRemoteClassHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RealProxy
  class RealProxy;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: TransparentProxy
  class TransparentProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::TransparentProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::TransparentProxy*, "System.Runtime.Remoting.Proxies", "TransparentProxy");
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Size: 0x21
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Proxies.TransparentProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class TransparentProxy : public ::Il2CppObject {
    public:
    public:
    // public System.Runtime.Remoting.Proxies.RealProxy _rp
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::Proxies::RealProxy* rp;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Proxies::RealProxy*) == 0x8);
    // private Mono.RuntimeRemoteClassHandle _class
    // Size: 0x8
    // Offset: 0x18
    ::Mono::RuntimeRemoteClassHandle _class;
    // Field size check
    static_assert(sizeof(::Mono::RuntimeRemoteClassHandle) == 0x8);
    // private System.Boolean _custom_type_info
    // Size: 0x1
    // Offset: 0x20
    bool custom_type_info;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Runtime.Remoting.Proxies.RealProxy _rp
    [[deprecated]] ::System::Runtime::Remoting::Proxies::RealProxy*& dyn__rp();
    // Get instance field reference: private Mono.RuntimeRemoteClassHandle _class
    [[deprecated]] ::Mono::RuntimeRemoteClassHandle& dyn__class();
    // Get instance field reference: private System.Boolean _custom_type_info
    [[deprecated]] bool& dyn__custom_type_info();
    // private System.Boolean get_IsContextBoundObject()
    // Offset: 0x3C4BA0
    bool get_IsContextBoundObject();
    // private System.Runtime.Remoting.Contexts.Context get_TargetContext()
    // Offset: 0x3C4C60
    ::System::Runtime::Remoting::Contexts::Context* get_TargetContext();
    // System.RuntimeType GetProxyType()
    // Offset: 0x3C43A0
    ::System::RuntimeType* GetProxyType();
    // private System.Boolean InCurrentContext()
    // Offset: 0x3C4460
    bool InCurrentContext();
    // System.Object LoadRemoteFieldNew(System.IntPtr classPtr, System.IntPtr fieldPtr)
    // Offset: 0x3C4550
    ::Il2CppObject* LoadRemoteFieldNew(::System::IntPtr classPtr, ::System::IntPtr fieldPtr);
    // System.Void StoreRemoteField(System.IntPtr classPtr, System.IntPtr fieldPtr, System.Object arg)
    // Offset: 0x3C4870
    void StoreRemoteField(::System::IntPtr classPtr, ::System::IntPtr fieldPtr, ::Il2CppObject* arg);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransparentProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Proxies::TransparentProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransparentProxy*, creationType>()));
    }
  }; // System.Runtime.Remoting.Proxies.TransparentProxy
  #pragma pack(pop)
  static check_size<sizeof(TransparentProxy), 32 + sizeof(bool)> __System_Runtime_Remoting_Proxies_TransparentProxySizeCheck;
  static_assert(sizeof(TransparentProxy) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::TransparentProxy::get_IsContextBoundObject
// Il2CppName: get_IsContextBoundObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(&System::Runtime::Remoting::Proxies::TransparentProxy::get_IsContextBoundObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::TransparentProxy*), "get_IsContextBoundObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::TransparentProxy::get_TargetContext
// Il2CppName: get_TargetContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(&System::Runtime::Remoting::Proxies::TransparentProxy::get_TargetContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::TransparentProxy*), "get_TargetContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::TransparentProxy::GetProxyType
// Il2CppName: GetProxyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(&System::Runtime::Remoting::Proxies::TransparentProxy::GetProxyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::TransparentProxy*), "GetProxyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::TransparentProxy::InCurrentContext
// Il2CppName: InCurrentContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Proxies::TransparentProxy::*)()>(&System::Runtime::Remoting::Proxies::TransparentProxy::InCurrentContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::TransparentProxy*), "InCurrentContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::TransparentProxy::LoadRemoteFieldNew
// Il2CppName: LoadRemoteFieldNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Proxies::TransparentProxy::*)(::System::IntPtr, ::System::IntPtr)>(&System::Runtime::Remoting::Proxies::TransparentProxy::LoadRemoteFieldNew)> {
  static const MethodInfo* get() {
    static auto* classPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::TransparentProxy*), "LoadRemoteFieldNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{classPtr, fieldPtr});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::TransparentProxy::StoreRemoteField
// Il2CppName: StoreRemoteField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::TransparentProxy::*)(::System::IntPtr, ::System::IntPtr, ::Il2CppObject*)>(&System::Runtime::Remoting::Proxies::TransparentProxy::StoreRemoteField)> {
  static const MethodInfo* get() {
    static auto* classPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::TransparentProxy*), "StoreRemoteField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{classPtr, fieldPtr, arg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::TransparentProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
