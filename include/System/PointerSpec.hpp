// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ModifierSpec
#include "System/ModifierSpec.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: PointerSpec
  class PointerSpec;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::PointerSpec);
DEFINE_IL2CPP_ARG_TYPE(::System::PointerSpec*, "System", "PointerSpec");
// Type namespace: System
namespace System {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.PointerSpec
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerSpec : public ::Il2CppObject/*, public ::System::ModifierSpec*/ {
    public:
    public:
    // private System.Int32 pointer_level
    // Size: 0x4
    // Offset: 0x10
    int pointer_level;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ModifierSpec
    operator ::System::ModifierSpec() noexcept {
      return *reinterpret_cast<::System::ModifierSpec*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return pointer_level;
    }
    // Get instance field reference: private System.Int32 pointer_level
    [[deprecated("Use field access instead!")]] int& dyn_pointer_level();
    // System.Void .ctor(System.Int32 pointer_level)
    // Offset: 0x217270
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerSpec* New_ctor(int pointer_level) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::PointerSpec::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerSpec*, creationType>(pointer_level)));
    }
    // public System.Type Resolve(System.Type type)
    // Offset: 0x54CB70
    ::System::Type* Resolve(::System::Type* type);
    // public System.Text.StringBuilder Append(System.Text.StringBuilder sb)
    // Offset: 0x54CB40
    ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb);
    // public override System.String ToString()
    // Offset: 0x54CBC0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.PointerSpec
  #pragma pack(pop)
  static check_size<sizeof(PointerSpec), 16 + sizeof(int)> __System_PointerSpecSizeCheck;
  static_assert(sizeof(PointerSpec) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::PointerSpec::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::PointerSpec::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::PointerSpec::*)(::System::Type*)>(&System::PointerSpec::Resolve)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::PointerSpec*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::PointerSpec::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (System::PointerSpec::*)(::System::Text::StringBuilder*)>(&System::PointerSpec::Append)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::PointerSpec*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
// Writing MetadataGetter for method: System::PointerSpec::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::PointerSpec::*)()>(&System::PointerSpec::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::PointerSpec*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
