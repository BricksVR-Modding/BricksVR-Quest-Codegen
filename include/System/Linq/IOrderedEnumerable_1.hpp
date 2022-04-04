// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Forward declaring type: IOrderedEnumerable`1<TElement>
  template<typename TElement>
  class IOrderedEnumerable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IOrderedEnumerable_1, "System.Linq", "IOrderedEnumerable`1");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.IOrderedEnumerable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  class IOrderedEnumerable_1/*, public ::System::Collections::Generic::IEnumerable_1<TElement>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<TElement>
    operator ::System::Collections::Generic::IEnumerable_1<TElement>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(this);
    }
    // public System.Linq.IOrderedEnumerable`1<TElement> CreateOrderedEnumerable(System.Func`2<TElement,TKey> keySelector, System.Collections.Generic.IComparer`1<TKey> comparer, System.Boolean descending)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TKey>
    ::System::Linq::IOrderedEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::IOrderedEnumerable_1::CreateOrderedEnumerable");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Linq::IOrderedEnumerable_1<TElement>*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TElement>*, false>(this, ___generic__method, keySelector, comparer, descending);
    }
  }; // System.Linq.IOrderedEnumerable`1
  // Could not write size check! Type: System.Linq.IOrderedEnumerable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
