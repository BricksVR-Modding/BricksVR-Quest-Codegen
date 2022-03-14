// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Enumerable::$$c__DisplayClass7_0_3, "System.Linq", "Enumerable/<>c__DisplayClass7_0`3");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/System.Linq.<>c__DisplayClass7_0`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TSource, typename TMiddle, typename TResult>
  class Enumerable::$$c__DisplayClass7_0_3 : public ::Il2CppObject {
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
    // public System.Func`2<TMiddle,TResult> selector2
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TMiddle, TResult>* selector2;
    // Field size check
    static_assert(sizeof(::System::Func_2<TMiddle, TResult>*) == 0x8);
    // public System.Func`2<TSource,TMiddle> selector1
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<TSource, TMiddle>* selector1;
    // Field size check
    static_assert(sizeof(::System::Func_2<TSource, TMiddle>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<TMiddle,TResult> selector2
    ::System::Func_2<TMiddle, TResult>*& dyn_selector2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::$$c__DisplayClass7_0_3::dyn_selector2");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "selector2"))->offset;
      return *reinterpret_cast<::System::Func_2<TMiddle, TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<TSource,TMiddle> selector1
    ::System::Func_2<TSource, TMiddle>*& dyn_selector1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::$$c__DisplayClass7_0_3::dyn_selector1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "selector1"))->offset;
      return *reinterpret_cast<::System::Func_2<TSource, TMiddle>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // TResult <CombineSelectors>b__0(TSource x)
    // Offset: 0xFFFFFFFF
    TResult $CombineSelectors$b__0(TSource x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::$$c__DisplayClass7_0_3::<CombineSelectors>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<CombineSelectors>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method, x);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::$$c__DisplayClass7_0_3<TSource, TMiddle, TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Enumerable::$$c__DisplayClass7_0_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::$$c__DisplayClass7_0_3<TSource, TMiddle, TResult>*, creationType>()));
    }
  }; // System.Linq.Enumerable/System.Linq.<>c__DisplayClass7_0`3
  // Could not write size check! Type: System.Linq.Enumerable/System.Linq.<>c__DisplayClass7_0`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
