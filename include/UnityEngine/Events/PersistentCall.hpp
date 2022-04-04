// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.PersistentListenerMode
#include "UnityEngine/Events/PersistentListenerMode.hpp"
// Including type: UnityEngine.Events.UnityEventCallState
#include "UnityEngine/Events/UnityEventCallState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: ArgumentCache
  class ArgumentCache;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: PersistentCall
  class PersistentCall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Events::PersistentCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentCall*, "UnityEngine.Events", "PersistentCall");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.PersistentCall
  // [TokenAttribute] Offset: FFFFFFFF
  class PersistentCall : public ::Il2CppObject {
    public:
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xCB170
    // private UnityEngine.Object m_Target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Object* m_Target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xCB1F0
    // private System.String m_MethodName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_MethodName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xCB290
    // private UnityEngine.Events.PersistentListenerMode m_Mode
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Events::PersistentListenerMode m_Mode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::PersistentListenerMode) == 0x4);
    // Padding between fields: m_Mode and: m_Arguments
    char __padding2[0x4] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xCB330
    // private UnityEngine.Events.ArgumentCache m_Arguments
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Events::ArgumentCache* m_Arguments;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::ArgumentCache*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xCB4A0
    // [FormerlySerializedAsAttribute] Offset: 0xCB4A0
    // private UnityEngine.Events.UnityEventCallState m_CallState
    // Size: 0x4
    // Offset: 0x30
    ::UnityEngine::Events::UnityEventCallState m_CallState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEventCallState) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Object m_Target
    [[deprecated]] ::UnityEngine::Object*& dyn_m_Target();
    // Get instance field reference: private System.String m_MethodName
    [[deprecated]] ::StringW& dyn_m_MethodName();
    // Get instance field reference: private UnityEngine.Events.PersistentListenerMode m_Mode
    [[deprecated]] ::UnityEngine::Events::PersistentListenerMode& dyn_m_Mode();
    // Get instance field reference: private UnityEngine.Events.ArgumentCache m_Arguments
    [[deprecated]] ::UnityEngine::Events::ArgumentCache*& dyn_m_Arguments();
    // Get instance field reference: private UnityEngine.Events.UnityEventCallState m_CallState
    [[deprecated]] ::UnityEngine::Events::UnityEventCallState& dyn_m_CallState();
    // public UnityEngine.Object get_target()
    // Offset: 0x64E270
    ::UnityEngine::Object* get_target();
    // public System.String get_methodName()
    // Offset: 0x625270
    ::StringW get_methodName();
    // public UnityEngine.Events.PersistentListenerMode get_mode()
    // Offset: 0x981D00
    ::UnityEngine::Events::PersistentListenerMode get_mode();
    // public UnityEngine.Events.ArgumentCache get_arguments()
    // Offset: 0x625160
    ::UnityEngine::Events::ArgumentCache* get_arguments();
    // public System.Boolean IsValid()
    // Offset: 0x996790
    bool IsValid();
    // public UnityEngine.Events.BaseInvokableCall GetRuntimeCall(UnityEngine.Events.UnityEventBase theEvent)
    // Offset: 0x996420
    ::UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(::UnityEngine::Events::UnityEventBase* theEvent);
    // static private UnityEngine.Events.BaseInvokableCall GetObjectCall(UnityEngine.Object target, System.Reflection.MethodInfo method, UnityEngine.Events.ArgumentCache arguments)
    // Offset: 0x995ED0
    static ::UnityEngine::Events::BaseInvokableCall* GetObjectCall(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* method, ::UnityEngine::Events::ArgumentCache* arguments);
    // public System.Void .ctor()
    // Offset: 0x996820
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PersistentCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::PersistentCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PersistentCall*, creationType>()));
    }
  }; // UnityEngine.Events.PersistentCall
  #pragma pack(pop)
  static check_size<sizeof(PersistentCall), 48 + sizeof(::UnityEngine::Events::UnityEventCallState)> __UnityEngine_Events_PersistentCallSizeCheck;
  static_assert(sizeof(PersistentCall) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_target
// Il2CppName: get_target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_methodName
// Il2CppName: get_methodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_methodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_methodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_mode
// Il2CppName: get_mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::PersistentListenerMode (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::get_arguments
// Il2CppName: get_arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::ArgumentCache* (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::get_arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "get_arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Events::PersistentCall::*)()>(&UnityEngine::Events::PersistentCall::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::GetRuntimeCall
// Il2CppName: GetRuntimeCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::BaseInvokableCall* (UnityEngine::Events::PersistentCall::*)(::UnityEngine::Events::UnityEventBase*)>(&UnityEngine::Events::PersistentCall::GetRuntimeCall)> {
  static const MethodInfo* get() {
    static auto* theEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "GetRuntimeCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{theEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::GetObjectCall
// Il2CppName: GetObjectCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::BaseInvokableCall* (*)(::UnityEngine::Object*, ::System::Reflection::MethodInfo*, ::UnityEngine::Events::ArgumentCache*)>(&UnityEngine::Events::PersistentCall::GetObjectCall)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* arguments = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "ArgumentCache")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCall*), "GetObjectCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, method, arguments});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
