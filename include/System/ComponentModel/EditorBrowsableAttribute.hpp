// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.EditorBrowsableState
#include "System/ComponentModel/EditorBrowsableState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: EditorBrowsableAttribute
  class EditorBrowsableAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::EditorBrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EditorBrowsableAttribute*, "System.ComponentModel", "EditorBrowsableAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EditorBrowsableAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6D2CA0
  class EditorBrowsableAttribute : public ::System::Attribute {
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
    // private System.ComponentModel.EditorBrowsableState browsableState
    // Size: 0x4
    // Offset: 0x10
    ::System::ComponentModel::EditorBrowsableState browsableState;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::EditorBrowsableState) == 0x4);
    public:
    // Creating conversion operator: operator ::System::ComponentModel::EditorBrowsableState
    constexpr operator ::System::ComponentModel::EditorBrowsableState() const noexcept {
      return browsableState;
    }
    // Get instance field reference: private System.ComponentModel.EditorBrowsableState browsableState
    ::System::ComponentModel::EditorBrowsableState& dyn_browsableState();
    // public System.Void .ctor(System.ComponentModel.EditorBrowsableState state)
    // Offset: 0xC7BD78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditorBrowsableAttribute* New_ctor(::System::ComponentModel::EditorBrowsableState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::EditorBrowsableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditorBrowsableAttribute*, creationType>(state)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC7BDA4
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC7BE40
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.EditorBrowsableAttribute
  #pragma pack(pop)
  static check_size<sizeof(EditorBrowsableAttribute), 16 + sizeof(::System::ComponentModel::EditorBrowsableState)> __System_ComponentModel_EditorBrowsableAttributeSizeCheck;
  static_assert(sizeof(EditorBrowsableAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::EditorBrowsableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::EditorBrowsableAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EditorBrowsableAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::EditorBrowsableAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EditorBrowsableAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EditorBrowsableAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::EditorBrowsableAttribute::*)()>(&System::ComponentModel::EditorBrowsableAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EditorBrowsableAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
