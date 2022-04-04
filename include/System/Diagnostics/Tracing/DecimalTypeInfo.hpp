// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Skipping declaration: TraceLoggingTypeInfo because it is already included!
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: DecimalTypeInfo
  class DecimalTypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::DecimalTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::DecimalTypeInfo*, "System.Diagnostics.Tracing", "DecimalTypeInfo");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.DecimalTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DecimalTypeInfo : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Decimal> {
    public:
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref System.Decimal value)
    // Offset: 0x20A670
    void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ByRef<::System::Decimal> value);
    // public System.Void .ctor()
    // Offset: 0x20A7D0
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecimalTypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::DecimalTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecimalTypeInfo*, creationType>()));
    }
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0x20A740
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::StringW name, ::System::Diagnostics::Tracing::EventFieldFormat format);
  }; // System.Diagnostics.Tracing.DecimalTypeInfo
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DecimalTypeInfo::WriteData
// Il2CppName: WriteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DecimalTypeInfo::*)(::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ByRef<::System::Decimal>)>(&System::Diagnostics::Tracing::DecimalTypeInfo::WriteData)> {
  static const MethodInfo* get() {
    static auto* collector = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingDataCollector")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DecimalTypeInfo*), "WriteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collector, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DecimalTypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DecimalTypeInfo::WriteMetadata
// Il2CppName: WriteMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DecimalTypeInfo::*)(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::StringW, ::System::Diagnostics::Tracing::EventFieldFormat)>(&System::Diagnostics::Tracing::DecimalTypeInfo::WriteMetadata)> {
  static const MethodInfo* get() {
    static auto* collector = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "TraceLoggingMetadataCollector")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventFieldFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DecimalTypeInfo*), "WriteMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collector, name, format});
  }
};
