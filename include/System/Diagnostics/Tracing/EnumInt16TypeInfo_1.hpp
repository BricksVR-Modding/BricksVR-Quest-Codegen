// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Skipping declaration: TraceLoggingTypeInfo because it is already included!
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EnumInt16TypeInfo`1<EnumType>
  template<typename EnumType>
  class EnumInt16TypeInfo_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Diagnostics::Tracing::EnumInt16TypeInfo_1, "System.Diagnostics.Tracing", "EnumInt16TypeInfo`1");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.EnumInt16TypeInfo`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename EnumType>
  class EnumInt16TypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<EnumType> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumInt16TypeInfo_1<EnumType>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumInt16TypeInfo_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumInt16TypeInfo_1<EnumType>*, creationType>()));
    }
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::StringW name, ::System::Diagnostics::Tracing::EventFieldFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumInt16TypeInfo_1::WriteMetadata");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Diagnostics::Tracing::TraceLoggingTypeInfo*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, collector, name, format);
    }
    // public override System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref EnumType value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref EnumType value)
    void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ByRef<EnumType> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumInt16TypeInfo_1::WriteData");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, collector, byref(value));
    }
    // public override System.Object GetData(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Object TraceLoggingTypeInfo::GetData(System.Object value)
    ::Il2CppObject* GetData(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumInt16TypeInfo_1::GetData");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Diagnostics::Tracing::TraceLoggingTypeInfo*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, value);
    }
  }; // System.Diagnostics.Tracing.EnumInt16TypeInfo`1
  // Could not write size check! Type: System.Diagnostics.Tracing.EnumInt16TypeInfo`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
