// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair
  class KeyValuePair;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Generic::KeyValuePair);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::KeyValuePair*, "System.Collections.Generic", "KeyValuePair");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.KeyValuePair
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyValuePair : public ::Il2CppObject {
    public:
    // static System.String PairToString(System.Object key, System.Object value)
    // Offset: 0x9EEC28
    static ::StringW PairToString(::Il2CppObject* key, ::Il2CppObject* value);
  }; // System.Collections.Generic.KeyValuePair
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::KeyValuePair::PairToString
// Il2CppName: PairToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Generic::KeyValuePair::PairToString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::KeyValuePair*), "PairToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
