// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType
#include "Normal/Realtime/Serialization/Serialization_WireType.hpp"
// Completed includes
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: PropertyHeader
  struct PropertyHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::PropertyHeader, "Normal.Realtime.Serialization", "PropertyHeader");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x5
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.Serialization.PropertyHeader
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct PropertyHeader/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.UInt32 propertyID
    // Size: 0x4
    // Offset: 0x0
    uint propertyID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType propertyWireType
    // Size: 0x1
    // Offset: 0x4
    ::Normal::Realtime::Serialization::Serialization::WireType propertyWireType;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Serialization::Serialization::WireType) == 0x1);
    public:
    // Creating value type constructor for type: PropertyHeader
    constexpr PropertyHeader(uint propertyID_ = {}, ::Normal::Realtime::Serialization::Serialization::WireType propertyWireType_ = {}) noexcept : propertyID{propertyID_}, propertyWireType{propertyWireType_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.UInt32 propertyID
    [[deprecated]] uint& dyn_propertyID();
    // Get instance field reference: public readonly Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType propertyWireType
    [[deprecated]] ::Normal::Realtime::Serialization::Serialization::WireType& dyn_propertyWireType();
    // public System.Void .ctor(System.UInt32 propertyID, Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType propertyWireType)
    // Offset: 0x5C02A0
    // ABORTED: conflicts with another method.  PropertyHeader(uint propertyID, ::Normal::Realtime::Serialization::Serialization::WireType propertyWireType);
  }; // Normal.Realtime.Serialization.PropertyHeader
  #pragma pack(pop)
  static check_size<sizeof(PropertyHeader), 4 + sizeof(::Normal::Realtime::Serialization::Serialization::WireType)> __Normal_Realtime_Serialization_PropertyHeaderSizeCheck;
  static_assert(sizeof(PropertyHeader) == 0x5);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::PropertyHeader::PropertyHeader
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
