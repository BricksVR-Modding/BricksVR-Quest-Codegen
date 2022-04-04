// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: InvokableCall`1<T1>
  template<typename T1>
  class InvokableCall_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_1, "UnityEngine.Events", "InvokableCall`1");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Events.InvokableCall`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1>
  class InvokableCall_1 : public ::UnityEngine::Events::BaseInvokableCall {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private UnityEngine.Events.UnityAction`1<T1> Delegate
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Events::UnityAction_1<T1>* Delegate;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_1<T1>*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Events::UnityAction_1<T1>*
    constexpr operator ::UnityEngine::Events::UnityAction_1<T1>*() const noexcept {
      return Delegate;
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Events.UnityAction`1<T1> Delegate
    [[deprecated]] ::UnityEngine::Events::UnityAction_1<T1>*& dyn_Delegate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::dyn_Delegate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Delegate"))->offset;
      return *reinterpret_cast<::UnityEngine::Events::UnityAction_1<T1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Void add_Delegate(UnityEngine.Events.UnityAction`1<T1> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_Delegate(::UnityEngine::Events::UnityAction_1<T1>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::add_Delegate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_Delegate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Void remove_Delegate(UnityEngine.Events.UnityAction`1<T1> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_Delegate(::UnityEngine::Events::UnityAction_1<T1>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::remove_Delegate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_Delegate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(UnityEngine.Events.UnityAction`1<T1> action)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall_1<T1>* New_ctor(::UnityEngine::Events::UnityAction_1<T1>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall_1<T1>*, creationType>(action)));
    }
    // public System.Void Invoke(T1 args0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(T1 args0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Events::InvokableCall_1<T1>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, args0);
    }
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall_1<T1>* New_ctor(::Il2CppObject* target, ::System::Reflection::MethodInfo* theFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall_1<T1>*, creationType>(target, theFunction)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Events::BaseInvokableCall*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, args);
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, ::System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_1::Find");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Events::BaseInvokableCall*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, targetObj, method);
    }
  }; // UnityEngine.Events.InvokableCall`1
  // Could not write size check! Type: UnityEngine.Events.InvokableCall`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
