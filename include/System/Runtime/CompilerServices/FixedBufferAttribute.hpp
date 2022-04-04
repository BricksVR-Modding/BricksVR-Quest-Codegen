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
  // Forward declaring type: FixedBufferAttribute
  class FixedBufferAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::FixedBufferAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::FixedBufferAttribute*, "System.Runtime.CompilerServices", "FixedBufferAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.FixedBufferAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 107CE0
  class FixedBufferAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Type elementType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* elementType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x18
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Type elementType
    [[deprecated]] ::System::Type*& dyn_elementType();
    // Get instance field reference: private System.Int32 length
    [[deprecated]] int& dyn_length();
    // public System.Type get_ElementType()
    // Offset: 0x1E1920
    ::System::Type* get_ElementType();
    // public System.Int32 get_Length()
    // Offset: 0x1E1910
    int get_Length();
    // public System.Void .ctor(System.Type elementType, System.Int32 length)
    // Offset: 0x49FE80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedBufferAttribute* New_ctor(::System::Type* elementType, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::FixedBufferAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedBufferAttribute*, creationType>(elementType, length)));
    }
  }; // System.Runtime.CompilerServices.FixedBufferAttribute
  #pragma pack(pop)
  static check_size<sizeof(FixedBufferAttribute), 24 + sizeof(int)> __System_Runtime_CompilerServices_FixedBufferAttributeSizeCheck;
  static_assert(sizeof(FixedBufferAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType
// Il2CppName: get_ElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(&System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::FixedBufferAttribute*), "get_ElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::FixedBufferAttribute::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(&System::Runtime::CompilerServices::FixedBufferAttribute::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::FixedBufferAttribute*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::FixedBufferAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
