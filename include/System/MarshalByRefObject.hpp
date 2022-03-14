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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ServerIdentity
  class ServerIdentity;
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MarshalByRefObject);
DEFINE_IL2CPP_ARG_TYPE(::System::MarshalByRefObject*, "System", "MarshalByRefObject");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.MarshalByRefObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C75D4
  class MarshalByRefObject : public ::Il2CppObject {
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
    // private System.Object _identity
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* identity;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return identity;
    }
    // Get instance field reference: private System.Object _identity
    ::Il2CppObject*& dyn__identity();
    // System.Runtime.Remoting.ServerIdentity get_ObjectIdentity()
    // Offset: 0xBA969C
    ::System::Runtime::Remoting::ServerIdentity* get_ObjectIdentity();
    // System.Void set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity value)
    // Offset: 0xBA976C
    void set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity* value);
    // public System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0xBA97C8
    ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType);
    // public System.Object InitializeLifetimeService()
    // Offset: 0xBA9824
    ::Il2CppObject* InitializeLifetimeService();
    // protected System.Void .ctor()
    // Offset: 0xBA9698
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarshalByRefObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MarshalByRefObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarshalByRefObject*, creationType>()));
    }
  }; // System.MarshalByRefObject
  #pragma pack(pop)
  static check_size<sizeof(MarshalByRefObject), 16 + sizeof(::Il2CppObject*)> __System_MarshalByRefObjectSizeCheck;
  static_assert(sizeof(MarshalByRefObject) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MarshalByRefObject::get_ObjectIdentity
// Il2CppName: get_ObjectIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ServerIdentity* (System::MarshalByRefObject::*)()>(&System::MarshalByRefObject::get_ObjectIdentity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MarshalByRefObject*), "get_ObjectIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MarshalByRefObject::set_ObjectIdentity
// Il2CppName: set_ObjectIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MarshalByRefObject::*)(::System::Runtime::Remoting::ServerIdentity*)>(&System::MarshalByRefObject::set_ObjectIdentity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ServerIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MarshalByRefObject*), "set_ObjectIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::MarshalByRefObject::CreateObjRef
// Il2CppName: CreateObjRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef* (System::MarshalByRefObject::*)(::System::Type*)>(&System::MarshalByRefObject::CreateObjRef)> {
  static const MethodInfo* get() {
    static auto* requestedType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MarshalByRefObject*), "CreateObjRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestedType});
  }
};
// Writing MetadataGetter for method: System::MarshalByRefObject::InitializeLifetimeService
// Il2CppName: InitializeLifetimeService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::MarshalByRefObject::*)()>(&System::MarshalByRefObject::InitializeLifetimeService)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MarshalByRefObject*), "InitializeLifetimeService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MarshalByRefObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
