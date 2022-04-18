// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Normal.Realtime.Serialization.ISerializer`1
#include "Normal/Realtime/Serialization/ISerializer_1.hpp"
// Including type: Normal.Realtime.Serialization.PropertyHeader
#include "Normal/Realtime/Serialization/PropertyHeader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: WriteStream
  class WriteStream;
  // Forward declaring type: ReadStream
  class ReadStream;
  // Skipping declaration: ISerializer because it is already included!
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: PropertySerializer`1<T>
  template<typename T>
  struct PropertySerializer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Normal::Realtime::PropertySerializer_1, "Normal.Realtime", "PropertySerializer`1");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.PropertySerializer`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  template<typename T>
  struct PropertySerializer_1/*, public ::System::ValueType, public ::Normal::Realtime::Serialization::ISerializer_1<T>*/ {
    public:
    public:
    // public readonly Normal.Realtime.Serialization.ISerializer`1<T> serializer
    // Size: 0x8
    // Offset: 0x0
    ::Normal::Realtime::Serialization::ISerializer_1<T>* serializer;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Serialization::ISerializer_1<T>*) == 0x8);
    // public readonly Normal.Realtime.Serialization.PropertyHeader header
    // Size: 0x5
    // Offset: 0x0
    ::Normal::Realtime::Serialization::PropertyHeader header;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Serialization::PropertyHeader) == 0x5);
    public:
    // Creating value type constructor for type: PropertySerializer_1
    constexpr PropertySerializer_1(::Normal::Realtime::Serialization::ISerializer_1<T>* serializer_ = {}, ::Normal::Realtime::Serialization::PropertyHeader header_ = {}) noexcept : serializer{serializer_}, header{header_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Normal::Realtime::Serialization::ISerializer_1<T>
    operator ::Normal::Realtime::Serialization::ISerializer_1<T>() noexcept {
      return *reinterpret_cast<::Normal::Realtime::Serialization::ISerializer_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly Normal.Realtime.Serialization.ISerializer`1<T> serializer
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Serialization::ISerializer_1<T>*& dyn_serializer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::dyn_serializer");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "serializer"))->offset;
      return *reinterpret_cast<::Normal::Realtime::Serialization::ISerializer_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly Normal.Realtime.Serialization.PropertyHeader header
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Serialization::PropertyHeader& dyn_header() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::dyn_header");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "header"))->offset;
      return *reinterpret_cast<::Normal::Realtime::Serialization::PropertyHeader*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.UInt32 propertyID)
    // Offset: 0xFFFFFFFFFFFFFFFF
    PropertySerializer_1(uint propertyID) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(propertyID)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, propertyID);
    }
    // public System.Int32 Length(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Length(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::Length");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Normal::Realtime::PropertySerializer_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, value);
    }
    // public System.Void Write(ref Normal.Realtime.Serialization.WriteStream stream, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Write(ByRef<::Normal::Realtime::Serialization::WriteStream*> stream, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::Write");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Normal::Realtime::PropertySerializer_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(stream), value);
    }
    // public System.Void Read(ref Normal.Realtime.Serialization.ReadStream stream, ref T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Read(ByRef<::Normal::Realtime::Serialization::ReadStream*> stream, ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::Read");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Normal::Realtime::PropertySerializer_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(stream), byref(value));
    }
    // static private Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType FindWireType(Normal.Realtime.Serialization.ISerializer serializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Normal::Realtime::Serialization::Serialization::WireType FindWireType(::Normal::Realtime::Serialization::ISerializer* serializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::FindWireType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PropertySerializer_1<T>>::get(), "FindWireType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(serializer)})));
      return ::il2cpp_utils::RunMethodRethrow<::Normal::Realtime::Serialization::Serialization::WireType, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, serializer);
    }
    // static private Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType GetCustomWireType(Normal.Realtime.Serialization.ISerializer serializer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Normal::Realtime::Serialization::Serialization::WireType GetCustomWireType(::Normal::Realtime::Serialization::ISerializer* serializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertySerializer_1::GetCustomWireType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PropertySerializer_1<T>>::get(), "GetCustomWireType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(serializer)})));
      return ::il2cpp_utils::RunMethodRethrow<::Normal::Realtime::Serialization::Serialization::WireType, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, serializer);
    }
  }; // Normal.Realtime.PropertySerializer`1
  // Could not write size check! Type: Normal.Realtime.PropertySerializer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
