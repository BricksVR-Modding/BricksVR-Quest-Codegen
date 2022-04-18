// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: StateMachineAttribute
  class StateMachineAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::StateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::StateMachineAttribute*, "System.Runtime.CompilerServices", "StateMachineAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.StateMachineAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FA970
  class StateMachineAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xBB1F0
    // private System.Type <StateMachineType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* StateMachineType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return StateMachineType;
    }
    // Get instance field reference: private System.Type <StateMachineType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$StateMachineType$k__BackingField();
    // private System.Void set_StateMachineType(System.Type value)
    // Offset: 0x269100
    void set_StateMachineType(::System::Type* value);
    // public System.Void .ctor(System.Type stateMachineType)
    // Offset: 0x209300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StateMachineAttribute* New_ctor(::System::Type* stateMachineType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::StateMachineAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StateMachineAttribute*, creationType>(stateMachineType)));
    }
  }; // System.Runtime.CompilerServices.StateMachineAttribute
  #pragma pack(pop)
  static check_size<sizeof(StateMachineAttribute), 16 + sizeof(::System::Type*)> __System_Runtime_CompilerServices_StateMachineAttributeSizeCheck;
  static_assert(sizeof(StateMachineAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::StateMachineAttribute::set_StateMachineType
// Il2CppName: set_StateMachineType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::StateMachineAttribute::*)(::System::Type*)>(&System::Runtime::CompilerServices::StateMachineAttribute::set_StateMachineType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::StateMachineAttribute*), "set_StateMachineType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::StateMachineAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
