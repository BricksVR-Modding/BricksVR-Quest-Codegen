// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.ManifestBuilder
#include "System/Diagnostics/Tracing/ManifestBuilder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0*, "System.Diagnostics.Tracing", "ManifestBuilder/<>c__DisplayClass22_0");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ManifestBuilder/System.Diagnostics.Tracing.<>c__DisplayClass22_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ManifestBuilder::$$c__DisplayClass22_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Text.StringBuilder stringBuilder
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::StringBuilder* stringBuilder;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // public System.String eventMessage
    // Size: 0x8
    // Offset: 0x18
    ::StringW eventMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 writtenSoFar
    // Size: 0x4
    // Offset: 0x20
    int writtenSoFar;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Text.StringBuilder stringBuilder
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_stringBuilder();
    // Get instance field reference: public System.String eventMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_eventMessage();
    // Get instance field reference: public System.Int32 writtenSoFar
    [[deprecated("Use field access instead!")]] int& dyn_writtenSoFar();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBuilder::$$c__DisplayClass22_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBuilder::$$c__DisplayClass22_0*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.ManifestBuilder/System.Diagnostics.Tracing.<>c__DisplayClass22_0
  #pragma pack(pop)
  static check_size<sizeof(ManifestBuilder::$$c__DisplayClass22_0), 32 + sizeof(int)> __System_Diagnostics_Tracing_ManifestBuilder_$$c__DisplayClass22_0SizeCheck;
  static_assert(sizeof(ManifestBuilder::$$c__DisplayClass22_0) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
