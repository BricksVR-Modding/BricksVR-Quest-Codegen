// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.InvokableCall`1
#include "UnityEngine/Events/InvokableCall_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: CachedInvokableCall`1<T>
  template<typename T>
  class CachedInvokableCall_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::CachedInvokableCall_1, "UnityEngine.Events", "CachedInvokableCall`1");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Events.CachedInvokableCall`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class CachedInvokableCall_1 : public ::UnityEngine::Events::InvokableCall_1<T> {
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
    // private readonly T m_Arg1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T m_Arg1;
    public:
    // Deleting conversion operator: operator ::UnityEngine::Events::UnityAction_1<T1>*
    // Cannot delete conversion operator because it seems to have a generic type in the definition! This may not be defined!
    // Autogenerated instance field getter
    // Get instance field: private readonly T m_Arg1
    T& dyn_m_Arg1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::CachedInvokableCall_1::dyn_m_Arg1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Arg1"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(UnityEngine.Object target, System.Reflection.MethodInfo theFunction, T argument)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedInvokableCall_1<T>* New_ctor(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* theFunction, T argument) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::CachedInvokableCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedInvokableCall_1<T>*, creationType>(target, theFunction, argument)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.InvokableCall`1
    // Base method: System.Void InvokableCall_1::Invoke(System.Object[] args)
    void Invoke(::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::CachedInvokableCall_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, args);
    }
    // public override System.Void Invoke(T arg0)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.InvokableCall`1
    // Base method: System.Void InvokableCall_1::Invoke(T arg0)
    void Invoke(T arg0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::CachedInvokableCall_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, arg0);
    }
  }; // UnityEngine.Events.CachedInvokableCall`1
  // Could not write size check! Type: UnityEngine.Events.CachedInvokableCall`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
