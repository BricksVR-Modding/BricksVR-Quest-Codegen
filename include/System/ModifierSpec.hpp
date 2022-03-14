// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ModifierSpec
  class ModifierSpec;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ModifierSpec);
DEFINE_IL2CPP_ARG_TYPE(::System::ModifierSpec*, "System", "ModifierSpec");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ModifierSpec
  // [TokenAttribute] Offset: FFFFFFFF
  class ModifierSpec {
    public:
    // public System.Type Resolve(System.Type type)
    // Offset: 0xFFFFFFFF
    ::System::Type* Resolve(::System::Type* type);
    // public System.Text.StringBuilder Append(System.Text.StringBuilder sb)
    // Offset: 0xFFFFFFFF
    ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb);
  }; // System.ModifierSpec
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ModifierSpec::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ModifierSpec::*)(::System::Type*)>(&System::ModifierSpec::Resolve)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ModifierSpec*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ModifierSpec::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (System::ModifierSpec::*)(::System::Text::StringBuilder*)>(&System::ModifierSpec::Append)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ModifierSpec*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
