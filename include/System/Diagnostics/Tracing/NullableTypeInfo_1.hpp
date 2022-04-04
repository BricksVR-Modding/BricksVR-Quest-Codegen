// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Skipping declaration: TraceLoggingTypeInfo because it is already included!
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: NullableTypeInfo`1<T>
  template<typename T>
  class NullableTypeInfo_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Diagnostics::Tracing::NullableTypeInfo_1, "System.Diagnostics.Tracing", "NullableTypeInfo`1");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.NullableTypeInfo`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class NullableTypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Nullable_1<T>> {
    public:
    public:
    // private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<T> valueInfo
    // Size: 0x8
    // Offset: 0x0
    ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>* valueInfo;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>*
    constexpr operator ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>*() const noexcept {
      return valueInfo;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<T> valueInfo
    [[deprecated]] ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>*& dyn_valueInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::NullableTypeInfo_1::dyn_valueInfo");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "valueInfo"))->offset;
      return *reinterpret_cast<::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref System.Nullable`1<T> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ByRef<::System::Nullable_1<T>> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::NullableTypeInfo_1::WriteData");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Diagnostics::Tracing::NullableTypeInfo_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, collector, byref(value));
    }
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::StringW name, ::System::Diagnostics::Tracing::EventFieldFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::NullableTypeInfo_1::WriteMetadata");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Diagnostics::Tracing::TraceLoggingTypeInfo*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, collector, name, format);
    }
  }; // System.Diagnostics.Tracing.NullableTypeInfo`1
  // Could not write size check! Type: System.Diagnostics.Tracing.NullableTypeInfo`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
