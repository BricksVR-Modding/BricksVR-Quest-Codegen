// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "System/Runtime/Serialization/Formatters/TypeFilterLevel.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalSerializerTypeE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: InternalFE
  class InternalFE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::InternalFE);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalFE*, "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalFE
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalFE : public ::Il2CppObject {
    public:
    public:
    // System.Runtime.Serialization.Formatters.FormatterTypeStyle FEtypeFormat
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::Serialization::Formatters::FormatterTypeStyle FEtypeFormat;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::FormatterTypeStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.FormatterAssemblyStyle FEassemblyFormat
    // Size: 0x4
    // Offset: 0x14
    ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle FEassemblyFormat;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.TypeFilterLevel FEsecurityLevel
    // Size: 0x4
    // Offset: 0x18
    ::System::Runtime::Serialization::Formatters::TypeFilterLevel FEsecurityLevel;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::TypeFilterLevel) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE FEserializerTypeEnum
    // Size: 0x4
    // Offset: 0x1C
    ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE FEserializerTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE) == 0x4);
    public:
    // Get instance field reference: System.Runtime.Serialization.Formatters.FormatterTypeStyle FEtypeFormat
    [[deprecated]] ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& dyn_FEtypeFormat();
    // Get instance field reference: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle FEassemblyFormat
    [[deprecated]] ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& dyn_FEassemblyFormat();
    // Get instance field reference: System.Runtime.Serialization.Formatters.TypeFilterLevel FEsecurityLevel
    [[deprecated]] ::System::Runtime::Serialization::Formatters::TypeFilterLevel& dyn_FEsecurityLevel();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE FEserializerTypeEnum
    [[deprecated]] ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE& dyn_FEserializerTypeEnum();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalFE* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::InternalFE::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalFE*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.InternalFE
  #pragma pack(pop)
  static check_size<sizeof(InternalFE), 28 + sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE)> __System_Runtime_Serialization_Formatters_Binary_InternalFESizeCheck;
  static_assert(sizeof(InternalFE) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::InternalFE::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
