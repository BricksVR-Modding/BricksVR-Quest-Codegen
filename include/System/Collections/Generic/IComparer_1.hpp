// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IComparer_1, "System.Collections.Generic", "IComparer`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IComparer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IComparer_1 {
    public:
    // public System.Int32 Compare(T x, T y)
    // Offset: 0xFFFFFFFF
    int Compare(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IComparer_1::Compare");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Compare", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(y)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, x, y);
    }
  }; // System.Collections.Generic.IComparer`1
  // Could not write size check! Type: System.Collections.Generic.IComparer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
