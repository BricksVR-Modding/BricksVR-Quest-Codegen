// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.PropertyAccessor`1
#include "System/Diagnostics/Tracing/PropertyAccessor_1.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Skipping declaration: Getter because it is already included!
  // Forward declaring type: TraceLoggingTypeInfo`1<DataType>
  template<typename DataType>
  class TraceLoggingTypeInfo_1;
  // Forward declaring type: PropertyAnalysis
  class PropertyAnalysis;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ClassPropertyWriter`2<ContainerType, ValueType>
  template<typename ContainerType, typename ValueType>
  class ClassPropertyWriter_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Diagnostics::Tracing::ClassPropertyWriter_2, "System.Diagnostics.Tracing", "ClassPropertyWriter`2");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.ClassPropertyWriter`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename ContainerType, typename ValueType>
  class ClassPropertyWriter_2 : public ::System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType> {
    public:
    // Nested type: ::System::Diagnostics::Tracing::ClassPropertyWriter_2::Getter<ContainerType, ValueType>
    class Getter;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Diagnostics.Tracing.ClassPropertyWriter`2/System.Diagnostics.Tracing.Getter
    // [TokenAttribute] Offset: FFFFFFFF
    class Getter : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = ClassPropertyWriter_2<ContainerType, ValueType>*;
      static constexpr std::string_view NESTED_NAME = "Getter";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename ClassPropertyWriter_2<ContainerType, ValueType>::Getter* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::Getter::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename ClassPropertyWriter_2<ContainerType, ValueType>::Getter*, creationType>(object, method)));
      }
      // public ValueType Invoke(ContainerType container)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ValueType Invoke(ContainerType container) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::Getter::Invoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter*), -1)));
        return ::il2cpp_utils::RunMethodRethrow<ValueType, false>(this, ___internal__method, container);
      }
      // public System.IAsyncResult BeginInvoke(ContainerType container, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::IAsyncResult* BeginInvoke(ContainerType container, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::Getter::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter*), -1)));
        return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, container, callback, object);
      }
      // public ValueType EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ValueType EndInvoke(::System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::Getter::EndInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter*), -1)));
        return ::il2cpp_utils::RunMethodRethrow<ValueType, false>(this, ___internal__method, result);
      }
    }; // System.Diagnostics.Tracing.ClassPropertyWriter`2/System.Diagnostics.Tracing.Getter
    // Could not write size check! Type: System.Diagnostics.Tracing.ClassPropertyWriter`2/System.Diagnostics.Tracing.Getter is generic, or has no fields that are valid for size checks!
    public:
    // private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<ValueType> valueTypeInfo
    // Size: 0x8
    // Offset: 0x0
    ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ValueType>* valueTypeInfo;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ValueType>*) == 0x8);
    // private readonly System.Diagnostics.Tracing.ClassPropertyWriter`2/System.Diagnostics.Tracing.Getter<ContainerType,ValueType> getter
    // Size: 0x8
    // Offset: 0x0
    typename ::System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter* getter;
    // Field size check
    static_assert(sizeof(typename ::System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<ValueType> valueTypeInfo
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ValueType>*& dyn_valueTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::dyn_valueTypeInfo");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "valueTypeInfo"))->offset;
      return *reinterpret_cast<::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ValueType>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Diagnostics.Tracing.ClassPropertyWriter`2/System.Diagnostics.Tracing.Getter<ContainerType,ValueType> getter
    [[deprecated("Use field access instead!")]] typename ::System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter*& dyn_getter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::dyn_getter");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "getter"))->offset;
      return *reinterpret_cast<typename ::System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Diagnostics.Tracing.PropertyAnalysis property)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClassPropertyWriter_2<ContainerType, ValueType>* New_ctor(::System::Diagnostics::Tracing::PropertyAnalysis* property) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClassPropertyWriter_2<ContainerType, ValueType>*, creationType>(property)));
    }
    // public override System.Void Write(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref ContainerType container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.PropertyAccessor`1
    // Base method: System.Void PropertyAccessor_1::Write(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref ContainerType container)
    void Write(::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ByRef<ContainerType> container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::Write");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, collector, byref(container));
    }
    // public override System.Object GetData(ContainerType container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.PropertyAccessor`1
    // Base method: System.Object PropertyAccessor_1::GetData(ContainerType container)
    ::Il2CppObject* GetData(ContainerType container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ClassPropertyWriter_2::GetData");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, container);
    }
  }; // System.Diagnostics.Tracing.ClassPropertyWriter`2
  // Could not write size check! Type: System.Diagnostics.Tracing.ClassPropertyWriter`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
