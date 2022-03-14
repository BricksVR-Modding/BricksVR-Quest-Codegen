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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Contracts
namespace System::Diagnostics::Contracts {
  // Forward declaring type: Contract
  class Contract;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Contracts::Contract);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Contracts::Contract*, "System.Diagnostics.Contracts", "Contract");
// Type namespace: System.Diagnostics.Contracts
namespace System::Diagnostics::Contracts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Contracts.Contract
  // [TokenAttribute] Offset: FFFFFFFF
  class Contract : public ::Il2CppObject {
    public:
    // static public System.Boolean ForAll(System.Collections.Generic.IEnumerable`1<T> collection, System.Predicate`1<T> predicate)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ForAll(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Predicate_1<T>* predicate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Contracts::Contract::ForAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Diagnostics.Contracts", "Contract", "ForAll", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collection), ::il2cpp_utils::ExtractType(predicate)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, collection, predicate);
    }
  }; // System.Diagnostics.Contracts.Contract
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Contracts::Contract::ForAll
// Il2CppName: ForAll
// Cannot write MetadataGetter for generic methods!
