// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._EventInfo
#include "System/Runtime/InteropServices/_EventInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeEventHandle
  struct RuntimeEventHandle;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: EventInfo
  class EventInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::EventInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventInfo*, "System.Reflection", "EventInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.EventInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComDefaultInterfaceAttribute] Offset: 6C8604
  // [ComVisibleAttribute] Offset: 6C8604
  // [ClassInterfaceAttribute] Offset: 6C8604
  class EventInfo : public ::System::Reflection::MemberInfo/*, public ::System::Runtime::InteropServices::_EventInfo*/ {
    public:
    // Nested type: ::System::Reflection::EventInfo::AddEventAdapter
    class AddEventAdapter;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Reflection.EventInfo/System.Reflection.AddEventAdapter cached_add_event
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::EventInfo::AddEventAdapter* cached_add_event;
    // Field size check
    static_assert(sizeof(::System::Reflection::EventInfo::AddEventAdapter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_EventInfo
    operator ::System::Runtime::InteropServices::_EventInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_EventInfo*>(this);
    }
    // Creating conversion operator: operator ::System::Reflection::EventInfo::AddEventAdapter*
    constexpr operator ::System::Reflection::EventInfo::AddEventAdapter*() const noexcept {
      return cached_add_event;
    }
    // Get instance field reference: private System.Reflection.EventInfo/System.Reflection.AddEventAdapter cached_add_event
    ::System::Reflection::EventInfo::AddEventAdapter*& dyn_cached_add_event();
    // public System.Type get_EventHandlerType()
    // Offset: 0xBF1944
    ::System::Type* get_EventHandlerType();
    // public System.Reflection.MethodInfo GetAddMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    ::System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);
    // public System.Reflection.MethodInfo GetRaiseMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    ::System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);
    // public System.Reflection.MethodInfo GetRemoveMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    ::System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);
    // static private System.Reflection.EventInfo internal_from_handle_type(System.IntPtr event_handle, System.IntPtr type_handle)
    // Offset: 0xBF1A94
    static ::System::Reflection::EventInfo* internal_from_handle_type(::System::IntPtr event_handle, ::System::IntPtr type_handle);
    // static System.Reflection.EventInfo GetEventFromHandle(Mono.RuntimeEventHandle handle, System.RuntimeTypeHandle reflectedType)
    // Offset: 0xBF1A98
    static ::System::Reflection::EventInfo* GetEventFromHandle(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType);
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0xBF19B8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    ::System::Reflection::MemberTypes get_MemberType();
    // protected System.Void .ctor()
    // Offset: 0xBF19C0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::EventInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xBF19D0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xBF19DC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.EventInfo
  #pragma pack(pop)
  static check_size<sizeof(EventInfo), 16 + sizeof(::System::Reflection::EventInfo::AddEventAdapter*)> __System_Reflection_EventInfoSizeCheck;
  static_assert(sizeof(EventInfo) == 0x18);
  // static public System.Boolean op_Equality(System.Reflection.EventInfo left, System.Reflection.EventInfo right)
  // Offset: 0xBF19EC
  bool operator ==(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.EventInfo left, System.Reflection.EventInfo right)
  // Offset: 0xBF1A38
  bool operator !=(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::EventInfo::get_EventHandlerType
// Il2CppName: get_EventHandlerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::EventInfo::*)()>(&System::Reflection::EventInfo::get_EventHandlerType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "get_EventHandlerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::GetAddMethod
// Il2CppName: GetAddMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::EventInfo::*)(bool)>(&System::Reflection::EventInfo::GetAddMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "GetAddMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::GetRaiseMethod
// Il2CppName: GetRaiseMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::EventInfo::*)(bool)>(&System::Reflection::EventInfo::GetRaiseMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "GetRaiseMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::GetRemoveMethod
// Il2CppName: GetRemoveMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::EventInfo::*)(bool)>(&System::Reflection::EventInfo::GetRemoveMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "GetRemoveMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::internal_from_handle_type
// Il2CppName: internal_from_handle_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (*)(::System::IntPtr, ::System::IntPtr)>(&System::Reflection::EventInfo::internal_from_handle_type)> {
  static const MethodInfo* get() {
    static auto* event_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type_handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "internal_from_handle_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{event_handle, type_handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::GetEventFromHandle
// Il2CppName: GetEventFromHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (*)(::Mono::RuntimeEventHandle, ::System::RuntimeTypeHandle)>(&System::Reflection::EventInfo::GetEventFromHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("Mono", "RuntimeEventHandle")->byval_arg;
    static auto* reflectedType = &::il2cpp_utils::GetClassFromName("System", "RuntimeTypeHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "GetEventFromHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, reflectedType});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (System::Reflection::EventInfo::*)()>(&System::Reflection::EventInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::EventInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::EventInfo::*)(::Il2CppObject*)>(&System::Reflection::EventInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::EventInfo::*)()>(&System::Reflection::EventInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::EventInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::EventInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::EventInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
