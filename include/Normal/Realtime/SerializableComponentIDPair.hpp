// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: SerializableComponentIDPair
  struct SerializableComponentIDPair;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::SerializableComponentIDPair, "Normal.Realtime", "SerializableComponentIDPair");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.SerializableComponentIDPair
  // [TokenAttribute] Offset: FFFFFFFF
  struct SerializableComponentIDPair/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 componentID
    // Size: 0x4
    // Offset: 0x0
    int componentID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: componentID and: component
    char __padding0[0x4] = {};
    // public UnityEngine.Component component
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Component* component;
    // Field size check
    static_assert(sizeof(::UnityEngine::Component*) == 0x8);
    public:
    // Creating value type constructor for type: SerializableComponentIDPair
    constexpr SerializableComponentIDPair(int componentID_ = {}, ::UnityEngine::Component* component_ = {}) noexcept : componentID{componentID_}, component{component_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 componentID
    int& dyn_componentID();
    // Get instance field reference: public UnityEngine.Component component
    ::UnityEngine::Component*& dyn_component();
    // public System.Void .ctor(System.UInt32 componentID, UnityEngine.Component component)
    // Offset: 0xA69684
    SerializableComponentIDPair(uint componentID, ::UnityEngine::Component* component);
  }; // Normal.Realtime.SerializableComponentIDPair
  #pragma pack(pop)
  static check_size<sizeof(SerializableComponentIDPair), 8 + sizeof(::UnityEngine::Component*)> __Normal_Realtime_SerializableComponentIDPairSizeCheck;
  static_assert(sizeof(SerializableComponentIDPair) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::SerializableComponentIDPair::SerializableComponentIDPair
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
