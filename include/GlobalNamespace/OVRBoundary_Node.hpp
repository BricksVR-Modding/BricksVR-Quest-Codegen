// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoundary::Node, "", "OVRBoundary/Node");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRBoundary/Node
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRBoundary::Node/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Node
    constexpr Node(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRBoundary/Node HandLeft
    static constexpr const int HandLeft = 3;
    // Get static field: static public OVRBoundary/Node HandLeft
    static ::GlobalNamespace::OVRBoundary::Node _get_HandLeft();
    // Set static field: static public OVRBoundary/Node HandLeft
    static void _set_HandLeft(::GlobalNamespace::OVRBoundary::Node value);
    // static field const value: static public OVRBoundary/Node HandRight
    static constexpr const int HandRight = 4;
    // Get static field: static public OVRBoundary/Node HandRight
    static ::GlobalNamespace::OVRBoundary::Node _get_HandRight();
    // Set static field: static public OVRBoundary/Node HandRight
    static void _set_HandRight(::GlobalNamespace::OVRBoundary::Node value);
    // static field const value: static public OVRBoundary/Node Head
    static constexpr const int Head = 9;
    // Get static field: static public OVRBoundary/Node Head
    static ::GlobalNamespace::OVRBoundary::Node _get_Head();
    // Set static field: static public OVRBoundary/Node Head
    static void _set_Head(::GlobalNamespace::OVRBoundary::Node value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // OVRBoundary/Node
  #pragma pack(pop)
  static check_size<sizeof(OVRBoundary::Node), 0 + sizeof(int)> __GlobalNamespace_OVRBoundary_NodeSizeCheck;
  static_assert(sizeof(OVRBoundary::Node) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
